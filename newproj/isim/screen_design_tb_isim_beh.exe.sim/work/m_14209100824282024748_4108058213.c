/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x8ddf5b5d */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/shivansh/vlsi-project/screen_design.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static int ng3[] = {255, 0};
static int ng4[] = {40, 0};
static int ng5[] = {305, 0};
static int ng6[] = {90, 0};
static int ng7[] = {335, 0};
static int ng8[] = {385, 0};
static int ng9[] = {120, 0};
static int ng10[] = {170, 0};
static int ng11[] = {240, 0};
static int ng12[] = {599, 0};
static int ng13[] = {1000, 0};



static void Always_34_0(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 4440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 6496);
    *((int *)t2) = 1;
    t3 = (t0 + 4472);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB17;

LAB14:    if (t18 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t6) = 1;

LAB17:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(44, ng0);

LAB22:    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 1, t5, 32);
    t7 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 1, 0LL);

LAB20:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(36, ng0);

LAB13:    xsi_set_current_line(37, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 1, 0LL);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB16:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(40, ng0);

LAB21:    xsi_set_current_line(41, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 1, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB20;

}

static void Cont_71_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t12[8];
    char t16[8];
    char t50[8];
    char t54[8];
    char t88[8];
    char t92[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    int t40;
    int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t51;
    char *t52;
    char *t53;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    int t78;
    int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    char *t89;
    char *t90;
    char *t91;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    int t116;
    int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    char *t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    char *t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    char *t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    char *t140;
    char *t141;
    char *t142;
    char *t143;
    char *t144;
    char *t145;
    unsigned int t146;
    unsigned int t147;
    char *t148;
    unsigned int t149;
    unsigned int t150;
    char *t151;
    unsigned int t152;
    unsigned int t153;
    char *t154;

LAB0:    t1 = (t0 + 4688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2168U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB5;

LAB4:    t8 = (t2 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t5) > *((unsigned int *)t2))
        goto LAB6;

LAB7:    t10 = (t0 + 2328U);
    t11 = *((char **)t10);
    t10 = ((char*)((ng4)));
    memset(t12, 0, 8);
    t13 = (t11 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB10;

LAB9:    t14 = (t10 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB10;

LAB13:    if (*((unsigned int *)t11) > *((unsigned int *)t10))
        goto LAB11;

LAB12:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t12);
    t19 = (t17 & t18);
    *((unsigned int *)t16) = t19;
    t20 = (t6 + 4);
    t21 = (t12 + 4);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t20);
    t24 = *((unsigned int *)t21);
    t25 = (t23 | t24);
    *((unsigned int *)t22) = t25;
    t26 = *((unsigned int *)t22);
    t27 = (t26 != 0);
    if (t27 == 1)
        goto LAB14;

LAB15:
LAB16:    t48 = (t0 + 2168U);
    t49 = *((char **)t48);
    t48 = ((char*)((ng5)));
    memset(t50, 0, 8);
    t51 = (t49 + 4);
    if (*((unsigned int *)t51) != 0)
        goto LAB18;

LAB17:    t52 = (t48 + 4);
    if (*((unsigned int *)t52) != 0)
        goto LAB18;

LAB21:    if (*((unsigned int *)t49) < *((unsigned int *)t48))
        goto LAB19;

LAB20:    t55 = *((unsigned int *)t16);
    t56 = *((unsigned int *)t50);
    t57 = (t55 & t56);
    *((unsigned int *)t54) = t57;
    t58 = (t16 + 4);
    t59 = (t50 + 4);
    t60 = (t54 + 4);
    t61 = *((unsigned int *)t58);
    t62 = *((unsigned int *)t59);
    t63 = (t61 | t62);
    *((unsigned int *)t60) = t63;
    t64 = *((unsigned int *)t60);
    t65 = (t64 != 0);
    if (t65 == 1)
        goto LAB22;

LAB23:
LAB24:    t86 = (t0 + 2328U);
    t87 = *((char **)t86);
    t86 = ((char*)((ng6)));
    memset(t88, 0, 8);
    t89 = (t87 + 4);
    if (*((unsigned int *)t89) != 0)
        goto LAB26;

LAB25:    t90 = (t86 + 4);
    if (*((unsigned int *)t90) != 0)
        goto LAB26;

LAB29:    if (*((unsigned int *)t87) < *((unsigned int *)t86))
        goto LAB27;

LAB28:    t93 = *((unsigned int *)t54);
    t94 = *((unsigned int *)t88);
    t95 = (t93 & t94);
    *((unsigned int *)t92) = t95;
    t96 = (t54 + 4);
    t97 = (t88 + 4);
    t98 = (t92 + 4);
    t99 = *((unsigned int *)t96);
    t100 = *((unsigned int *)t97);
    t101 = (t99 | t100);
    *((unsigned int *)t98) = t101;
    t102 = *((unsigned int *)t98);
    t103 = (t102 != 0);
    if (t103 == 1)
        goto LAB30;

LAB31:
LAB32:    memset(t4, 0, 8);
    t124 = (t92 + 4);
    t125 = *((unsigned int *)t124);
    t126 = (~(t125));
    t127 = *((unsigned int *)t92);
    t128 = (t127 & t126);
    t129 = (t128 & 1U);
    if (t129 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t124) != 0)
        goto LAB35;

LAB36:    t131 = (t4 + 4);
    t132 = *((unsigned int *)t4);
    t133 = *((unsigned int *)t131);
    t134 = (t132 || t133);
    if (t134 > 0)
        goto LAB37;

LAB38:    t136 = *((unsigned int *)t4);
    t137 = (~(t136));
    t138 = *((unsigned int *)t131);
    t139 = (t137 || t138);
    if (t139 > 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t131) > 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t4) > 0)
        goto LAB43;

LAB44:    memcpy(t3, t140, 8);

LAB45:    t141 = (t0 + 6656);
    t142 = (t141 + 56U);
    t143 = *((char **)t142);
    t144 = (t143 + 56U);
    t145 = *((char **)t144);
    memset(t145, 0, 8);
    t146 = 1U;
    t147 = t146;
    t148 = (t3 + 4);
    t149 = *((unsigned int *)t3);
    t146 = (t146 & t149);
    t150 = *((unsigned int *)t148);
    t147 = (t147 & t150);
    t151 = (t145 + 4);
    t152 = *((unsigned int *)t145);
    *((unsigned int *)t145) = (t152 | t146);
    t153 = *((unsigned int *)t151);
    *((unsigned int *)t151) = (t153 | t147);
    xsi_driver_vfirst_trans(t141, 0, 0);
    t154 = (t0 + 6512);
    *((int *)t154) = 1;

LAB1:    return;
LAB5:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB7;

LAB10:    t15 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB12;

LAB11:    *((unsigned int *)t12) = 1;
    goto LAB12;

LAB14:    t28 = *((unsigned int *)t16);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t16) = (t28 | t29);
    t30 = (t6 + 4);
    t31 = (t12 + 4);
    t32 = *((unsigned int *)t6);
    t33 = (~(t32));
    t34 = *((unsigned int *)t30);
    t35 = (~(t34));
    t36 = *((unsigned int *)t12);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (~(t38));
    t40 = (t33 & t35);
    t41 = (t37 & t39);
    t42 = (~(t40));
    t43 = (~(t41));
    t44 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t44 & t42);
    t45 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t45 & t43);
    t46 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t46 & t42);
    t47 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t47 & t43);
    goto LAB16;

LAB18:    t53 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB20;

LAB19:    *((unsigned int *)t50) = 1;
    goto LAB20;

LAB22:    t66 = *((unsigned int *)t54);
    t67 = *((unsigned int *)t60);
    *((unsigned int *)t54) = (t66 | t67);
    t68 = (t16 + 4);
    t69 = (t50 + 4);
    t70 = *((unsigned int *)t16);
    t71 = (~(t70));
    t72 = *((unsigned int *)t68);
    t73 = (~(t72));
    t74 = *((unsigned int *)t50);
    t75 = (~(t74));
    t76 = *((unsigned int *)t69);
    t77 = (~(t76));
    t78 = (t71 & t73);
    t79 = (t75 & t77);
    t80 = (~(t78));
    t81 = (~(t79));
    t82 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t82 & t80);
    t83 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t83 & t81);
    t84 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t84 & t80);
    t85 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t85 & t81);
    goto LAB24;

LAB26:    t91 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t91) = 1;
    goto LAB28;

LAB27:    *((unsigned int *)t88) = 1;
    goto LAB28;

LAB30:    t104 = *((unsigned int *)t92);
    t105 = *((unsigned int *)t98);
    *((unsigned int *)t92) = (t104 | t105);
    t106 = (t54 + 4);
    t107 = (t88 + 4);
    t108 = *((unsigned int *)t54);
    t109 = (~(t108));
    t110 = *((unsigned int *)t106);
    t111 = (~(t110));
    t112 = *((unsigned int *)t88);
    t113 = (~(t112));
    t114 = *((unsigned int *)t107);
    t115 = (~(t114));
    t116 = (t109 & t111);
    t117 = (t113 & t115);
    t118 = (~(t116));
    t119 = (~(t117));
    t120 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t120 & t118);
    t121 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t121 & t119);
    t122 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t122 & t118);
    t123 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t123 & t119);
    goto LAB32;

LAB33:    *((unsigned int *)t4) = 1;
    goto LAB36;

LAB35:    t130 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t130) = 1;
    goto LAB36;

LAB37:    t135 = ((char*)((ng1)));
    goto LAB38;

LAB39:    t140 = ((char*)((ng2)));
    goto LAB40;

LAB41:    xsi_vlog_unsigned_bit_combine(t3, 32, t135, 32, t140, 32);
    goto LAB45;

LAB43:    memcpy(t3, t135, 8);
    goto LAB45;

}

static void Cont_72_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t12[8];
    char t16[8];
    char t50[8];
    char t54[8];
    char t88[8];
    char t92[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    int t40;
    int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t51;
    char *t52;
    char *t53;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    int t78;
    int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    char *t89;
    char *t90;
    char *t91;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    int t116;
    int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    char *t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    char *t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    char *t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    char *t140;
    char *t141;
    char *t142;
    char *t143;
    char *t144;
    char *t145;
    unsigned int t146;
    unsigned int t147;
    char *t148;
    unsigned int t149;
    unsigned int t150;
    char *t151;
    unsigned int t152;
    unsigned int t153;
    char *t154;

LAB0:    t1 = (t0 + 4936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2168U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB5;

LAB4:    t8 = (t2 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t5) > *((unsigned int *)t2))
        goto LAB6;

LAB7:    t10 = (t0 + 2328U);
    t11 = *((char **)t10);
    t10 = ((char*)((ng4)));
    memset(t12, 0, 8);
    t13 = (t11 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB10;

LAB9:    t14 = (t10 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB10;

LAB13:    if (*((unsigned int *)t11) > *((unsigned int *)t10))
        goto LAB11;

LAB12:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t12);
    t19 = (t17 & t18);
    *((unsigned int *)t16) = t19;
    t20 = (t6 + 4);
    t21 = (t12 + 4);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t20);
    t24 = *((unsigned int *)t21);
    t25 = (t23 | t24);
    *((unsigned int *)t22) = t25;
    t26 = *((unsigned int *)t22);
    t27 = (t26 != 0);
    if (t27 == 1)
        goto LAB14;

LAB15:
LAB16:    t48 = (t0 + 2168U);
    t49 = *((char **)t48);
    t48 = ((char*)((ng8)));
    memset(t50, 0, 8);
    t51 = (t49 + 4);
    if (*((unsigned int *)t51) != 0)
        goto LAB18;

LAB17:    t52 = (t48 + 4);
    if (*((unsigned int *)t52) != 0)
        goto LAB18;

LAB21:    if (*((unsigned int *)t49) < *((unsigned int *)t48))
        goto LAB19;

LAB20:    t55 = *((unsigned int *)t16);
    t56 = *((unsigned int *)t50);
    t57 = (t55 & t56);
    *((unsigned int *)t54) = t57;
    t58 = (t16 + 4);
    t59 = (t50 + 4);
    t60 = (t54 + 4);
    t61 = *((unsigned int *)t58);
    t62 = *((unsigned int *)t59);
    t63 = (t61 | t62);
    *((unsigned int *)t60) = t63;
    t64 = *((unsigned int *)t60);
    t65 = (t64 != 0);
    if (t65 == 1)
        goto LAB22;

LAB23:
LAB24:    t86 = (t0 + 2328U);
    t87 = *((char **)t86);
    t86 = ((char*)((ng6)));
    memset(t88, 0, 8);
    t89 = (t87 + 4);
    if (*((unsigned int *)t89) != 0)
        goto LAB26;

LAB25:    t90 = (t86 + 4);
    if (*((unsigned int *)t90) != 0)
        goto LAB26;

LAB29:    if (*((unsigned int *)t87) < *((unsigned int *)t86))
        goto LAB27;

LAB28:    t93 = *((unsigned int *)t54);
    t94 = *((unsigned int *)t88);
    t95 = (t93 & t94);
    *((unsigned int *)t92) = t95;
    t96 = (t54 + 4);
    t97 = (t88 + 4);
    t98 = (t92 + 4);
    t99 = *((unsigned int *)t96);
    t100 = *((unsigned int *)t97);
    t101 = (t99 | t100);
    *((unsigned int *)t98) = t101;
    t102 = *((unsigned int *)t98);
    t103 = (t102 != 0);
    if (t103 == 1)
        goto LAB30;

LAB31:
LAB32:    memset(t4, 0, 8);
    t124 = (t92 + 4);
    t125 = *((unsigned int *)t124);
    t126 = (~(t125));
    t127 = *((unsigned int *)t92);
    t128 = (t127 & t126);
    t129 = (t128 & 1U);
    if (t129 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t124) != 0)
        goto LAB35;

LAB36:    t131 = (t4 + 4);
    t132 = *((unsigned int *)t4);
    t133 = *((unsigned int *)t131);
    t134 = (t132 || t133);
    if (t134 > 0)
        goto LAB37;

LAB38:    t136 = *((unsigned int *)t4);
    t137 = (~(t136));
    t138 = *((unsigned int *)t131);
    t139 = (t137 || t138);
    if (t139 > 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t131) > 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t4) > 0)
        goto LAB43;

LAB44:    memcpy(t3, t140, 8);

LAB45:    t141 = (t0 + 6720);
    t142 = (t141 + 56U);
    t143 = *((char **)t142);
    t144 = (t143 + 56U);
    t145 = *((char **)t144);
    memset(t145, 0, 8);
    t146 = 1U;
    t147 = t146;
    t148 = (t3 + 4);
    t149 = *((unsigned int *)t3);
    t146 = (t146 & t149);
    t150 = *((unsigned int *)t148);
    t147 = (t147 & t150);
    t151 = (t145 + 4);
    t152 = *((unsigned int *)t145);
    *((unsigned int *)t145) = (t152 | t146);
    t153 = *((unsigned int *)t151);
    *((unsigned int *)t151) = (t153 | t147);
    xsi_driver_vfirst_trans(t141, 0, 0);
    t154 = (t0 + 6528);
    *((int *)t154) = 1;

LAB1:    return;
LAB5:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB7;

LAB10:    t15 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB12;

LAB11:    *((unsigned int *)t12) = 1;
    goto LAB12;

LAB14:    t28 = *((unsigned int *)t16);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t16) = (t28 | t29);
    t30 = (t6 + 4);
    t31 = (t12 + 4);
    t32 = *((unsigned int *)t6);
    t33 = (~(t32));
    t34 = *((unsigned int *)t30);
    t35 = (~(t34));
    t36 = *((unsigned int *)t12);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (~(t38));
    t40 = (t33 & t35);
    t41 = (t37 & t39);
    t42 = (~(t40));
    t43 = (~(t41));
    t44 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t44 & t42);
    t45 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t45 & t43);
    t46 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t46 & t42);
    t47 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t47 & t43);
    goto LAB16;

LAB18:    t53 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB20;

LAB19:    *((unsigned int *)t50) = 1;
    goto LAB20;

LAB22:    t66 = *((unsigned int *)t54);
    t67 = *((unsigned int *)t60);
    *((unsigned int *)t54) = (t66 | t67);
    t68 = (t16 + 4);
    t69 = (t50 + 4);
    t70 = *((unsigned int *)t16);
    t71 = (~(t70));
    t72 = *((unsigned int *)t68);
    t73 = (~(t72));
    t74 = *((unsigned int *)t50);
    t75 = (~(t74));
    t76 = *((unsigned int *)t69);
    t77 = (~(t76));
    t78 = (t71 & t73);
    t79 = (t75 & t77);
    t80 = (~(t78));
    t81 = (~(t79));
    t82 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t82 & t80);
    t83 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t83 & t81);
    t84 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t84 & t80);
    t85 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t85 & t81);
    goto LAB24;

LAB26:    t91 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t91) = 1;
    goto LAB28;

LAB27:    *((unsigned int *)t88) = 1;
    goto LAB28;

LAB30:    t104 = *((unsigned int *)t92);
    t105 = *((unsigned int *)t98);
    *((unsigned int *)t92) = (t104 | t105);
    t106 = (t54 + 4);
    t107 = (t88 + 4);
    t108 = *((unsigned int *)t54);
    t109 = (~(t108));
    t110 = *((unsigned int *)t106);
    t111 = (~(t110));
    t112 = *((unsigned int *)t88);
    t113 = (~(t112));
    t114 = *((unsigned int *)t107);
    t115 = (~(t114));
    t116 = (t109 & t111);
    t117 = (t113 & t115);
    t118 = (~(t116));
    t119 = (~(t117));
    t120 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t120 & t118);
    t121 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t121 & t119);
    t122 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t122 & t118);
    t123 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t123 & t119);
    goto LAB32;

LAB33:    *((unsigned int *)t4) = 1;
    goto LAB36;

LAB35:    t130 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t130) = 1;
    goto LAB36;

LAB37:    t135 = ((char*)((ng1)));
    goto LAB38;

LAB39:    t140 = ((char*)((ng2)));
    goto LAB40;

LAB41:    xsi_vlog_unsigned_bit_combine(t3, 32, t135, 32, t140, 32);
    goto LAB45;

LAB43:    memcpy(t3, t135, 8);
    goto LAB45;

}

static void Cont_73_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t12[8];
    char t16[8];
    char t50[8];
    char t54[8];
    char t88[8];
    char t92[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    int t40;
    int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t51;
    char *t52;
    char *t53;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    int t78;
    int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    char *t89;
    char *t90;
    char *t91;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    int t116;
    int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    char *t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    char *t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    char *t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    char *t140;
    char *t141;
    char *t142;
    char *t143;
    char *t144;
    char *t145;
    unsigned int t146;
    unsigned int t147;
    char *t148;
    unsigned int t149;
    unsigned int t150;
    char *t151;
    unsigned int t152;
    unsigned int t153;
    char *t154;

LAB0:    t1 = (t0 + 5184U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2168U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB5;

LAB4:    t8 = (t2 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t5) > *((unsigned int *)t2))
        goto LAB6;

LAB7:    t10 = (t0 + 2328U);
    t11 = *((char **)t10);
    t10 = ((char*)((ng9)));
    memset(t12, 0, 8);
    t13 = (t11 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB10;

LAB9:    t14 = (t10 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB10;

LAB13:    if (*((unsigned int *)t11) > *((unsigned int *)t10))
        goto LAB11;

LAB12:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t12);
    t19 = (t17 & t18);
    *((unsigned int *)t16) = t19;
    t20 = (t6 + 4);
    t21 = (t12 + 4);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t20);
    t24 = *((unsigned int *)t21);
    t25 = (t23 | t24);
    *((unsigned int *)t22) = t25;
    t26 = *((unsigned int *)t22);
    t27 = (t26 != 0);
    if (t27 == 1)
        goto LAB14;

LAB15:
LAB16:    t48 = (t0 + 2168U);
    t49 = *((char **)t48);
    t48 = ((char*)((ng5)));
    memset(t50, 0, 8);
    t51 = (t49 + 4);
    if (*((unsigned int *)t51) != 0)
        goto LAB18;

LAB17:    t52 = (t48 + 4);
    if (*((unsigned int *)t52) != 0)
        goto LAB18;

LAB21:    if (*((unsigned int *)t49) < *((unsigned int *)t48))
        goto LAB19;

LAB20:    t55 = *((unsigned int *)t16);
    t56 = *((unsigned int *)t50);
    t57 = (t55 & t56);
    *((unsigned int *)t54) = t57;
    t58 = (t16 + 4);
    t59 = (t50 + 4);
    t60 = (t54 + 4);
    t61 = *((unsigned int *)t58);
    t62 = *((unsigned int *)t59);
    t63 = (t61 | t62);
    *((unsigned int *)t60) = t63;
    t64 = *((unsigned int *)t60);
    t65 = (t64 != 0);
    if (t65 == 1)
        goto LAB22;

LAB23:
LAB24:    t86 = (t0 + 2328U);
    t87 = *((char **)t86);
    t86 = ((char*)((ng10)));
    memset(t88, 0, 8);
    t89 = (t87 + 4);
    if (*((unsigned int *)t89) != 0)
        goto LAB26;

LAB25:    t90 = (t86 + 4);
    if (*((unsigned int *)t90) != 0)
        goto LAB26;

LAB29:    if (*((unsigned int *)t87) < *((unsigned int *)t86))
        goto LAB27;

LAB28:    t93 = *((unsigned int *)t54);
    t94 = *((unsigned int *)t88);
    t95 = (t93 & t94);
    *((unsigned int *)t92) = t95;
    t96 = (t54 + 4);
    t97 = (t88 + 4);
    t98 = (t92 + 4);
    t99 = *((unsigned int *)t96);
    t100 = *((unsigned int *)t97);
    t101 = (t99 | t100);
    *((unsigned int *)t98) = t101;
    t102 = *((unsigned int *)t98);
    t103 = (t102 != 0);
    if (t103 == 1)
        goto LAB30;

LAB31:
LAB32:    memset(t4, 0, 8);
    t124 = (t92 + 4);
    t125 = *((unsigned int *)t124);
    t126 = (~(t125));
    t127 = *((unsigned int *)t92);
    t128 = (t127 & t126);
    t129 = (t128 & 1U);
    if (t129 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t124) != 0)
        goto LAB35;

LAB36:    t131 = (t4 + 4);
    t132 = *((unsigned int *)t4);
    t133 = *((unsigned int *)t131);
    t134 = (t132 || t133);
    if (t134 > 0)
        goto LAB37;

LAB38:    t136 = *((unsigned int *)t4);
    t137 = (~(t136));
    t138 = *((unsigned int *)t131);
    t139 = (t137 || t138);
    if (t139 > 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t131) > 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t4) > 0)
        goto LAB43;

LAB44:    memcpy(t3, t140, 8);

LAB45:    t141 = (t0 + 6784);
    t142 = (t141 + 56U);
    t143 = *((char **)t142);
    t144 = (t143 + 56U);
    t145 = *((char **)t144);
    memset(t145, 0, 8);
    t146 = 1U;
    t147 = t146;
    t148 = (t3 + 4);
    t149 = *((unsigned int *)t3);
    t146 = (t146 & t149);
    t150 = *((unsigned int *)t148);
    t147 = (t147 & t150);
    t151 = (t145 + 4);
    t152 = *((unsigned int *)t145);
    *((unsigned int *)t145) = (t152 | t146);
    t153 = *((unsigned int *)t151);
    *((unsigned int *)t151) = (t153 | t147);
    xsi_driver_vfirst_trans(t141, 0, 0);
    t154 = (t0 + 6544);
    *((int *)t154) = 1;

LAB1:    return;
LAB5:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB7;

LAB10:    t15 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB12;

LAB11:    *((unsigned int *)t12) = 1;
    goto LAB12;

LAB14:    t28 = *((unsigned int *)t16);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t16) = (t28 | t29);
    t30 = (t6 + 4);
    t31 = (t12 + 4);
    t32 = *((unsigned int *)t6);
    t33 = (~(t32));
    t34 = *((unsigned int *)t30);
    t35 = (~(t34));
    t36 = *((unsigned int *)t12);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (~(t38));
    t40 = (t33 & t35);
    t41 = (t37 & t39);
    t42 = (~(t40));
    t43 = (~(t41));
    t44 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t44 & t42);
    t45 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t45 & t43);
    t46 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t46 & t42);
    t47 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t47 & t43);
    goto LAB16;

LAB18:    t53 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB20;

LAB19:    *((unsigned int *)t50) = 1;
    goto LAB20;

LAB22:    t66 = *((unsigned int *)t54);
    t67 = *((unsigned int *)t60);
    *((unsigned int *)t54) = (t66 | t67);
    t68 = (t16 + 4);
    t69 = (t50 + 4);
    t70 = *((unsigned int *)t16);
    t71 = (~(t70));
    t72 = *((unsigned int *)t68);
    t73 = (~(t72));
    t74 = *((unsigned int *)t50);
    t75 = (~(t74));
    t76 = *((unsigned int *)t69);
    t77 = (~(t76));
    t78 = (t71 & t73);
    t79 = (t75 & t77);
    t80 = (~(t78));
    t81 = (~(t79));
    t82 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t82 & t80);
    t83 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t83 & t81);
    t84 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t84 & t80);
    t85 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t85 & t81);
    goto LAB24;

LAB26:    t91 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t91) = 1;
    goto LAB28;

LAB27:    *((unsigned int *)t88) = 1;
    goto LAB28;

LAB30:    t104 = *((unsigned int *)t92);
    t105 = *((unsigned int *)t98);
    *((unsigned int *)t92) = (t104 | t105);
    t106 = (t54 + 4);
    t107 = (t88 + 4);
    t108 = *((unsigned int *)t54);
    t109 = (~(t108));
    t110 = *((unsigned int *)t106);
    t111 = (~(t110));
    t112 = *((unsigned int *)t88);
    t113 = (~(t112));
    t114 = *((unsigned int *)t107);
    t115 = (~(t114));
    t116 = (t109 & t111);
    t117 = (t113 & t115);
    t118 = (~(t116));
    t119 = (~(t117));
    t120 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t120 & t118);
    t121 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t121 & t119);
    t122 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t122 & t118);
    t123 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t123 & t119);
    goto LAB32;

LAB33:    *((unsigned int *)t4) = 1;
    goto LAB36;

LAB35:    t130 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t130) = 1;
    goto LAB36;

LAB37:    t135 = ((char*)((ng1)));
    goto LAB38;

LAB39:    t140 = ((char*)((ng2)));
    goto LAB40;

LAB41:    xsi_vlog_unsigned_bit_combine(t3, 32, t135, 32, t140, 32);
    goto LAB45;

LAB43:    memcpy(t3, t135, 8);
    goto LAB45;

}

static void Cont_74_4(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t12[8];
    char t16[8];
    char t50[8];
    char t54[8];
    char t88[8];
    char t92[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    int t40;
    int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t51;
    char *t52;
    char *t53;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    int t78;
    int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    char *t89;
    char *t90;
    char *t91;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    int t116;
    int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    char *t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    char *t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    char *t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    char *t140;
    char *t141;
    char *t142;
    char *t143;
    char *t144;
    char *t145;
    unsigned int t146;
    unsigned int t147;
    char *t148;
    unsigned int t149;
    unsigned int t150;
    char *t151;
    unsigned int t152;
    unsigned int t153;
    char *t154;

LAB0:    t1 = (t0 + 5432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2168U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng11)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB5;

LAB4:    t8 = (t2 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t5) > *((unsigned int *)t2))
        goto LAB6;

LAB7:    t10 = (t0 + 2328U);
    t11 = *((char **)t10);
    t10 = ((char*)((ng2)));
    memset(t12, 0, 8);
    t13 = (t11 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB10;

LAB9:    t14 = (t10 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB10;

LAB13:    if (*((unsigned int *)t11) > *((unsigned int *)t10))
        goto LAB11;

LAB12:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t12);
    t19 = (t17 & t18);
    *((unsigned int *)t16) = t19;
    t20 = (t6 + 4);
    t21 = (t12 + 4);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t20);
    t24 = *((unsigned int *)t21);
    t25 = (t23 | t24);
    *((unsigned int *)t22) = t25;
    t26 = *((unsigned int *)t22);
    t27 = (t26 != 0);
    if (t27 == 1)
        goto LAB14;

LAB15:
LAB16:    t48 = (t0 + 2328U);
    t49 = *((char **)t48);
    t48 = ((char*)((ng12)));
    memset(t50, 0, 8);
    t51 = (t49 + 4);
    if (*((unsigned int *)t51) != 0)
        goto LAB18;

LAB17:    t52 = (t48 + 4);
    if (*((unsigned int *)t52) != 0)
        goto LAB18;

LAB21:    if (*((unsigned int *)t49) < *((unsigned int *)t48))
        goto LAB19;

LAB20:    t55 = *((unsigned int *)t16);
    t56 = *((unsigned int *)t50);
    t57 = (t55 & t56);
    *((unsigned int *)t54) = t57;
    t58 = (t16 + 4);
    t59 = (t50 + 4);
    t60 = (t54 + 4);
    t61 = *((unsigned int *)t58);
    t62 = *((unsigned int *)t59);
    t63 = (t61 | t62);
    *((unsigned int *)t60) = t63;
    t64 = *((unsigned int *)t60);
    t65 = (t64 != 0);
    if (t65 == 1)
        goto LAB22;

LAB23:
LAB24:    t86 = (t0 + 2168U);
    t87 = *((char **)t86);
    t86 = ((char*)((ng13)));
    memset(t88, 0, 8);
    t89 = (t87 + 4);
    if (*((unsigned int *)t89) != 0)
        goto LAB26;

LAB25:    t90 = (t86 + 4);
    if (*((unsigned int *)t90) != 0)
        goto LAB26;

LAB29:    if (*((unsigned int *)t87) < *((unsigned int *)t86))
        goto LAB27;

LAB28:    t93 = *((unsigned int *)t54);
    t94 = *((unsigned int *)t88);
    t95 = (t93 & t94);
    *((unsigned int *)t92) = t95;
    t96 = (t54 + 4);
    t97 = (t88 + 4);
    t98 = (t92 + 4);
    t99 = *((unsigned int *)t96);
    t100 = *((unsigned int *)t97);
    t101 = (t99 | t100);
    *((unsigned int *)t98) = t101;
    t102 = *((unsigned int *)t98);
    t103 = (t102 != 0);
    if (t103 == 1)
        goto LAB30;

LAB31:
LAB32:    memset(t4, 0, 8);
    t124 = (t92 + 4);
    t125 = *((unsigned int *)t124);
    t126 = (~(t125));
    t127 = *((unsigned int *)t92);
    t128 = (t127 & t126);
    t129 = (t128 & 1U);
    if (t129 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t124) != 0)
        goto LAB35;

LAB36:    t131 = (t4 + 4);
    t132 = *((unsigned int *)t4);
    t133 = *((unsigned int *)t131);
    t134 = (t132 || t133);
    if (t134 > 0)
        goto LAB37;

LAB38:    t136 = *((unsigned int *)t4);
    t137 = (~(t136));
    t138 = *((unsigned int *)t131);
    t139 = (t137 || t138);
    if (t139 > 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t131) > 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t4) > 0)
        goto LAB43;

LAB44:    memcpy(t3, t140, 8);

LAB45:    t141 = (t0 + 6848);
    t142 = (t141 + 56U);
    t143 = *((char **)t142);
    t144 = (t143 + 56U);
    t145 = *((char **)t144);
    memset(t145, 0, 8);
    t146 = 1U;
    t147 = t146;
    t148 = (t3 + 4);
    t149 = *((unsigned int *)t3);
    t146 = (t146 & t149);
    t150 = *((unsigned int *)t148);
    t147 = (t147 & t150);
    t151 = (t145 + 4);
    t152 = *((unsigned int *)t145);
    *((unsigned int *)t145) = (t152 | t146);
    t153 = *((unsigned int *)t151);
    *((unsigned int *)t151) = (t153 | t147);
    xsi_driver_vfirst_trans(t141, 0, 0);
    t154 = (t0 + 6560);
    *((int *)t154) = 1;

LAB1:    return;
LAB5:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB7;

LAB10:    t15 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB12;

LAB11:    *((unsigned int *)t12) = 1;
    goto LAB12;

LAB14:    t28 = *((unsigned int *)t16);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t16) = (t28 | t29);
    t30 = (t6 + 4);
    t31 = (t12 + 4);
    t32 = *((unsigned int *)t6);
    t33 = (~(t32));
    t34 = *((unsigned int *)t30);
    t35 = (~(t34));
    t36 = *((unsigned int *)t12);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (~(t38));
    t40 = (t33 & t35);
    t41 = (t37 & t39);
    t42 = (~(t40));
    t43 = (~(t41));
    t44 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t44 & t42);
    t45 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t45 & t43);
    t46 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t46 & t42);
    t47 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t47 & t43);
    goto LAB16;

LAB18:    t53 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB20;

LAB19:    *((unsigned int *)t50) = 1;
    goto LAB20;

LAB22:    t66 = *((unsigned int *)t54);
    t67 = *((unsigned int *)t60);
    *((unsigned int *)t54) = (t66 | t67);
    t68 = (t16 + 4);
    t69 = (t50 + 4);
    t70 = *((unsigned int *)t16);
    t71 = (~(t70));
    t72 = *((unsigned int *)t68);
    t73 = (~(t72));
    t74 = *((unsigned int *)t50);
    t75 = (~(t74));
    t76 = *((unsigned int *)t69);
    t77 = (~(t76));
    t78 = (t71 & t73);
    t79 = (t75 & t77);
    t80 = (~(t78));
    t81 = (~(t79));
    t82 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t82 & t80);
    t83 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t83 & t81);
    t84 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t84 & t80);
    t85 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t85 & t81);
    goto LAB24;

LAB26:    t91 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t91) = 1;
    goto LAB28;

LAB27:    *((unsigned int *)t88) = 1;
    goto LAB28;

LAB30:    t104 = *((unsigned int *)t92);
    t105 = *((unsigned int *)t98);
    *((unsigned int *)t92) = (t104 | t105);
    t106 = (t54 + 4);
    t107 = (t88 + 4);
    t108 = *((unsigned int *)t54);
    t109 = (~(t108));
    t110 = *((unsigned int *)t106);
    t111 = (~(t110));
    t112 = *((unsigned int *)t88);
    t113 = (~(t112));
    t114 = *((unsigned int *)t107);
    t115 = (~(t114));
    t116 = (t109 & t111);
    t117 = (t113 & t115);
    t118 = (~(t116));
    t119 = (~(t117));
    t120 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t120 & t118);
    t121 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t121 & t119);
    t122 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t122 & t118);
    t123 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t123 & t119);
    goto LAB32;

LAB33:    *((unsigned int *)t4) = 1;
    goto LAB36;

LAB35:    t130 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t130) = 1;
    goto LAB36;

LAB37:    t135 = ((char*)((ng1)));
    goto LAB38;

LAB39:    t140 = ((char*)((ng2)));
    goto LAB40;

LAB41:    xsi_vlog_unsigned_bit_combine(t3, 32, t135, 32, t140, 32);
    goto LAB45;

LAB43:    memcpy(t3, t135, 8);
    goto LAB45;

}

static void Cont_76_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 5680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2968U);
    t3 = *((char **)t2);
    t2 = (t0 + 6912);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 6576);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_77_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 5928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6976);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void Cont_78_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 6176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7040);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}


extern void work_m_14209100824282024748_4108058213_init()
{
	static char *pe[] = {(void *)Always_34_0,(void *)Cont_71_1,(void *)Cont_72_2,(void *)Cont_73_3,(void *)Cont_74_4,(void *)Cont_76_5,(void *)Cont_77_6,(void *)Cont_78_7};
	xsi_register_didat("work_m_14209100824282024748_4108058213", "isim/screen_design_tb_isim_beh.exe.sim/work/m_14209100824282024748_4108058213.didat");
	xsi_register_executes(pe);
}
