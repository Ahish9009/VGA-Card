##################################################
#                                                #
# N2N script file generated in SOC Encounter     #
# created on: 11/06/2019 22:13:27                  #
# script file: ./n2n_input/ec.tcl                        #
#                                                #
##################################################

if {[catch {

#
# private namespace "ec" to prevent name clash
#
namespace eval ec {}

# start timer
puts "Start at: [clock format [clock seconds] -format {%x %X}]"
set ec::start [clock seconds]

# working, input/output directories and variables
set ec::pwd /root/ASIC_DESIGN/VLSI_DESIGN_2019/shivansh_2018102007
set ec::inDir ./n2n_input
set ec::outDir ./n2n_output
set ec::MODULE screen_design
set ec::OPCOND slow
set ec::LIBRARY NULL
set ec::VERILOG $ec::inDir/ec.v
set ec::SDC $ec::inDir/ec.sdc
set ec::PRESERVE ./n2n_input/ec.preserve.g
set ec::SUPPRESS_MSG {LBR-30 LBR-31}

# include needed script
include load_etc.tcl

# define diagnostic variables
set iopt_stats 1
set global_map_report 1
set path_disable_priority 0

# define QoR related variables
set global_area 2

# define tool setup and compatibility
set_attribute information_level 9
set_attribute hdl_max_loop_limit 1024
set_attribute gen_module_prefix G2C_DP_
set_attribute input_pragma_keyword synopsys /
set_attribute synthesis_off_command translate_off /
set_attribute synthesis_on_command translate_on /
set_attribute input_case_cover_pragma {full_case} /
set_attribute input_case_decode_pragma {parallel_case} /
set_attribute input_synchro_reset_pragma sync_set_reset
set_attribute input_synchro_reset_blk_pragma sync_set_reset_local
set_attribute input_asynchro_reset_pragma async_set_reset
set_attribute input_asynchro_reset_blk_pragma async_set_reset_local
set_attribute script_begin dc_script_begin
set_attribute script_end dc_script_end
set_attribute optimize_constant_0_flops 0
set_attribute optimize_constant_1_flops 0
set_attribute simple_latch_analysis true /
set_attribute rc_from_n2n true /

# disable_timing_on_clock_sources
set dc::disable_timing_on_clock_sources 1

# suppress messages
suppress_messages $ec::SUPPRESS_MSG

# setup shrink_factor attribute
set_attribute shrink_factor 1.0 /

# R/C scale factors
set_attribute scale_of_cap_per_unit_len 1 /
set_attribute scale_of_res_per_unit_len 1 /

# optimize all endpoints
set_attribute tns_opto 1 /

# timing libraries
set_attribute library lib/90/slow.lib

# PLE setup
set_attribute lef_library {lef/gsclib090_translated.lef lef/gsclib090_translated_ref.lef}
set_attribute interconnect_mode ple /

# always use balanced_tree
set_attribute tree_type balanced_tree [find / -operating_condition *]

# report time and memory
puts "\nEC INFO: Total cpu-time and memory after SETUP: [get_attr runtime /] sec., [get_attr memory_usage /] MBytes.\n"

# load structural netlist
read_netlist $ec::VERILOG -top $ec::MODULE

# report time and memory
puts "\nEC INFO: Total cpu-time and memory after READ_NETLIST: [get_attr runtime /] sec., [get_attr memory_usage /] MBytes.\n"

# remove assigns
set_attr remove_assigns true /
set_remove_assign_options

# number_of_routing_layers setup
set_attribute number_of_routing_layers 9 /designs/*

# aspect_ratio setup
set_attribute aspect_ratio 0.846154 /designs/*

# check unresolved instances in netlist
if {[llength [filter unresolved true [find /designs/* -instance *]]] > 0} { 
  puts "\nEC ERROR: Unresolved modules found. \n"
  exit -822
}

# allow sizing-only on sequential instances
puts "\nEC INFO: Setting preserve size_ok on all sequential instances.\n"
if {[catch "set_attribute -quiet preserve size_ok [find /designs/* -inst instances_seq/*]" msg]} {
  puts "EC ERROR: Failed to preserve size_ok on sequential instances ($msg)"
}

# read multi-modes sdc constraints
create_mode -name Constraints
read_sdc -mode Constraints constraints_top.sdc

# report time and memory
puts "\nEC INFO: Total cpu-time and memory after SDC: [get_attr runtime /] sec., [get_attr memory_usage /] MBytes.\n"

# don't fix max_fanout (SOCE by default ignore max_fanout)
set_attribute max_fanout no_value /designs/*
set_attribute ignore_library_max_fanout true /designs/*

# preserve IO, FIXED and spare instances
puts "\nEC INFO: One or more instance(s) may be set as preserve in $ec::PRESERVE.\n"
include $ec::PRESERVE

# Prevent automatic ungroup
set_attribute auto_ungroup none /

# low-power setting (if any)

# creating cost/path-groups for multi-modes
if {[llength [all::all_seqs]] > 0} {
  define_cost_group -name I2C -design $ec::MODULE
  define_cost_group -name C2O -design $ec::MODULE
  foreach ec::MODE [find / -mode *] {
    path_group -from [all::all_inps] -to [all::all_seqs] -group I2C -mode [basename $ec::MODE] -name I2C_[basename $ec::MODE]
    path_group -from [all::all_seqs] -to [all::all_outs] -group C2O -mode [basename $ec::MODE] -name C2O_[basename $ec::MODE]
  }
}
foreach ec::MODE [find / -mode *] {
  define_cost_group -name I2O -design $ec::MODULE
  path_group -from [all::all_inps] -to [all::all_outs] -group I2O -mode [basename $ec::MODE] -name I2O_[basename $ec::MODE]
}

# print out the exceptions
set ec::XCEP [find /designs* -exception *]
puts "\nEC INFO: Total numbers of exceptions: [llength $ec::XCEP]\n"
catch {open $ec::outDir/exception.all "w"} ec::FXCEP
puts $ec::FXCEP "Total numbers of exceptions: [llength $ec::XCEP]\n"
foreach ec::X $ec::XCEP {
  puts $ec::FXCEP $ec::X
}
close $ec::FXCEP

# report time and memory
puts "\nEC INFO: Total cpu-time and memory after POST-SDC: [get_attr runtime /] sec., [get_attr memory_usage /] MBytes.\n"

# cd to appropriate design
cd designs/$ec::MODULE

# report initial design rule
report design > $ec::outDir/init.design

# report initial gates
report gates > $ec::outDir/init.gate

# report initial area
report area > $ec::outDir/init.area

# report initial power
report power > $ec::outDir/init.power

# report initial timing
foreach md [find / -mode *] {
  report timing -mode [basename $md] -full > $ec::outDir/init.timing.[basename $md]
}

# report initial timing groups
exec echo "# Init Timing Report " > $ec::outDir/init.timing.rpt
foreach md [find / -mode * ] {
  report timing -mode [basename $md] -end -slack 0 > $ec::outDir/init.timing.[basename $md].ep
}
set ec::cgs [find / -cost_group -null_ok *]
foreach ec::cg $ec::cgs {
  exec echo "####################" >> $ec::outDir/init.timing.rpt
  exec echo "# Cost Group: $ec::cg " >> $ec::outDir/init.timing.rpt
  exec echo "####################" >> $ec::outDir/init.timing.rpt
  foreach md [find / -mode * ] {
    exec echo "####################" >> $ec::outDir/init.timing.rpt
    exec echo "# Mode:  [basename $md ] " >> $ec::outDir/init.timing.rpt
    exec echo "####################" >> $ec::outDir/init.timing.rpt
    report timing -full -mode [basename $md ] -num 1 -cost_group $ec::cg >> $ec::outDir/init.timing.rpt
  }
}

# report initial summary
puts "\nEC INFO: Reporting Initial QoR below...\n"
redirect -tee $ec::outDir/init.qor {report qor}
puts "\nEC INFO: Reporting Initial Summary below...\n"
foreach md [find / -mode *] {
  redirect -tee $ec::outDir/init.summary.[basename $md] {report summary -mode [basename $md]}
}

# synthesize -to_mapped
set incremental_opto 0
synthesize -to_mapped -effort high

# report time and memory
puts "\nEC INFO: Total cpu-time and memory after SYN2MAP: [get_attr runtime /] sec., [get_attr memory_usage /] MBytes.\n"

# report syn-to-mapped design rule
report design > $ec::outDir/syn2map.design

# report syn-to-mapped gates
report gates > $ec::outDir/syn2map.gate

# report syn-to-mapped area
report area > $ec::outDir/syn2map.area

# report syn-to-mapped power
report power > $ec::outDir/syn2map.power

# report syn-to-mapped timing
foreach md [find / -mode *] {
  report timing -mode [basename $md] -full > $ec::outDir/syn2map.timing.[basename $md]
}

# report syn-to-mapped timing groups
exec echo "# Syn2map Timing Report " > $ec::outDir/syn2map.timing.rpt
foreach md [find / -mode * ] {
  report timing -mode [basename $md] -end -slack 0 > $ec::outDir/syn2map.timing.[basename $md].ep
}
set ec::cgs [find / -cost_group -null_ok *]
foreach ec::cg $ec::cgs {
  exec echo "####################" >> $ec::outDir/syn2map.timing.rpt
  exec echo "# Cost Group: $ec::cg " >> $ec::outDir/syn2map.timing.rpt
  exec echo "####################" >> $ec::outDir/syn2map.timing.rpt
  foreach md [find / -mode * ] {
    exec echo "####################" >> $ec::outDir/syn2map.timing.rpt
    exec echo "# Mode:  [basename $md ] " >> $ec::outDir/syn2map.timing.rpt
    exec echo "####################" >> $ec::outDir/syn2map.timing.rpt
    report timing -full -mode [basename $md ] -num 1 -cost_group $ec::cg >> $ec::outDir/syn2map.timing.rpt
  }
}

# incremental synthesis
set incremental_opto 1
synthesize -to_mapped -incremental -effort high

# report time and memory
puts "\nEC INFO: Total cpu-time and memory after INCR: [get_attr runtime /] sec., [get_attr memory_usage /] MBytes.\n"

# report incremental design rule
report design > $ec::outDir/incr.design

# report incremental gates
report gates > $ec::outDir/incr.gate

# report incremental area
report area > $ec::outDir/incr.area

# report incremental power
report power > $ec::outDir/incr.power

# report incremental timing
foreach md [find / -mode *] {
  report timing -mode [basename $md] -full > $ec::outDir/incr.timing.[basename $md]
}

# report incremental timing groups
exec echo "# Incr Timing Report " > $ec::outDir/incr.timing.rpt
foreach md [find / -mode * ] {
  report timing -mode [basename $md] -end -slack 0 > $ec::outDir/incr.timing.[basename $md].ep
}
set ec::cgs [find / -cost_group -null_ok *]
foreach ec::cg $ec::cgs {
  exec echo "####################" >> $ec::outDir/incr.timing.rpt
  exec echo "# Cost Group: $ec::cg " >> $ec::outDir/incr.timing.rpt
  exec echo "####################" >> $ec::outDir/incr.timing.rpt
  foreach md [find / -mode * ] {
    exec echo "####################" >> $ec::outDir/incr.timing.rpt
    exec echo "# Mode:  [basename $md ] " >> $ec::outDir/incr.timing.rpt
    exec echo "####################" >> $ec::outDir/incr.timing.rpt
    report timing -full -mode [basename $md ] -num 1 -cost_group $ec::cg >> $ec::outDir/incr.timing.rpt
  }
}

# report end points slacks
foreach md [find / -mode *] {
  report timing -mode [basename $md] -end > $ec::outDir/incr.rc.endrpt.[basename $md]
}

# report time and memory
puts "\nEC INFO: Total cpu-time and memory after ASSIGN: [get_attr runtime /] sec., [get_attr memory_usage /] MBytes.\n"

##################################################################
# BEGIN POSTAMBLE: DO NOT EDIT

# Write the netlist
write -m > screen_design_n2n.enc.dat/screen_design.v

# Write multi-modes SDC files
foreach ec::MODE [find / -mode *] {
  write_sdc -mode [basename $ec::MODE] $ec::MODULE > screen_design_n2n.enc.dat/screen_design.constr.sdc.[basename $ec::MODE]
}

# Write LEC do file
write_do_lec -top $ec::MODULE -golden_design $ec::VERILOG -revised_design screen_design_n2n.enc.dat/screen_design.v -logfile $ec::outDir/write_do_lec.log > $ec::outDir/write_do_lec.do

# END POSTAMBLE
##################################################################

# report time and memory
puts "\nEC INFO: Total cpu-time and memory after WRITE: [get_attr runtime /] sec., [get_attr memory_usage /] MBytes.\n"

# report final design rule
report design > $ec::outDir/final.design

# report final gates
report gates > $ec::outDir/final.gate

# report final area
report area > $ec::outDir/final.area

# report final power
report power > $ec::outDir/final.power

# report final timing
foreach md [find / -mode *] {
  report timing -mode [basename $md] -full > $ec::outDir/final.timing.[basename $md]
}

# report final timing groups
exec echo "# Final Timing Report " > $ec::outDir/final.timing.rpt
foreach md [find / -mode * ] {
  report timing -mode [basename $md] -end -slack 0 > $ec::outDir/final.timing.[basename $md].ep
}
set ec::cgs [find / -cost_group -null_ok *]
foreach ec::cg $ec::cgs {
  exec echo "####################" >> $ec::outDir/final.timing.rpt
  exec echo "# Cost Group: $ec::cg " >> $ec::outDir/final.timing.rpt
  exec echo "####################" >> $ec::outDir/final.timing.rpt
  foreach md [find / -mode * ] {
    exec echo "####################" >> $ec::outDir/final.timing.rpt
    exec echo "# Mode:  [basename $md ] " >> $ec::outDir/final.timing.rpt
    exec echo "####################" >> $ec::outDir/final.timing.rpt
    report timing -full -mode [basename $md ] -num 1 -cost_group $ec::cg >> $ec::outDir/final.timing.rpt
  }
}

# report final summary
puts "\nEC INFO: Reporting QoR below...\n"
redirect -tee $ec::outDir/final.qor {report qor}
puts "\nEC INFO: Reporting Summary below...\n"
foreach md [find / -mode *] {
  redirect -tee $ec::outDir/final.summary.[basename $md] {report summary -mode [basename $md]}
}
puts "\nEC INFO: Total cpu-time and memory after FINAL-REPORTS: [get_attr runtime /] sec., [get_attr memory_usage /] MBytes.\n"

# noload/zero-load analysis on final result
set_attribute interconnect_mode wireload /
set_attribute force_wireload "none" /des*/*
set_attribute wireload_mode top /
foreach md [find / -mode *] {
  report timing -mode [basename $md] -full > $ec::outDir/final.noload.timing.[basename $md]
  report timing -mode [basename $md] -full
}

# don't idealize async/reset
set_attribute ideal_seq_async_pins false /designs/*
foreach md [find / -mode *] {
  report timing -mode [basename $md] -full > $ec::outDir/final.noload.noida.timing.[basename $md]
}

# report time and memory
puts "\nEC INFO: Total cpu-time and memory after FINAL: [get_attr runtime /] sec., [get_attr memory_usage /] MBytes.\n"

# end timer
puts "\nEC INFO: End at: [clock format [clock seconds] -format {%x %X}]"
set ec::end [clock seconds]
set ec::seconds [expr $ec::end - $ec::start]
puts "\nEC INFO: Elapsed-time: $ec::seconds seconds\n"

# done
exit

} msg]} {
  puts "\nEC ERROR: RC could not finish successfully. Force an exit now. ($msg)\n"
  exit -822
}

