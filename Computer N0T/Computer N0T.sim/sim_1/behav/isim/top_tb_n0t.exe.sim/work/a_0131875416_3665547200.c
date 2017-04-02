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
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1605435078_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_2507238156_503743352(char *, unsigned char , unsigned char );


static void work_a_0131875416_3665547200_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 5096);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    t4 = (t0 + 1192U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 5224);
    t10 = (t4 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t9;
    xsi_driver_first_trans_delta(t4, 1U, 1, 0LL);
    t2 = (t0 + 1352U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 5224);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t1;
    xsi_driver_first_trans_delta(t2, 0U, 1, 0LL);
    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}

static void work_a_0131875416_3665547200_p_1(char *t0)
{
    char t15[16];
    char t17[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    unsigned char t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    t2 = (t0 + 1952U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 5112);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    t4 = (t0 + 2152U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 2312U);
    t10 = *((char **)t4);
    t11 = (10 - 10);
    t12 = (t11 * 1U);
    t13 = (0 + t12);
    t4 = (t10 + t13);
    t16 = ((IEEE_P_2592010699) + 4024);
    t18 = (t17 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 10;
    t19 = (t18 + 4U);
    *((int *)t19) = 1;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (1 - 10);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t14 = xsi_base_array_concat(t14, t15, t16, (char)99, t9, (char)97, t4, t17, (char)101);
    t21 = (1U + 10U);
    t22 = (11U != t21);
    if (t22 == 1)
        goto LAB8;

LAB9:    t19 = (t0 + 5288);
    t23 = (t19 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t14, 11U);
    xsi_driver_first_trans_fast(t19);
    goto LAB3;

LAB5:    t4 = (t0 + 1992U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)2);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_size_not_matching(11U, t21, 0);
    goto LAB9;

}

static void work_a_0131875416_3665547200_p_2(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned char t15;
    unsigned char t16;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned char t23;
    char *t24;
    char *t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned char t30;
    unsigned char t31;
    char *t32;
    char *t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned char t38;
    unsigned char t39;
    char *t40;
    char *t41;
    int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned char t46;
    unsigned char t47;
    char *t48;
    char *t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned char t54;
    unsigned char t55;
    char *t56;
    char *t57;
    int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned char t62;
    unsigned char t63;
    char *t64;
    char *t65;
    int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned char t70;
    unsigned char t71;
    char *t72;
    char *t73;
    int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned char t78;
    unsigned char t79;
    char *t80;
    char *t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned char t86;
    unsigned char t87;
    unsigned char t88;
    unsigned char t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;

LAB0:
LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = (0 - 10);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t7);
    t9 = (t0 + 2312U);
    t10 = *((char **)t9);
    t11 = (10 - 10);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t9 = (t10 + t14);
    t15 = *((unsigned char *)t9);
    t16 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t8, t15);
    t17 = (t0 + 2312U);
    t18 = *((char **)t17);
    t19 = (9 - 10);
    t20 = (t19 * -1);
    t21 = (1U * t20);
    t22 = (0 + t21);
    t17 = (t18 + t22);
    t23 = *((unsigned char *)t17);
    t24 = (t0 + 2312U);
    t25 = *((char **)t24);
    t26 = (8 - 10);
    t27 = (t26 * -1);
    t28 = (1U * t27);
    t29 = (0 + t28);
    t24 = (t25 + t29);
    t30 = *((unsigned char *)t24);
    t31 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t23, t30);
    t32 = (t0 + 2312U);
    t33 = *((char **)t32);
    t34 = (7 - 10);
    t35 = (t34 * -1);
    t36 = (1U * t35);
    t37 = (0 + t36);
    t32 = (t33 + t37);
    t38 = *((unsigned char *)t32);
    t39 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t31, t38);
    t40 = (t0 + 2312U);
    t41 = *((char **)t40);
    t42 = (6 - 10);
    t43 = (t42 * -1);
    t44 = (1U * t43);
    t45 = (0 + t44);
    t40 = (t41 + t45);
    t46 = *((unsigned char *)t40);
    t47 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t39, t46);
    t48 = (t0 + 2312U);
    t49 = *((char **)t48);
    t50 = (5 - 10);
    t51 = (t50 * -1);
    t52 = (1U * t51);
    t53 = (0 + t52);
    t48 = (t49 + t53);
    t54 = *((unsigned char *)t48);
    t55 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t47, t54);
    t56 = (t0 + 2312U);
    t57 = *((char **)t56);
    t58 = (4 - 10);
    t59 = (t58 * -1);
    t60 = (1U * t59);
    t61 = (0 + t60);
    t56 = (t57 + t61);
    t62 = *((unsigned char *)t56);
    t63 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t55, t62);
    t64 = (t0 + 2312U);
    t65 = *((char **)t64);
    t66 = (3 - 10);
    t67 = (t66 * -1);
    t68 = (1U * t67);
    t69 = (0 + t68);
    t64 = (t65 + t69);
    t70 = *((unsigned char *)t64);
    t71 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t63, t70);
    t72 = (t0 + 2312U);
    t73 = *((char **)t72);
    t74 = (2 - 10);
    t75 = (t74 * -1);
    t76 = (1U * t75);
    t77 = (0 + t76);
    t72 = (t73 + t77);
    t78 = *((unsigned char *)t72);
    t79 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t71, t78);
    t80 = (t0 + 2312U);
    t81 = *((char **)t80);
    t82 = (1 - 10);
    t83 = (t82 * -1);
    t84 = (1U * t83);
    t85 = (0 + t84);
    t80 = (t81 + t85);
    t86 = *((unsigned char *)t80);
    t87 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t79, t86);
    t88 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t16, t87);
    t89 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t88);
    t90 = (t0 + 5352);
    t91 = (t90 + 56U);
    t92 = *((char **)t91);
    t93 = (t92 + 56U);
    t94 = *((char **)t93);
    *((unsigned char *)t94) = t89;
    xsi_driver_first_trans_fast(t90);

LAB2:    t95 = (t0 + 5128);
    *((int *)t95) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0131875416_3665547200_p_3(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    int t15;
    int t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;

LAB0:    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 5144);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    t4 = (t0 + 1992U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 2632U);
    t4 = *((char **)t2);
    t15 = *((int *)t4);
    t16 = (50000000 / 18000);
    t1 = (t15 != t16);
    if (t1 != 0)
        goto LAB11;

LAB12:
LAB9:    t2 = (t0 + 2632U);
    t4 = *((char **)t2);
    t15 = *((int *)t4);
    t16 = (50000000 / 18000);
    t3 = (t15 == t16);
    if (t3 == 1)
        goto LAB16;

LAB17:    t1 = (unsigned char)0;

LAB18:    if (t1 != 0)
        goto LAB13;

LAB15:    t2 = (t0 + 5480);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);

LAB14:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    t4 = (t0 + 5416);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((int *)t14) = 0;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    t2 = (t0 + 2632U);
    t5 = *((char **)t2);
    t17 = *((int *)t5);
    t18 = (t17 + 1);
    t2 = (t0 + 5416);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((int *)t13) = t18;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB13:    t2 = (t0 + 5480);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    t2 = (t0 + 2312U);
    t4 = *((char **)t2);
    t19 = (10 - 8);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t2 = (t4 + t21);
    t5 = (t0 + 5544);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB14;

LAB16:    t2 = (t0 + 2472U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)2);
    t1 = t7;
    goto LAB18;

}


extern void work_a_0131875416_3665547200_init()
{
	static char *pe[] = {(void *)work_a_0131875416_3665547200_p_0,(void *)work_a_0131875416_3665547200_p_1,(void *)work_a_0131875416_3665547200_p_2,(void *)work_a_0131875416_3665547200_p_3};
	xsi_register_didat("work_a_0131875416_3665547200", "isim/top_tb_n0t.exe.sim/work/a_0131875416_3665547200.didat");
	xsi_register_executes(pe);
}
