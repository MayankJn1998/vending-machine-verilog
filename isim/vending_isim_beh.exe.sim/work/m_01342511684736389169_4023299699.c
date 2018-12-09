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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/xilinx_vm_common_folder/vending_machine/vending.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {5U, 0U};
static unsigned int ng3[] = {10U, 0U};
static unsigned int ng4[] = {20U, 0U};
static const char *ng5 = "this amout is not accepted";
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {7U, 0U};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {23U, 0U};
static const char *ng11 = "Add more money to get your product";



static void Initial_45_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(46, ng0);

LAB2:    xsi_set_current_line(47, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2720);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2560);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(49, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3040);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);

LAB1:    return;
}

static void Always_52_1(char *t0)
{
    char t13[8];
    char t26[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;

LAB0:    t1 = (t0 + 4360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 4680);
    *((int *)t2) = 1;
    t3 = (t0 + 4392);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(53, ng0);

LAB5:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 2000U);
    t5 = *((char **)t4);
    t4 = (t0 + 3040);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 8);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2160U);
    t3 = *((char **)t2);
    t2 = (t0 + 3200);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 3040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 8, t5, 8);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    xsi_set_current_line(60, ng0);

LAB19:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3040);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 2560);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 8);
    xsi_set_current_line(60, ng0);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);

LAB15:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3200);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB20:    t7 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t7, 3);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB27;

LAB28:
LAB30:
LAB29:    xsi_set_current_line(95, ng0);

LAB63:    xsi_set_current_line(95, ng0);
    xsi_vlogfile_write(1, 0, 0, ng11, 1, t0);

LAB31:    goto LAB2;

LAB7:    xsi_set_current_line(57, ng0);

LAB16:    xsi_set_current_line(57, ng0);
    t7 = (t0 + 2880);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 3040);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 8, t9, 8, t12, 8);
    t14 = (t0 + 2880);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 8);
    goto LAB15;

LAB9:    xsi_set_current_line(58, ng0);

LAB17:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 2880);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 3040);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 8, t7, 8, t10, 8);
    t11 = (t0 + 2880);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 8);
    goto LAB15;

LAB11:    xsi_set_current_line(59, ng0);

LAB18:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 2880);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 3040);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 8, t7, 8, t10, 8);
    t11 = (t0 + 2880);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 8);
    goto LAB15;

LAB21:    xsi_set_current_line(64, ng0);

LAB32:    xsi_set_current_line(65, ng0);
    t8 = (t0 + 2880);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t12 = (t10 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB34;

LAB33:    t14 = (t11 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB34;

LAB37:    if (*((unsigned int *)t10) > *((unsigned int *)t11))
        goto LAB35;

LAB36:    t16 = (t13 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (~(t17));
    t19 = *((unsigned int *)t13);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB38;

LAB39:
LAB40:    goto LAB31;

LAB23:    xsi_set_current_line(73, ng0);

LAB42:    xsi_set_current_line(74, ng0);
    t3 = (t0 + 2880);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t10 = (t8 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB44;

LAB43:    t11 = (t9 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB44;

LAB47:    if (*((unsigned int *)t8) > *((unsigned int *)t9))
        goto LAB45;

LAB46:    t14 = (t13 + 4);
    t17 = *((unsigned int *)t14);
    t18 = (~(t17));
    t19 = *((unsigned int *)t13);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB48;

LAB49:
LAB50:    goto LAB31;

LAB25:    xsi_set_current_line(82, ng0);

LAB52:    xsi_set_current_line(83, ng0);
    t3 = (t0 + 2880);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t10 = (t8 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB54;

LAB53:    t11 = (t9 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB54;

LAB57:    if (*((unsigned int *)t8) > *((unsigned int *)t9))
        goto LAB55;

LAB56:    t14 = (t13 + 4);
    t17 = *((unsigned int *)t14);
    t18 = (~(t17));
    t19 = *((unsigned int *)t13);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB58;

LAB59:
LAB60:    goto LAB31;

LAB27:    xsi_set_current_line(91, ng0);

LAB62:    xsi_set_current_line(92, ng0);
    t3 = (t0 + 2880);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 2560);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 8);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB31;

LAB34:    t15 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB36;

LAB35:    *((unsigned int *)t13) = 1;
    goto LAB36;

LAB38:    xsi_set_current_line(66, ng0);

LAB41:    xsi_set_current_line(67, ng0);
    t22 = (t0 + 2880);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng4)));
    memset(t26, 0, 8);
    xsi_vlog_unsigned_minus(t26, 8, t24, 8, t25, 5);
    t27 = (t0 + 2880);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 8);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2880);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = (t0 + 2560);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 8);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2720);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB40;

LAB44:    t12 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB46;

LAB45:    *((unsigned int *)t13) = 1;
    goto LAB46;

LAB48:    xsi_set_current_line(75, ng0);

LAB51:    xsi_set_current_line(76, ng0);
    t15 = (t0 + 2880);
    t16 = (t15 + 56U);
    t22 = *((char **)t16);
    t23 = ((char*)((ng8)));
    memset(t26, 0, 8);
    xsi_vlog_unsigned_minus(t26, 8, t22, 8, t23, 5);
    t24 = (t0 + 2880);
    xsi_vlogvar_assign_value(t24, t26, 0, 0, 8);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2880);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = (t0 + 2560);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 8);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2720);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB50;

LAB54:    t12 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB56;

LAB55:    *((unsigned int *)t13) = 1;
    goto LAB56;

LAB58:    xsi_set_current_line(84, ng0);

LAB61:    xsi_set_current_line(85, ng0);
    t15 = (t0 + 2880);
    t16 = (t15 + 56U);
    t22 = *((char **)t16);
    t23 = ((char*)((ng10)));
    memset(t26, 0, 8);
    xsi_vlog_unsigned_minus(t26, 8, t22, 8, t23, 5);
    t24 = (t0 + 2880);
    xsi_vlogvar_assign_value(t24, t26, 0, 0, 8);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 2880);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = (t0 + 2560);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 8);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2720);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB60;

}


extern void work_m_01342511684736389169_4023299699_init()
{
	static char *pe[] = {(void *)Initial_45_0,(void *)Always_52_1};
	xsi_register_didat("work_m_01342511684736389169_4023299699", "isim/vending_isim_beh.exe.sim/work/m_01342511684736389169_4023299699.didat");
	xsi_register_executes(pe);
}
