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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/POLI/AN III/SEM I/AC/TEME/tema2/skel/skel/maze_structure.v";
static const char *ng1 = "test.data";
static const char *ng2 = "r";
static const char *ng3 = "error opening data file\n";
static const char *ng4 = "starting_row=%d\n";
static int ng5[] = {1, 0};
static const char *ng6 = "error reading seed value\n";
static const char *ng7 = "starting_col=%d\n";
static int ng8[] = {0, 0};
static int ng9[] = {64, 0};
static const char *ng10 = "%d\n";
static const char *ng11 = "error reading test data\n";
static unsigned int ng12[] = {2U, 0U};



static void Initial_22_0(char *t0)
{
    char t8[8];
    char t18[8];
    char t22[8];
    char t37[8];
    char t40[8];
    char t41[8];
    char t62[8];
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    int t55;
    char *t56;
    int t57;
    int t58;
    int t59;
    int t60;
    char *t61;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;

LAB0:    xsi_set_current_line(22, ng0);

LAB2:    xsi_set_current_line(23, ng0);
    t1 = (t0 + 472);
    t2 = *((char **)t1);
    t1 = (t2 + 4);
    t3 = *((unsigned int *)t1);
    t4 = (~(t3));
    t5 = *((unsigned int *)t2);
    t6 = (t5 & t4);
    t7 = (t6 != 0);
    if (t7 > 0)
        goto LAB3;

LAB4:
LAB5:
LAB1:    return;
LAB3:    xsi_set_current_line(23, ng0);

LAB6:    xsi_set_current_line(25, ng0);
    *((int *)t8) = xsi_vlogfile_file_open_of_cname_ctype(ng1, ng2);
    t9 = (t8 + 4);
    *((int *)t9) = 0;
    t10 = (t0 + 2864);
    xsi_vlogvar_assign_value(t10, t8, 0, 0, 32);
    xsi_set_current_line(26, ng0);
    t1 = (t0 + 2864);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    memset(t8, 0, 8);
    t10 = (t9 + 4);
    t3 = *((unsigned int *)t10);
    t4 = (~(t3));
    t5 = *((unsigned int *)t9);
    t6 = (t5 & t4);
    t7 = (t6 & 4294967295U);
    if (t7 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t10) == 0)
        goto LAB7;

LAB9:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;

LAB10:    t12 = (t8 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t8);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB11;

LAB12:
LAB13:    xsi_set_current_line(31, ng0);
    t1 = (t0 + 2864);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    t10 = (t0 + 3344);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_bit_copy(t8, 0, t12, 0, 32);
    *((int *)t18) = xsi_vlogfile_fscanf(*((unsigned int *)t9), ng4, 2, t0, (char)119, t8, 32);
    t19 = (t18 + 4);
    *((int *)t19) = 0;
    t20 = (t0 + 3344);
    xsi_vlogvar_assign_value(t20, t8, 0, 0, 32);
    t21 = ((char*)((ng5)));
    memset(t22, 0, 8);
    xsi_vlog_signed_not_equal(t22, 32, t18, 32, t21, 32);
    t23 = (t22 + 4);
    t3 = *((unsigned int *)t23);
    t4 = (~(t3));
    t5 = *((unsigned int *)t22);
    t6 = (t5 & t4);
    t7 = (t6 != 0);
    if (t7 > 0)
        goto LAB15;

LAB16:
LAB17:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 2864);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    t10 = (t0 + 3504);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_bit_copy(t8, 0, t12, 0, 32);
    *((int *)t18) = xsi_vlogfile_fscanf(*((unsigned int *)t9), ng7, 2, t0, (char)119, t8, 32);
    t19 = (t18 + 4);
    *((int *)t19) = 0;
    t20 = (t0 + 3504);
    xsi_vlogvar_assign_value(t20, t8, 0, 0, 32);
    t21 = ((char*)((ng5)));
    memset(t22, 0, 8);
    xsi_vlog_signed_not_equal(t22, 32, t18, 32, t21, 32);
    t23 = (t22 + 4);
    t3 = *((unsigned int *)t23);
    t4 = (~(t3));
    t5 = *((unsigned int *)t22);
    t6 = (t5 & t4);
    t7 = (t6 != 0);
    if (t7 > 0)
        goto LAB19;

LAB20:
LAB21:    xsi_set_current_line(40, ng0);
    xsi_set_current_line(40, ng0);
    t1 = ((char*)((ng8)));
    t2 = (t0 + 3024);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB23:    t1 = (t0 + 3024);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    t10 = ((char*)((ng9)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t9, 32, t10, 32);
    t11 = (t8 + 4);
    t3 = *((unsigned int *)t11);
    t4 = (~(t3));
    t5 = *((unsigned int *)t8);
    t6 = (t5 & t4);
    t7 = (t6 != 0);
    if (t7 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(53, ng0);
    t1 = (t0 + 2864);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    xsi_vlogfile_fclose(*((unsigned int *)t9));
    goto LAB5;

LAB7:    *((unsigned int *)t8) = 1;
    goto LAB10;

LAB11:    xsi_set_current_line(26, ng0);

LAB14:    xsi_set_current_line(27, ng0);
    xsi_vlogfile_write(0, 0, 1, ng3, 1, t0);
    xsi_set_current_line(28, ng0);
    xsi_vlog_finish(1);
    goto LAB13;

LAB15:    xsi_set_current_line(31, ng0);

LAB18:    xsi_set_current_line(32, ng0);
    xsi_vlogfile_write(0, 0, 1, ng6, 1, t0);
    xsi_set_current_line(33, ng0);
    xsi_vlog_finish(1);
    goto LAB17;

LAB19:    xsi_set_current_line(35, ng0);

LAB22:    xsi_set_current_line(36, ng0);
    xsi_vlogfile_write(0, 0, 1, ng6, 1, t0);
    xsi_set_current_line(37, ng0);
    xsi_vlog_finish(1);
    goto LAB21;

LAB24:    xsi_set_current_line(40, ng0);

LAB26:    xsi_set_current_line(41, ng0);
    xsi_set_current_line(41, ng0);
    t12 = ((char*)((ng8)));
    t19 = (t0 + 3184);
    xsi_vlogvar_assign_value(t19, t12, 0, 0, 32);

LAB27:    t1 = (t0 + 3184);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    t10 = ((char*)((ng9)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t9, 32, t10, 32);
    t11 = (t8 + 4);
    t3 = *((unsigned int *)t11);
    t4 = (~(t3));
    t5 = *((unsigned int *)t8);
    t6 = (t5 & t4);
    t7 = (t6 != 0);
    if (t7 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(40, ng0);
    t1 = (t0 + 3024);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    t10 = ((char*)((ng5)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t9, 32, t10, 32);
    t11 = (t0 + 3024);
    xsi_vlogvar_assign_value(t11, t8, 0, 0, 32);
    goto LAB23;

LAB28:    xsi_set_current_line(41, ng0);

LAB30:    xsi_set_current_line(42, ng0);

LAB31:    xsi_set_current_line(44, ng0);
    t12 = (t0 + 2864);
    t19 = (t12 + 56U);
    t20 = *((char **)t19);
    t21 = (t0 + 2704);
    t23 = (t21 + 56U);
    t24 = *((char **)t23);
    t25 = (t0 + 2704);
    t26 = (t25 + 72U);
    t27 = *((char **)t26);
    t28 = (t0 + 2704);
    t29 = (t28 + 64U);
    t30 = *((char **)t29);
    t31 = (t0 + 3024);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t0 + 3184);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    xsi_vlog_generic_get_array_select_value(t22, 2, t24, t27, t30, 2, 2, t33, 32, 1, t36, 32, 1);
    xsi_vlog_bit_copy(t18, 0, t22, 0, 2);
    *((int *)t37) = xsi_vlogfile_fscanf(*((unsigned int *)t20), ng10, 2, t0, (char)118, t18, 2);
    t38 = (t37 + 4);
    *((int *)t38) = 0;
    t39 = (t0 + 2704);
    t42 = (t0 + 2704);
    t43 = (t42 + 72U);
    t44 = *((char **)t43);
    t45 = (t0 + 2704);
    t46 = (t45 + 64U);
    t47 = *((char **)t46);
    t48 = (t0 + 3024);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    t51 = (t0 + 3184);
    t52 = (t51 + 56U);
    t53 = *((char **)t52);
    xsi_vlog_generic_convert_array_indices(t40, t41, t44, t47, 2, 2, t50, 32, 1, t53, 32, 1);
    t54 = (t40 + 4);
    t13 = *((unsigned int *)t54);
    t55 = (!(t13));
    t56 = (t41 + 4);
    t14 = *((unsigned int *)t56);
    t57 = (!(t14));
    t58 = (t55 && t57);
    if (t58 == 1)
        goto LAB32;

LAB33:    t61 = ((char*)((ng5)));
    memset(t62, 0, 8);
    xsi_vlog_signed_not_equal(t62, 32, t37, 32, t61, 32);
    t63 = (t62 + 4);
    t17 = *((unsigned int *)t63);
    t64 = (~(t17));
    t65 = *((unsigned int *)t62);
    t66 = (t65 & t64);
    t67 = (t66 != 0);
    if (t67 > 0)
        goto LAB34;

LAB35:
LAB36:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 3184);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    t10 = ((char*)((ng5)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t9, 32, t10, 32);
    t11 = (t0 + 3184);
    xsi_vlogvar_assign_value(t11, t8, 0, 0, 32);
    goto LAB27;

LAB32:    t15 = *((unsigned int *)t40);
    t16 = *((unsigned int *)t41);
    t59 = (t15 - t16);
    t60 = (t59 + 1);
    xsi_vlogvar_assign_value(t39, t18, 0, *((unsigned int *)t41), t60);
    goto LAB33;

LAB34:    xsi_set_current_line(44, ng0);

LAB37:    xsi_set_current_line(45, ng0);
    xsi_vlogfile_write(0, 0, 1, ng11, 1, t0);
    xsi_set_current_line(46, ng0);
    xsi_vlog_finish(1);
    goto LAB36;

}

static void Always_58_1(char *t0)
{
    char t13[8];
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    int t25;
    char *t26;
    unsigned int t27;
    int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    int t32;
    int t33;
    char *t34;
    char *t35;

LAB0:    t1 = (t0 + 4832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 5896);
    *((int *)t2) = 1;
    t3 = (t0 + 4864);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(58, ng0);

LAB5:    xsi_set_current_line(59, ng0);
    t4 = (t0 + 1984U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2144U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:
LAB13:    goto LAB2;

LAB6:    xsi_set_current_line(60, ng0);
    t11 = ((char*)((ng12)));
    t12 = (t0 + 2704);
    t15 = (t0 + 2704);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 2704);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t21 = (t0 + 1664U);
    t22 = *((char **)t21);
    t21 = (t0 + 1824U);
    t23 = *((char **)t21);
    xsi_vlog_generic_convert_array_indices(t13, t14, t17, t20, 2, 2, t22, 6, 2, t23, 6, 2);
    t21 = (t13 + 4);
    t24 = *((unsigned int *)t21);
    t25 = (!(t24));
    t26 = (t14 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t25 && t28);
    if (t29 == 1)
        goto LAB9;

LAB10:    goto LAB8;

LAB9:    t30 = *((unsigned int *)t13);
    t31 = *((unsigned int *)t14);
    t32 = (t30 - t31);
    t33 = (t32 + 1);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, *((unsigned int *)t14), t33, 0LL);
    goto LAB10;

LAB11:    xsi_set_current_line(62, ng0);
    t4 = (t0 + 2704);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 2704);
    t15 = (t12 + 72U);
    t16 = *((char **)t15);
    t17 = (t0 + 2704);
    t18 = (t17 + 64U);
    t19 = *((char **)t18);
    t20 = (t0 + 1664U);
    t21 = *((char **)t20);
    t20 = (t0 + 1824U);
    t22 = *((char **)t20);
    xsi_vlog_generic_get_array_select_value(t13, 2, t11, t16, t19, 2, 2, t21, 6, 2, t22, 6, 2);
    t20 = (t0 + 2704);
    t23 = (t20 + 72U);
    t26 = *((char **)t23);
    t34 = ((char*)((ng8)));
    xsi_vlog_generic_get_index_select_value(t14, 1, t13, t26, 2, t34, 32, 1);
    t35 = (t0 + 3664);
    xsi_vlogvar_wait_assign_value(t35, t14, 0, 0, 1, 0LL);
    goto LAB13;

}

static void Cont_65_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 5080U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3664);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6024);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 5912);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_66_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 5328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 3344);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6088);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 63U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 5);
    t18 = (t0 + 5928);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_67_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 5576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3504);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6152);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 63U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 5);
    t18 = (t0 + 5944);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000003615523980_0221250631_init()
{
	static char *pe[] = {(void *)Initial_22_0,(void *)Always_58_1,(void *)Cont_65_2,(void *)Cont_66_3,(void *)Cont_67_4};
	xsi_register_didat("work_m_00000000003615523980_0221250631", "isim/test_isim_beh.exe.sim/work/m_00000000003615523980_0221250631.didat");
	xsi_register_executes(pe);
}
