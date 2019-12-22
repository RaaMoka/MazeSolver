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
static const char *ng0 = "D:/POLI/AN III/SEM I/AC/TEME/tema2/tema2_tester/build/bin/tester/tester.v";
static const char *ng1 = "test.config";
static const char *ng2 = "r";
static const char *ng3 = "error opening config file\n";
static const char *ng4 = "name=%16s\n";
static int ng5[] = {1, 0};
static const char *ng6 = "error reading test name\n";
static const char *ng7 = "value=%f\n";
static const char *ng8 = "error reading test value\n";
static const char *ng9 = "penalty=%f\n";
static const char *ng10 = "error reading test penalty\n";
static const char *ng11 = "max_cycles=%d\n";
static const char *ng12 = "error reading allowed maximum cycles for one world update\n";
static const char *ng13 = "sol.data";
static const char *ng14 = "error opening solution file\n";
static const char *ng15 = "starting_row=%d\n";
static const char *ng16 = "error reading solution starting_row value\n";
static const char *ng17 = "starting_col=%d\n";
static const char *ng18 = "error reading solution starting_col value\n";
static int ng19[] = {0, 0};
static int ng20[] = {2, 0};
static unsigned int ng21[] = {0U, 0U};
static const char *ng22 = "--------------------------------------------------------------------------------\n";
static const char *ng23 = "done in %0d cycles\n";
static const char *ng24 = "timeout after %0d cycles\n";
static int ng25[] = {4, 0};
static const char *ng26 = "\tworld: ";
static const char *ng27 = "\n\t";
static const char *ng28 = "%d";
static const char *ng29 = "\n";
static int ng30[] = {1, 0, 0, 0};
static const char *ng31 = "result.tester";
static const char *ng32 = "%6.2f: test %0s %0s\n";
static int ng33[] = {28523, 0, 0, 0};
static int ng34[] = {1768711524, 0, 26209, 0};



static void Initial_28_0(char *t0)
{
    char t1[8];
    char t18[32];
    char t22[8];
    char t25[8];
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
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    double t24;
    char *t26;

LAB0:    xsi_set_current_line(28, ng0);

LAB2:    xsi_set_current_line(29, ng0);
    *((int *)t1) = xsi_vlogfile_file_open_of_cname_ctype(ng1, ng2);
    t2 = (t1 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 5104);
    xsi_vlogvar_assign_value(t3, t1, 0, 0, 32);
    xsi_set_current_line(30, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t1, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 4294967295U);
    if (t10 != 0)
        goto LAB6;

LAB4:    if (*((unsigned int *)t5) == 0)
        goto LAB3;

LAB5:    t11 = (t1 + 4);
    *((unsigned int *)t1) = 1;
    *((unsigned int *)t11) = 1;

LAB6:    t12 = (t1 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t1);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB7;

LAB8:
LAB9:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4144);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_bit_copy(t18, 0, t12, 0, 128);
    *((int *)t1) = xsi_vlogfile_fscanf(*((unsigned int *)t4), ng4, 2, t0, (char)118, t18, 128);
    t19 = (t1 + 4);
    *((int *)t19) = 0;
    t20 = (t0 + 4144);
    xsi_vlogvar_assign_value(t20, t18, 0, 0, 128);
    t21 = ((char*)((ng5)));
    memset(t22, 0, 8);
    xsi_vlog_signed_not_equal(t22, 32, t1, 32, t21, 32);
    t23 = (t22 + 4);
    t6 = *((unsigned int *)t23);
    t7 = (~(t6));
    t8 = *((unsigned int *)t22);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:
LAB13:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4304);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t24 = *((double *)t12);
    t19 = xsi_vlog_convert_real_to_bits(t24, t1, 64);
    *((int *)t22) = xsi_vlogfile_fscanf(*((unsigned int *)t4), ng7, 2, t0, (char)101, t1, 64);
    t20 = (t22 + 4);
    *((int *)t20) = 0;
    t21 = (t0 + 4304);
    xsi_vlogvar_assign_value_double(t21, *((double *)t1), 0);
    t23 = ((char*)((ng5)));
    memset(t25, 0, 8);
    xsi_vlog_signed_not_equal(t25, 32, t22, 32, t23, 32);
    t26 = (t25 + 4);
    t6 = *((unsigned int *)t26);
    t7 = (~(t6));
    t8 = *((unsigned int *)t25);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB15;

LAB16:
LAB17:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4464);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t24 = *((double *)t12);
    t19 = xsi_vlog_convert_real_to_bits(t24, t1, 64);
    *((int *)t22) = xsi_vlogfile_fscanf(*((unsigned int *)t4), ng9, 2, t0, (char)101, t1, 64);
    t20 = (t22 + 4);
    *((int *)t20) = 0;
    t21 = (t0 + 4464);
    xsi_vlogvar_assign_value_double(t21, *((double *)t1), 0);
    t23 = ((char*)((ng5)));
    memset(t25, 0, 8);
    xsi_vlog_signed_not_equal(t25, 32, t22, 32, t23, 32);
    t26 = (t25 + 4);
    t6 = *((unsigned int *)t26);
    t7 = (~(t6));
    t8 = *((unsigned int *)t25);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB19;

LAB20:
LAB21:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4624);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_bit_copy(t1, 0, t12, 0, 32);
    *((int *)t22) = xsi_vlogfile_fscanf(*((unsigned int *)t4), ng11, 2, t0, (char)119, t1, 32);
    t19 = (t22 + 4);
    *((int *)t19) = 0;
    t20 = (t0 + 4624);
    xsi_vlogvar_assign_value(t20, t1, 0, 0, 32);
    t21 = ((char*)((ng5)));
    memset(t25, 0, 8);
    xsi_vlog_signed_not_equal(t25, 32, t22, 32, t21, 32);
    t23 = (t25 + 4);
    t6 = *((unsigned int *)t23);
    t7 = (~(t6));
    t8 = *((unsigned int *)t25);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB23;

LAB24:
LAB25:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t4));
    xsi_set_current_line(52, ng0);
    *((int *)t1) = xsi_vlogfile_file_open_of_cname_ctype(ng13, ng2);
    t2 = (t1 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 5104);
    xsi_vlogvar_assign_value(t3, t1, 0, 0, 32);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t1, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 4294967295U);
    if (t10 != 0)
        goto LAB30;

LAB28:    if (*((unsigned int *)t5) == 0)
        goto LAB27;

LAB29:    t11 = (t1 + 4);
    *((unsigned int *)t1) = 1;
    *((unsigned int *)t11) = 1;

LAB30:    t12 = (t1 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t1);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB31;

LAB32:
LAB33:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4784);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_bit_copy(t1, 0, t12, 0, 6);
    *((int *)t22) = xsi_vlogfile_fscanf(*((unsigned int *)t4), ng15, 2, t0, (char)118, t1, 6);
    t19 = (t22 + 4);
    *((int *)t19) = 0;
    t20 = (t0 + 4784);
    xsi_vlogvar_assign_value(t20, t1, 0, 0, 6);
    t21 = ((char*)((ng5)));
    memset(t25, 0, 8);
    xsi_vlog_signed_not_equal(t25, 32, t22, 32, t21, 32);
    t23 = (t25 + 4);
    t6 = *((unsigned int *)t23);
    t7 = (~(t6));
    t8 = *((unsigned int *)t25);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB35;

LAB36:
LAB37:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4944);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_bit_copy(t1, 0, t12, 0, 6);
    *((int *)t22) = xsi_vlogfile_fscanf(*((unsigned int *)t4), ng17, 2, t0, (char)118, t1, 6);
    t19 = (t22 + 4);
    *((int *)t19) = 0;
    t20 = (t0 + 4944);
    xsi_vlogvar_assign_value(t20, t1, 0, 0, 6);
    t21 = ((char*)((ng5)));
    memset(t25, 0, 8);
    xsi_vlog_signed_not_equal(t25, 32, t22, 32, t21, 32);
    t23 = (t25 + 4);
    t6 = *((unsigned int *)t23);
    t7 = (~(t6));
    t8 = *((unsigned int *)t25);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB39;

LAB40:
LAB41:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t4));

LAB1:    return;
LAB3:    *((unsigned int *)t1) = 1;
    goto LAB6;

LAB7:    xsi_set_current_line(30, ng0);

LAB10:    xsi_set_current_line(31, ng0);
    xsi_vlogfile_write(0, 0, 1, ng3, 1, t0);
    xsi_set_current_line(32, ng0);
    xsi_vlog_finish(1);
    goto LAB9;

LAB11:    xsi_set_current_line(34, ng0);

LAB14:    xsi_set_current_line(35, ng0);
    xsi_vlogfile_write(0, 0, 1, ng6, 1, t0);
    xsi_set_current_line(36, ng0);
    xsi_vlog_finish(1);
    goto LAB13;

LAB15:    xsi_set_current_line(38, ng0);

LAB18:    xsi_set_current_line(39, ng0);
    xsi_vlogfile_write(0, 0, 1, ng8, 1, t0);
    xsi_set_current_line(40, ng0);
    xsi_vlog_finish(1);
    goto LAB17;

LAB19:    xsi_set_current_line(42, ng0);

LAB22:    xsi_set_current_line(43, ng0);
    xsi_vlogfile_write(0, 0, 1, ng10, 1, t0);
    xsi_set_current_line(44, ng0);
    xsi_vlog_finish(1);
    goto LAB21;

LAB23:    xsi_set_current_line(46, ng0);

LAB26:    xsi_set_current_line(47, ng0);
    xsi_vlogfile_write(0, 0, 1, ng12, 1, t0);
    xsi_set_current_line(48, ng0);
    xsi_vlog_finish(1);
    goto LAB25;

LAB27:    *((unsigned int *)t1) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(53, ng0);

LAB34:    xsi_set_current_line(54, ng0);
    xsi_vlogfile_write(0, 0, 1, ng14, 1, t0);
    xsi_set_current_line(55, ng0);
    xsi_vlog_finish(1);
    goto LAB33;

LAB35:    xsi_set_current_line(57, ng0);

LAB38:    xsi_set_current_line(58, ng0);
    xsi_vlogfile_write(0, 0, 1, ng16, 1, t0);
    xsi_set_current_line(59, ng0);
    xsi_vlog_finish(1);
    goto LAB37;

LAB39:    xsi_set_current_line(61, ng0);

LAB42:    xsi_set_current_line(62, ng0);
    xsi_vlogfile_write(0, 0, 1, ng18, 1, t0);
    xsi_set_current_line(63, ng0);
    xsi_vlog_finish(1);
    goto LAB41;

}

static void Initial_120_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(120, ng0);

LAB2:    xsi_set_current_line(122, ng0);
    t1 = ((char*)((ng19)));
    t2 = (t0 + 5264);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(124, ng0);
    t1 = ((char*)((ng19)));
    t2 = (t0 + 5904);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Always_127_2(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 7960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 7768);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(127, ng0);
    t4 = (t0 + 5264);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t0 + 5264);
    xsi_vlogvar_assign_value(t14, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

}

static void Cont_129_3(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 8208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 5424);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 6);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 6);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 63U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 63U);
    t14 = (t0 + 10984);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 63U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 5);
    t27 = (t0 + 10760);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_130_4(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 8456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 5424);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 63U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 63U);
    t14 = (t0 + 11048);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 63U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 5);
    t27 = (t0 + 10776);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_133_5(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char t9[8];
    char t21[8];
    char t32[8];
    char t40[8];
    char t86[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    int t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    char *t85;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;

LAB0:    t1 = (t0 + 8704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 5904);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng5)));
    memset(t8, 0, 8);
    xsi_vlog_signed_equal(t8, 32, t6, 32, t7, 32);
    memset(t9, 0, 8);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t8);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t10) != 0)
        goto LAB6;

LAB7:    t17 = (t9 + 4);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t17);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB8;

LAB9:    memcpy(t40, t9, 8);

LAB10:    memset(t4, 0, 8);
    t72 = (t40 + 4);
    t73 = *((unsigned int *)t72);
    t74 = (~(t73));
    t75 = *((unsigned int *)t40);
    t76 = (t75 & t74);
    t77 = (t76 & 1U);
    if (t77 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t72) != 0)
        goto LAB24;

LAB25:    t79 = (t4 + 4);
    t80 = *((unsigned int *)t4);
    t81 = *((unsigned int *)t79);
    t82 = (t80 || t81);
    if (t82 > 0)
        goto LAB26;

LAB27:    t87 = *((unsigned int *)t4);
    t88 = (~(t87));
    t89 = *((unsigned int *)t79);
    t90 = (t88 || t89);
    if (t90 > 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t79) > 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t4) > 0)
        goto LAB32;

LAB33:    memcpy(t3, t91, 8);

LAB34:    t92 = (t0 + 11112);
    t93 = (t92 + 56U);
    t94 = *((char **)t93);
    t95 = (t94 + 56U);
    t96 = *((char **)t95);
    memset(t96, 0, 8);
    t97 = 1U;
    t98 = t97;
    t99 = (t3 + 4);
    t100 = *((unsigned int *)t3);
    t97 = (t97 & t100);
    t101 = *((unsigned int *)t99);
    t98 = (t98 & t101);
    t102 = (t96 + 4);
    t103 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t103 | t97);
    t104 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t104 | t98);
    xsi_driver_vfirst_trans(t92, 0, 0);
    t105 = (t0 + 10792);
    *((int *)t105) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t9) = 1;
    goto LAB7;

LAB6:    t16 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB7;

LAB8:    t22 = (t0 + 5744);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memset(t21, 0, 8);
    t25 = (t24 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t24);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB14;

LAB12:    if (*((unsigned int *)t25) == 0)
        goto LAB11;

LAB13:    t31 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t31) = 1;

LAB14:    memset(t32, 0, 8);
    t33 = (t21 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t21);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t33) != 0)
        goto LAB17;

LAB18:    t41 = *((unsigned int *)t9);
    t42 = *((unsigned int *)t32);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t44 = (t9 + 4);
    t45 = (t32 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t44);
    t48 = *((unsigned int *)t45);
    t49 = (t47 | t48);
    *((unsigned int *)t46) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB10;

LAB11:    *((unsigned int *)t21) = 1;
    goto LAB14;

LAB15:    *((unsigned int *)t32) = 1;
    goto LAB18;

LAB17:    t39 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB18;

LAB19:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t40) = (t52 | t53);
    t54 = (t9 + 4);
    t55 = (t32 + 4);
    t56 = *((unsigned int *)t9);
    t57 = (~(t56));
    t58 = *((unsigned int *)t54);
    t59 = (~(t58));
    t60 = *((unsigned int *)t32);
    t61 = (~(t60));
    t62 = *((unsigned int *)t55);
    t63 = (~(t62));
    t64 = (t57 & t59);
    t65 = (t61 & t63);
    t66 = (~(t64));
    t67 = (~(t65));
    t68 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t68 & t66);
    t69 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t69 & t67);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    t71 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t71 & t67);
    goto LAB21;

LAB22:    *((unsigned int *)t4) = 1;
    goto LAB25;

LAB24:    t78 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t78) = 1;
    goto LAB25;

LAB26:    t83 = (t0 + 5264);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    memcpy(t86, t85, 8);
    goto LAB27;

LAB28:    t91 = ((char*)((ng19)));
    goto LAB29;

LAB30:    xsi_vlog_unsigned_bit_combine(t3, 32, t86, 32, t91, 32);
    goto LAB34;

LAB32:    memcpy(t3, t86, 8);
    goto LAB34;

}

static void Cont_136_6(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
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
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;

LAB0:    t1 = (t0 + 8952U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(136, ng0);
    t2 = (t0 + 5904);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng20)));
    memset(t8, 0, 8);
    xsi_vlog_signed_equal(t8, 32, t6, 32, t7, 32);
    memset(t4, 0, 8);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t9) != 0)
        goto LAB6;

LAB7:    t16 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t16);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB8;

LAB9:    t23 = *((unsigned int *)t4);
    t24 = (~(t23));
    t25 = *((unsigned int *)t16);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t16) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t28, 8);

LAB16:    t27 = (t0 + 11176);
    t29 = (t27 + 56U);
    t30 = *((char **)t29);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memset(t32, 0, 8);
    t33 = 1U;
    t34 = t33;
    t35 = (t3 + 4);
    t36 = *((unsigned int *)t3);
    t33 = (t33 & t36);
    t37 = *((unsigned int *)t35);
    t34 = (t34 & t37);
    t38 = (t32 + 4);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t39 | t33);
    t40 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t40 | t34);
    xsi_driver_vfirst_trans(t27, 0, 0);
    t41 = (t0 + 10808);
    *((int *)t41) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t15 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB7;

LAB8:    t20 = (t0 + 5264);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    goto LAB9;

LAB10:    t27 = (t0 + 1184U);
    t28 = *((char **)t27);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t22, 1, t28, 1);
    goto LAB16;

LAB14:    memcpy(t3, t22, 8);
    goto LAB16;

}

static void Cont_139_7(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;

LAB0:    t1 = (t0 + 9200U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 5904);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng20)));
    memset(t8, 0, 8);
    xsi_vlog_signed_equal(t8, 32, t6, 32, t7, 32);
    memset(t4, 0, 8);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t9) != 0)
        goto LAB6;

LAB7:    t16 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t16);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB8;

LAB9:    t22 = *((unsigned int *)t4);
    t23 = (~(t22));
    t24 = *((unsigned int *)t16);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t16) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t26, 8);

LAB16:    t20 = (t0 + 11240);
    t27 = (t20 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memset(t30, 0, 8);
    t31 = 63U;
    t32 = t31;
    t33 = (t3 + 4);
    t34 = *((unsigned int *)t3);
    t31 = (t31 & t34);
    t35 = *((unsigned int *)t33);
    t32 = (t32 & t35);
    t36 = (t30 + 4);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t37 | t31);
    t38 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t38 | t32);
    xsi_driver_vfirst_trans(t20, 0, 5);
    t39 = (t0 + 10824);
    *((int *)t39) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t15 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB7;

LAB8:    t20 = (t0 + 3584U);
    t21 = *((char **)t20);
    goto LAB9;

LAB10:    t20 = (t0 + 1504U);
    t26 = *((char **)t20);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 6, t21, 6, t26, 6);
    goto LAB16;

LAB14:    memcpy(t3, t21, 8);
    goto LAB16;

}

static void Cont_142_8(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;

LAB0:    t1 = (t0 + 9448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(142, ng0);
    t2 = (t0 + 5904);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng20)));
    memset(t8, 0, 8);
    xsi_vlog_signed_equal(t8, 32, t6, 32, t7, 32);
    memset(t4, 0, 8);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t9) != 0)
        goto LAB6;

LAB7:    t16 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t16);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB8;

LAB9:    t22 = *((unsigned int *)t4);
    t23 = (~(t22));
    t24 = *((unsigned int *)t16);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t16) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t26, 8);

LAB16:    t20 = (t0 + 11304);
    t27 = (t20 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memset(t30, 0, 8);
    t31 = 63U;
    t32 = t31;
    t33 = (t3 + 4);
    t34 = *((unsigned int *)t3);
    t31 = (t31 & t34);
    t35 = *((unsigned int *)t33);
    t32 = (t32 & t35);
    t36 = (t30 + 4);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t37 | t31);
    t38 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t38 | t32);
    xsi_driver_vfirst_trans(t20, 0, 5);
    t39 = (t0 + 10840);
    *((int *)t39) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t15 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB7;

LAB8:    t20 = (t0 + 3744U);
    t21 = *((char **)t20);
    goto LAB9;

LAB10:    t20 = (t0 + 1824U);
    t26 = *((char **)t20);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 6, t21, 6, t26, 6);
    goto LAB16;

LAB14:    memcpy(t3, t21, 8);
    goto LAB16;

}

static void Cont_145_9(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;

LAB0:    t1 = (t0 + 9696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 5904);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng20)));
    memset(t8, 0, 8);
    xsi_vlog_signed_equal(t8, 32, t6, 32, t7, 32);
    memset(t4, 0, 8);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t9) != 0)
        goto LAB6;

LAB7:    t16 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t16);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB8;

LAB9:    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    t23 = *((unsigned int *)t16);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t16) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t26, 8);

LAB16:    t25 = (t0 + 11368);
    t27 = (t25 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memset(t30, 0, 8);
    t31 = 1U;
    t32 = t31;
    t33 = (t3 + 4);
    t34 = *((unsigned int *)t3);
    t31 = (t31 & t34);
    t35 = *((unsigned int *)t33);
    t32 = (t32 & t35);
    t36 = (t30 + 4);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t37 | t31);
    t38 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t38 | t32);
    xsi_driver_vfirst_trans(t25, 0, 0);
    t39 = (t0 + 10856);
    *((int *)t39) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t15 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB7;

LAB8:    t20 = ((char*)((ng21)));
    goto LAB9;

LAB10:    t25 = (t0 + 2144U);
    t26 = *((char **)t25);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t20, 1, t26, 1);
    goto LAB16;

LAB14:    memcpy(t3, t20, 8);
    goto LAB16;

}

static void Cont_148_10(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;

LAB0:    t1 = (t0 + 9944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(148, ng0);
    t2 = (t0 + 5904);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng20)));
    memset(t8, 0, 8);
    xsi_vlog_signed_equal(t8, 32, t6, 32, t7, 32);
    memset(t4, 0, 8);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t9) != 0)
        goto LAB6;

LAB7:    t16 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t16);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB8;

LAB9:    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    t23 = *((unsigned int *)t16);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t16) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t26, 8);

LAB16:    t25 = (t0 + 11432);
    t27 = (t25 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memset(t30, 0, 8);
    t31 = 1U;
    t32 = t31;
    t33 = (t3 + 4);
    t34 = *((unsigned int *)t3);
    t31 = (t31 & t34);
    t35 = *((unsigned int *)t33);
    t32 = (t32 & t35);
    t36 = (t30 + 4);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t37 | t31);
    t38 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t38 | t32);
    xsi_driver_vfirst_trans(t25, 0, 0);
    t39 = (t0 + 10872);
    *((int *)t39) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t15 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB7;

LAB8:    t20 = ((char*)((ng21)));
    goto LAB9;

LAB10:    t25 = (t0 + 2464U);
    t26 = *((char **)t25);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t20, 1, t26, 1);
    goto LAB16;

LAB14:    memcpy(t3, t20, 8);
    goto LAB16;

}

static void Cont_151_11(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char t22[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;

LAB0:    t1 = (t0 + 10192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(151, ng0);
    t2 = (t0 + 5904);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng5)));
    memset(t8, 0, 8);
    xsi_vlog_signed_equal(t8, 32, t6, 32, t7, 32);
    memset(t4, 0, 8);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t9) != 0)
        goto LAB6;

LAB7:    t16 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t16);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB8;

LAB9:    t23 = *((unsigned int *)t4);
    t24 = (~(t23));
    t25 = *((unsigned int *)t16);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t16) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t20, 8);

LAB16:    t27 = (t0 + 11496);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memset(t31, 0, 8);
    t32 = 1U;
    t33 = t32;
    t34 = (t3 + 4);
    t35 = *((unsigned int *)t3);
    t32 = (t32 & t35);
    t36 = *((unsigned int *)t34);
    t33 = (t33 & t36);
    t37 = (t31 + 4);
    t38 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t38 | t32);
    t39 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t39 | t33);
    xsi_driver_vfirst_trans(t27, 0, 0);
    t40 = (t0 + 10888);
    *((int *)t40) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t15 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB7;

LAB8:    t20 = (t0 + 2944U);
    t21 = *((char **)t20);
    memcpy(t22, t21, 8);
    goto LAB9;

LAB10:    t20 = ((char*)((ng19)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t22, 32, t20, 32);
    goto LAB16;

LAB14:    memcpy(t3, t22, 8);
    goto LAB16;

}

static void Always_153_12(char *t0)
{
    char t8[8];
    char t25[8];
    char t28[8];
    char t42[8];
    char t45[8];
    char t53[8];
    char t85[8];
    char t93[8];
    char t127[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t43;
    char *t44;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    int t77;
    int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;
    double t122;
    double t123;
    double t124;
    double t125;
    double t126;

LAB0:    t1 = (t0 + 10440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 10904);
    *((int *)t2) = 1;
    t3 = (t0 + 10472);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(153, ng0);

LAB5:    xsi_set_current_line(154, ng0);
    t4 = (t0 + 3264U);
    t5 = *((char **)t4);
    t4 = (t0 + 5584);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(156, ng0);
    t2 = (t0 + 5904);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng19)));
    t6 = xsi_vlog_signed_case_compare(t4, 32, t5, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng20)));
    t6 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng25)));
    t6 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(157, ng0);

LAB16:    xsi_set_current_line(158, ng0);
    xsi_vlogfile_write(0, 0, 1, ng22, 1, t0);
    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 5744);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(162, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 6064);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 5904);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB15;

LAB9:    xsi_set_current_line(167, ng0);

LAB17:    xsi_set_current_line(169, ng0);
    t3 = (t0 + 5744);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    memset(t8, 0, 8);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t9) != 0)
        goto LAB20;

LAB21:    t16 = (t8 + 4);
    t17 = *((unsigned int *)t8);
    t18 = (!(t17));
    t19 = *((unsigned int *)t16);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB22;

LAB23:    memcpy(t93, t8, 8);

LAB24:    t121 = (t0 + 5744);
    xsi_vlogvar_wait_assign_value(t121, t93, 0, 0, 1, 0LL);
    xsi_set_current_line(171, ng0);
    t2 = (t0 + 5744);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t8, 0, 8);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB55;

LAB53:    if (*((unsigned int *)t7) == 0)
        goto LAB52;

LAB54:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;

LAB55:    t15 = (t8 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (~(t17));
    t19 = *((unsigned int *)t8);
    t20 = (t19 & t18);
    t30 = (t20 != 0);
    if (t30 > 0)
        goto LAB56;

LAB57:
LAB58:    xsi_set_current_line(176, ng0);
    t2 = (t0 + 5744);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(184, ng0);

LAB64:    xsi_set_current_line(186, ng0);
    t2 = (t0 + 6064);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 4624);
    t9 = (t7 + 56U);
    t15 = *((char **)t9);
    memset(t8, 0, 8);
    xsi_vlog_signed_greatereq(t8, 32, t5, 32, t15, 32);
    t16 = (t8 + 4);
    t10 = *((unsigned int *)t16);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB65;

LAB66:
LAB67:
LAB62:    goto LAB15;

LAB11:    xsi_set_current_line(195, ng0);

LAB69:    xsi_set_current_line(196, ng0);
    t3 = (t0 + 472);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB70;

LAB71:
LAB72:    xsi_set_current_line(211, ng0);
    t2 = (t0 + 5424);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng5)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t5, 12, t7, 32);
    t9 = (t0 + 5424);
    xsi_vlogvar_wait_assign_value(t9, t8, 0, 0, 12, 0LL);
    xsi_set_current_line(213, ng0);
    t2 = (t0 + 5424);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t8, 0, 8);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t7);
    t12 = (t10 | t11);
    if (t12 != 4095U)
        goto LAB96;

LAB95:    if (*((unsigned int *)t7) == 0)
        goto LAB97;

LAB98:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;

LAB96:    t15 = (t8 + 4);
    t13 = *((unsigned int *)t15);
    t14 = (~(t13));
    t17 = *((unsigned int *)t8);
    t18 = (t17 & t14);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB99;

LAB100:
LAB101:    goto LAB15;

LAB13:    xsi_set_current_line(218, ng0);

LAB103:    xsi_set_current_line(219, ng0);
    xsi_vlogfile_write(0, 0, 1, ng22, 1, t0);
    xsi_set_current_line(221, ng0);
    t2 = (t0 + 3424U);
    t3 = *((char **)t2);
    t122 = xsi_vlog_convert_to_real(t3, 1, 2);
    t123 = (t122 * 1.0000000000000000);
    t2 = ((char*)((ng30)));
    t124 = xsi_vlog_convert_to_real(t2, 32, 1);
    t125 = (t123 / t124);
    t5 = (t0 + 6224);
    xsi_vlogvar_assign_value_double(t5, t125, 0);
    xsi_set_current_line(222, ng0);
    t2 = (t0 + 6224);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t122 = *((double *)t5);
    t7 = (t0 + 6384);
    xsi_vlogvar_assign_value_double(t7, t122, 0);
    xsi_set_current_line(225, ng0);
    *((int *)t8) = xsi_vlogfile_file_open_of_cname(ng31);
    t2 = (t8 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 6544);
    xsi_vlogvar_assign_value(t3, t8, 0, 0, 32);
    xsi_set_current_line(226, ng0);
    t2 = (t0 + 6544);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 4304);
    t9 = (t7 + 56U);
    t15 = *((char **)t9);
    t122 = *((double *)t15);
    t16 = (t0 + 6384);
    t21 = (t16 + 56U);
    t22 = *((char **)t21);
    t123 = *((double *)t22);
    t23 = (t0 + 4464);
    t24 = (t23 + 56U);
    t26 = *((char **)t24);
    t124 = *((double *)t26);
    t125 = (t123 - t124);
    t126 = (t122 * t125);
    *((double *)t8) = t126;
    t27 = (t0 + 4144);
    t29 = (t27 + 56U);
    t35 = *((char **)t29);
    t36 = (t0 + 3424U);
    t40 = *((char **)t36);
    memset(t25, 0, 8);
    t36 = (t40 + 4);
    t10 = *((unsigned int *)t36);
    t11 = (~(t10));
    t12 = *((unsigned int *)t40);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB104;

LAB105:    if (*((unsigned int *)t36) != 0)
        goto LAB106;

LAB107:    t43 = (t25 + 4);
    t17 = *((unsigned int *)t25);
    t18 = *((unsigned int *)t43);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB108;

LAB109:    t20 = *((unsigned int *)t25);
    t30 = (~(t20));
    t31 = *((unsigned int *)t43);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB110;

LAB111:    if (*((unsigned int *)t43) > 0)
        goto LAB112;

LAB113:    if (*((unsigned int *)t25) > 0)
        goto LAB114;

LAB115:    memcpy(t127, t46, 16);

LAB116:    xsi_vlogfile_fwrite(*((unsigned int *)t5), 0, 0, 1, ng32, 4, t0, (char)114, t8, 64, (char)118, t35, 128, (char)118, t127, 48);
    xsi_set_current_line(230, ng0);
    t2 = (t0 + 6544);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t5));
    xsi_set_current_line(231, ng0);
    xsi_vlog_finish(1);
    goto LAB15;

LAB18:    *((unsigned int *)t8) = 1;
    goto LAB21;

LAB20:    t15 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB21;

LAB22:    t21 = (t0 + 5584);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng5)));
    memset(t25, 0, 8);
    if (*((unsigned int *)t23) != *((unsigned int *)t24))
        goto LAB26;

LAB25:    t26 = (t23 + 4);
    t27 = (t24 + 4);
    if (*((unsigned int *)t26) != *((unsigned int *)t27))
        goto LAB26;

LAB27:    memset(t28, 0, 8);
    t29 = (t25 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t25);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t29) != 0)
        goto LAB30;

LAB31:    t36 = (t28 + 4);
    t37 = *((unsigned int *)t28);
    t38 = *((unsigned int *)t36);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB32;

LAB33:    memcpy(t53, t28, 8);

LAB34:    memset(t85, 0, 8);
    t86 = (t53 + 4);
    t87 = *((unsigned int *)t86);
    t88 = (~(t87));
    t89 = *((unsigned int *)t53);
    t90 = (t89 & t88);
    t91 = (t90 & 1U);
    if (t91 != 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t86) != 0)
        goto LAB47;

LAB48:    t94 = *((unsigned int *)t8);
    t95 = *((unsigned int *)t85);
    t96 = (t94 | t95);
    *((unsigned int *)t93) = t96;
    t97 = (t8 + 4);
    t98 = (t85 + 4);
    t99 = (t93 + 4);
    t100 = *((unsigned int *)t97);
    t101 = *((unsigned int *)t98);
    t102 = (t100 | t101);
    *((unsigned int *)t99) = t102;
    t103 = *((unsigned int *)t99);
    t104 = (t103 != 0);
    if (t104 == 1)
        goto LAB49;

LAB50:
LAB51:    goto LAB24;

LAB26:    *((unsigned int *)t25) = 1;
    goto LAB27;

LAB28:    *((unsigned int *)t28) = 1;
    goto LAB31;

LAB30:    t35 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB31;

LAB32:    t40 = (t0 + 3264U);
    t41 = *((char **)t40);
    t40 = ((char*)((ng5)));
    memset(t42, 0, 8);
    if (*((unsigned int *)t41) != *((unsigned int *)t40))
        goto LAB37;

LAB35:    t43 = (t41 + 4);
    t44 = (t40 + 4);
    if (*((unsigned int *)t43) != *((unsigned int *)t44))
        goto LAB37;

LAB36:    *((unsigned int *)t42) = 1;

LAB37:    memset(t45, 0, 8);
    t46 = (t42 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t42);
    t50 = (t49 & t48);
    t51 = (t50 & 1U);
    if (t51 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t46) != 0)
        goto LAB40;

LAB41:    t54 = *((unsigned int *)t28);
    t55 = *((unsigned int *)t45);
    t56 = (t54 & t55);
    *((unsigned int *)t53) = t56;
    t57 = (t28 + 4);
    t58 = (t45 + 4);
    t59 = (t53 + 4);
    t60 = *((unsigned int *)t57);
    t61 = *((unsigned int *)t58);
    t62 = (t60 | t61);
    *((unsigned int *)t59) = t62;
    t63 = *((unsigned int *)t59);
    t64 = (t63 != 0);
    if (t64 == 1)
        goto LAB42;

LAB43:
LAB44:    goto LAB34;

LAB38:    *((unsigned int *)t45) = 1;
    goto LAB41;

LAB40:    t52 = (t45 + 4);
    *((unsigned int *)t45) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB41;

LAB42:    t65 = *((unsigned int *)t53);
    t66 = *((unsigned int *)t59);
    *((unsigned int *)t53) = (t65 | t66);
    t67 = (t28 + 4);
    t68 = (t45 + 4);
    t69 = *((unsigned int *)t28);
    t70 = (~(t69));
    t71 = *((unsigned int *)t67);
    t72 = (~(t71));
    t73 = *((unsigned int *)t45);
    t74 = (~(t73));
    t75 = *((unsigned int *)t68);
    t76 = (~(t75));
    t77 = (t70 & t72);
    t78 = (t74 & t76);
    t79 = (~(t77));
    t80 = (~(t78));
    t81 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t81 & t79);
    t82 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t82 & t80);
    t83 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t83 & t79);
    t84 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t84 & t80);
    goto LAB44;

LAB45:    *((unsigned int *)t85) = 1;
    goto LAB48;

LAB47:    t92 = (t85 + 4);
    *((unsigned int *)t85) = 1;
    *((unsigned int *)t92) = 1;
    goto LAB48;

LAB49:    t105 = *((unsigned int *)t93);
    t106 = *((unsigned int *)t99);
    *((unsigned int *)t93) = (t105 | t106);
    t107 = (t8 + 4);
    t108 = (t85 + 4);
    t109 = *((unsigned int *)t107);
    t110 = (~(t109));
    t111 = *((unsigned int *)t8);
    t112 = (t111 & t110);
    t113 = *((unsigned int *)t108);
    t114 = (~(t113));
    t115 = *((unsigned int *)t85);
    t116 = (t115 & t114);
    t117 = (~(t112));
    t118 = (~(t116));
    t119 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t119 & t117);
    t120 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t120 & t118);
    goto LAB51;

LAB52:    *((unsigned int *)t8) = 1;
    goto LAB55;

LAB56:    xsi_set_current_line(171, ng0);

LAB59:    xsi_set_current_line(173, ng0);
    t16 = (t0 + 6064);
    t21 = (t16 + 56U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng5)));
    memset(t25, 0, 8);
    xsi_vlog_signed_add(t25, 32, t22, 32, t23, 32);
    t24 = (t0 + 6064);
    xsi_vlogvar_wait_assign_value(t24, t25, 0, 0, 32, 0LL);
    goto LAB58;

LAB60:    xsi_set_current_line(176, ng0);

LAB63:    xsi_set_current_line(178, ng0);
    t9 = (t0 + 6064);
    t15 = (t9 + 56U);
    t16 = *((char **)t15);
    xsi_vlogfile_write(0, 0, 1, ng23, 2, t0, (char)119, t16, 32);
    xsi_set_current_line(180, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 5424);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 12, 0LL);
    xsi_set_current_line(182, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 5904);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB62;

LAB65:    xsi_set_current_line(186, ng0);

LAB68:    xsi_set_current_line(188, ng0);
    t21 = (t0 + 6064);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    xsi_vlogfile_write(0, 0, 1, ng24, 2, t0, (char)119, t23, 32);
    xsi_set_current_line(190, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 5904);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB67;

LAB70:    xsi_set_current_line(196, ng0);

LAB73:    xsi_set_current_line(198, ng0);
    t7 = (t0 + 5424);
    t9 = (t7 + 56U);
    t15 = *((char **)t9);
    t16 = ((char*)((ng19)));
    memset(t8, 0, 8);
    t21 = (t15 + 4);
    t22 = (t16 + 4);
    t17 = *((unsigned int *)t15);
    t18 = *((unsigned int *)t16);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t21);
    t30 = *((unsigned int *)t22);
    t31 = (t20 ^ t30);
    t32 = (t19 | t31);
    t33 = *((unsigned int *)t21);
    t34 = *((unsigned int *)t22);
    t37 = (t33 | t34);
    t38 = (~(t37));
    t39 = (t32 & t38);
    if (t39 != 0)
        goto LAB77;

LAB74:    if (t37 != 0)
        goto LAB76;

LAB75:    *((unsigned int *)t8) = 1;

LAB77:    t24 = (t8 + 4);
    t47 = *((unsigned int *)t24);
    t48 = (~(t47));
    t49 = *((unsigned int *)t8);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB78;

LAB79:
LAB80:    xsi_set_current_line(201, ng0);
    t2 = (t0 + 3744U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng19)));
    memset(t8, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t7);
    t17 = (t13 ^ t14);
    t18 = (t12 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t7);
    t30 = (t19 | t20);
    t31 = (~(t30));
    t32 = (t18 & t31);
    if (t32 != 0)
        goto LAB84;

LAB81:    if (t30 != 0)
        goto LAB83;

LAB82:    *((unsigned int *)t8) = 1;

LAB84:    t15 = (t8 + 4);
    t33 = *((unsigned int *)t15);
    t34 = (~(t33));
    t37 = *((unsigned int *)t8);
    t38 = (t37 & t34);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB85;

LAB86:
LAB87:    xsi_set_current_line(204, ng0);
    t2 = (t0 + 3104U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(0, 0, 1, ng28, 2, t0, (char)118, t3, 2);
    xsi_set_current_line(207, ng0);
    t2 = (t0 + 5424);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t8, 0, 8);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t7);
    t12 = (t10 | t11);
    if (t12 != 4095U)
        goto LAB89;

LAB88:    if (*((unsigned int *)t7) == 0)
        goto LAB90;

LAB91:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;

LAB89:    t15 = (t8 + 4);
    t13 = *((unsigned int *)t15);
    t14 = (~(t13));
    t17 = *((unsigned int *)t8);
    t18 = (t17 & t14);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB92;

LAB93:
LAB94:    goto LAB72;

LAB76:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB77;

LAB78:    xsi_set_current_line(199, ng0);
    xsi_vlogfile_write(0, 0, 1, ng26, 1, t0);
    goto LAB80;

LAB83:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB84;

LAB85:    xsi_set_current_line(202, ng0);
    xsi_vlogfile_write(0, 0, 1, ng27, 1, t0);
    goto LAB87;

LAB90:    *((unsigned int *)t8) = 1;
    goto LAB89;

LAB92:    xsi_set_current_line(208, ng0);
    xsi_vlogfile_write(0, 0, 1, ng29, 1, t0);
    goto LAB94;

LAB97:    *((unsigned int *)t8) = 1;
    goto LAB96;

LAB99:    xsi_set_current_line(213, ng0);

LAB102:    xsi_set_current_line(214, ng0);
    t16 = ((char*)((ng25)));
    t21 = (t0 + 5904);
    xsi_vlogvar_wait_assign_value(t21, t16, 0, 0, 32, 0LL);
    goto LAB101;

LAB104:    *((unsigned int *)t25) = 1;
    goto LAB107;

LAB106:    t41 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB107;

LAB108:    t44 = ((char*)((ng33)));
    goto LAB109;

LAB110:    t46 = ((char*)((ng34)));
    goto LAB111;

LAB112:    xsi_vlog_unsigned_bit_combine(t127, 48, t44, 48, t46, 48);
    goto LAB116;

LAB114:    memcpy(t127, t44, 16);
    goto LAB116;

}


extern void tester_m_00000000000255236774_2613777659_init()
{
	static char *pe[] = {(void *)Initial_28_0,(void *)Initial_120_1,(void *)Always_127_2,(void *)Cont_129_3,(void *)Cont_130_4,(void *)Cont_133_5,(void *)Cont_136_6,(void *)Cont_139_7,(void *)Cont_142_8,(void *)Cont_145_9,(void *)Cont_148_10,(void *)Cont_151_11,(void *)Always_153_12};
	xsi_register_didat("tester_m_00000000000255236774_2613777659", "isim/tester.exe.sim/tester/m_00000000000255236774_2613777659.didat");
	xsi_register_executes(pe);
}
