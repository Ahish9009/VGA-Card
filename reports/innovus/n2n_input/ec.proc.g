# Set default delay for uncontrainted input ports
####################################################

proc ec::mimic_input_port_clock {} {
    if {[llength [find / -mode *]]} {
	# multi-mode
	foreach mode [find / -mode *] {
	    set missing_ports {}
	    foreach port [find / -port ports_in/*] {
		if {! [llength [get_mode_attribute $mode external_delays $port]]} {
		    lappend missing_ports $port
		}
	    }
	    if {[llength $missing_ports]} {
		foreach clk [find $mode -clock *] {
		    set delay [expr {[get_attribute period $clk] / [get_attribute divide_period $clk]}]
		    set except [path_delay -mode $mode -delay $delay -from $missing_ports -to $clk  -name "input_port_clock_to_[basename $mode]_[basename $clk]"]
		    set_attribute -quiet user_priority -infinity $except
		}
	    }
	}
    } else {
	# single-mode
	set missing_ports {}
	foreach port [find / -port ports_in/*] {
	    if {! [llength [get_attribute external_delays $port]]} {
		lappend missing_ports $port
	    }
	}
	if {[llength $missing_ports]} {
	    foreach clk [find / -clock *] {
		set delay [expr {[get_attribute period $clk] / [get_attribute divide_period $clk]}]
		set except [path_delay -delay $delay -from $missing_ports -to $clk -name "input_port_clock_to_[basename $clk]"]
		set_attribute -quiet user_priority -infinity $except
	    }
	}
    }
}
	
# End default delay for uncontrainted input ports
####################################################
