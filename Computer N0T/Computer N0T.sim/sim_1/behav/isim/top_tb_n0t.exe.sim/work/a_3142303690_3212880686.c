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
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1919365254_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_3142303690_3212880686_p_0(char *t0)
{
    char t16[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned char t15;
    unsigned int t17;
    unsigned char t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1152U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 6328);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    t1 = xsi_get_transient_memory(2U);
    memset(t1, 0, 2U);
    t5 = t1;
    memset(t5, (unsigned char)3, 2U);
    t6 = (t0 + 6520);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 2U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    t2 = (t0 + 2312U);
    t5 = *((char **)t2);
    t11 = (0 - 1);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t2 = (t5 + t14);
    t4 = *((unsigned char *)t2);
    t6 = (t0 + 1512U);
    t7 = *((char **)t6);
    t15 = *((unsigned char *)t7);
    t8 = ((IEEE_P_2592010699) + 4024);
    t6 = xsi_base_array_concat(t6, t16, t8, (char)99, t4, (char)99, t15, (char)101);
    t17 = (1U + 1U);
    t18 = (2U != t17);
    if (t18 == 1)
        goto LAB7;

LAB8:    t9 = (t0 + 6520);
    t10 = (t9 + 56U);
    t19 = *((char **)t10);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t6, 2U);
    xsi_driver_first_trans_fast(t9);
    goto LAB3;

LAB7:    xsi_size_not_matching(2U, t17, 0);
    goto LAB8;

}

static void work_a_3142303690_3212880686_p_1(char *t0)
{
    char t21[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned char t19;
    unsigned char t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1152U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 6344);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t5 = t1;
    memset(t5, (unsigned char)2, 4U);
    t6 = (t0 + 6584);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t11 = (t4 == (unsigned char)3);
    if (t11 != 0)
        goto LAB7;

LAB9:
LAB8:    goto LAB3;

LAB7:    t2 = (t0 + 2792U);
    t6 = *((char **)t2);
    t13 = *((unsigned char *)t6);
    t14 = (t13 == (unsigned char)3);
    if (t14 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 2312U);
    t7 = *((char **)t2);
    t15 = (1 - 1);
    t16 = (t15 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t2 = (t7 + t18);
    t19 = *((unsigned char *)t2);
    t20 = (t19 == (unsigned char)2);
    t12 = t20;

LAB15:    if (t12 != 0)
        goto LAB10;

LAB12:    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)2, 4U);
    t5 = (t0 + 6584);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);

LAB11:    goto LAB8;

LAB10:    t8 = (t0 + 2472U);
    t9 = *((char **)t8);
    t8 = (t0 + 9940U);
    t10 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t21, t9, t8, 1);
    t22 = (t0 + 6584);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t10, 4U);
    xsi_driver_first_trans_fast(t22);
    goto LAB11;

LAB13:    t12 = (unsigned char)1;
    goto LAB15;

}

static void work_a_3142303690_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1152U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 6360);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    t1 = (t0 + 6648);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    t2 = (t0 + 2792U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)2);
    if (t10 == 1)
        goto LAB10;

LAB11:    t4 = (unsigned char)0;

LAB12:    if (t4 != 0)
        goto LAB7;

LAB9:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t9 = *((unsigned char *)t2);
    t10 = (t9 == (unsigned char)3);
    if (t10 == 1)
        goto LAB18;

LAB19:    t4 = (unsigned char)0;

LAB20:    if (t4 == 1)
        goto LAB15;

LAB16:    t3 = (unsigned char)0;

LAB17:    if (t3 != 0)
        goto LAB13;

LAB14:
LAB8:    goto LAB3;

LAB7:    t2 = (t0 + 6648);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t13 = (t8 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB8;

LAB10:    t2 = (t0 + 2152U);
    t6 = *((char **)t2);
    t11 = *((unsigned char *)t6);
    t12 = (t11 == (unsigned char)3);
    t4 = t12;
    goto LAB12;

LAB13:    t13 = (t0 + 6648);
    t17 = (t13 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)2;
    xsi_driver_first_trans_fast(t13);
    goto LAB8;

LAB15:    t13 = (t0 + 2152U);
    t14 = *((char **)t13);
    t12 = *((unsigned char *)t14);
    t16 = (t12 == (unsigned char)3);
    t3 = t16;
    goto LAB17;

LAB18:    t1 = (t0 + 2952U);
    t5 = *((char **)t1);
    t1 = (t0 + 10041);
    t11 = 1;
    if (4U == 4U)
        goto LAB21;

LAB22:    t11 = 0;

LAB23:    t4 = t11;
    goto LAB20;

LAB21:    t15 = 0;

LAB24:    if (t15 < 4U)
        goto LAB25;
    else
        goto LAB23;

LAB25:    t7 = (t5 + t15);
    t8 = (t1 + t15);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB22;

LAB26:    t15 = (t15 + 1);
    goto LAB24;

}

static void work_a_3142303690_3212880686_p_3(char *t0)
{
    char t15[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t16;

LAB0:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1152U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 6376);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t5 = t1;
    memset(t5, (unsigned char)2, 4U);
    t6 = (t0 + 6712);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    t2 = (t0 + 2792U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t11 = (t4 == (unsigned char)2);
    if (t11 != 0)
        goto LAB7;

LAB9:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t11 = (t4 == (unsigned char)3);
    if (t11 == 1)
        goto LAB12;

LAB13:    t3 = (unsigned char)0;

LAB14:    if (t3 != 0)
        goto LAB10;

LAB11:
LAB8:    goto LAB3;

LAB7:    t2 = xsi_get_transient_memory(4U);
    memset(t2, 0, 4U);
    t6 = t2;
    memset(t6, (unsigned char)2, 4U);
    t7 = (t0 + 6712);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    memcpy(t12, t2, 4U);
    xsi_driver_first_trans_fast(t7);
    goto LAB8;

LAB10:    t1 = (t0 + 2952U);
    t6 = *((char **)t1);
    t1 = (t0 + 9972U);
    t7 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t15, t6, t1, 1);
    t8 = (t0 + 6712);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t12 = (t10 + 56U);
    t16 = *((char **)t12);
    memcpy(t16, t7, 4U);
    xsi_driver_first_trans_fast(t8);
    goto LAB8;

LAB12:    t1 = (t0 + 2152U);
    t5 = *((char **)t1);
    t13 = *((unsigned char *)t5);
    t14 = (t13 == (unsigned char)3);
    t3 = t14;
    goto LAB14;

}

static void work_a_3142303690_3212880686_p_4(char *t0)
{
    char t23[16];
    char t25[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned char t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t24;
    char *t26;
    char *t27;
    int t28;
    unsigned int t29;
    unsigned char t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;

LAB0:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1152U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 6392);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t5 = t1;
    memset(t5, (unsigned char)2, 8U);
    t6 = (t0 + 6776);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    t2 = (t0 + 2792U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB10;

LAB11:    t4 = (unsigned char)0;

LAB12:    if (t4 != 0)
        goto LAB7;

LAB9:
LAB8:    goto LAB3;

LAB7:    t2 = (t0 + 2312U);
    t7 = *((char **)t2);
    t15 = (1 - 1);
    t16 = (t15 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t2 = (t7 + t18);
    t19 = *((unsigned char *)t2);
    t8 = (t0 + 3112U);
    t9 = *((char **)t8);
    t20 = (7 - 7);
    t21 = (t20 * 1U);
    t22 = (0 + t21);
    t8 = (t9 + t22);
    t24 = ((IEEE_P_2592010699) + 4024);
    t26 = (t25 + 0U);
    t27 = (t26 + 0U);
    *((int *)t27) = 7;
    t27 = (t26 + 4U);
    *((int *)t27) = 1;
    t27 = (t26 + 8U);
    *((int *)t27) = -1;
    t28 = (1 - 7);
    t29 = (t28 * -1);
    t29 = (t29 + 1);
    t27 = (t26 + 12U);
    *((unsigned int *)t27) = t29;
    t10 = xsi_base_array_concat(t10, t23, t24, (char)99, t19, (char)97, t8, t25, (char)101);
    t29 = (1U + 7U);
    t30 = (8U != t29);
    if (t30 == 1)
        goto LAB13;

LAB14:    t27 = (t0 + 6776);
    t31 = (t27 + 56U);
    t32 = *((char **)t31);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    memcpy(t34, t10, 8U);
    xsi_driver_first_trans_fast(t27);
    goto LAB8;

LAB10:    t2 = (t0 + 2152U);
    t6 = *((char **)t2);
    t13 = *((unsigned char *)t6);
    t14 = (t13 == (unsigned char)3);
    t4 = t14;
    goto LAB12;

LAB13:    xsi_size_not_matching(8U, t29, 0);
    goto LAB14;

}

static void work_a_3142303690_3212880686_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned int t15;
    char *t16;
    unsigned char t17;
    unsigned char t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1152U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 6408);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t5 = t1;
    memset(t5, (unsigned char)2, 8U);
    t6 = (t0 + 6840);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast_port(t6);
    t1 = (t0 + 6904);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB5:    t2 = (t0 + 2792U);
    t5 = *((char **)t2);
    t12 = *((unsigned char *)t5);
    t13 = (t12 == (unsigned char)3);
    if (t13 == 1)
        goto LAB13;

LAB14:    t11 = (unsigned char)0;

LAB15:    if (t11 == 1)
        goto LAB10;

LAB11:    t4 = (unsigned char)0;

LAB12:    if (t4 != 0)
        goto LAB7;

LAB9:    t1 = (t0 + 6904);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB8:    goto LAB3;

LAB7:    t10 = (t0 + 3112U);
    t19 = *((char **)t10);
    t10 = (t0 + 6840);
    t20 = (t10 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t19, 8U);
    xsi_driver_first_trans_fast_port(t10);
    t1 = (t0 + 6904);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB8;

LAB10:    t10 = (t0 + 1992U);
    t16 = *((char **)t10);
    t17 = *((unsigned char *)t16);
    t18 = (t17 == (unsigned char)3);
    t4 = t18;
    goto LAB12;

LAB13:    t2 = (t0 + 2952U);
    t6 = *((char **)t2);
    t2 = (t0 + 10045);
    t14 = 1;
    if (4U == 4U)
        goto LAB16;

LAB17:    t14 = 0;

LAB18:    t11 = t14;
    goto LAB15;

LAB16:    t15 = 0;

LAB19:    if (t15 < 4U)
        goto LAB20;
    else
        goto LAB18;

LAB20:    t8 = (t6 + t15);
    t9 = (t2 + t15);
    if (*((unsigned char *)t8) != *((unsigned char *)t9))
        goto LAB17;

LAB21:    t15 = (t15 + 1);
    goto LAB19;

}

static void work_a_3142303690_3212880686_p_6(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    t2 = (t0 + 2472U);
    t3 = *((char **)t2);
    t2 = (t0 + 10049);
    t5 = 1;
    if (4U == 4U)
        goto LAB8;

LAB9:    t5 = 0;

LAB10:    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB14:    t17 = (t0 + 6968);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)2;
    xsi_driver_first_trans_fast(t17);

LAB2:    t22 = (t0 + 6424);
    *((int *)t22) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 6968);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB5:    t9 = (t0 + 1352U);
    t10 = *((char **)t9);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)3);
    t1 = t12;
    goto LAB7;

LAB8:    t6 = 0;

LAB11:    if (t6 < 4U)
        goto LAB12;
    else
        goto LAB10;

LAB12:    t7 = (t3 + t6);
    t8 = (t2 + t6);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB9;

LAB13:    t6 = (t6 + 1);
    goto LAB11;

LAB15:    goto LAB2;

}

static void work_a_3142303690_3212880686_p_7(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    t2 = (t0 + 2472U);
    t3 = *((char **)t2);
    t2 = (t0 + 10053);
    t5 = 1;
    if (4U == 4U)
        goto LAB8;

LAB9:    t5 = 0;

LAB10:    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB14:    t17 = (t0 + 7032);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)2;
    xsi_driver_first_trans_fast(t17);

LAB2:    t22 = (t0 + 6440);
    *((int *)t22) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 7032);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB5:    t9 = (t0 + 1352U);
    t10 = *((char **)t9);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)3);
    t1 = t12;
    goto LAB7;

LAB8:    t6 = 0;

LAB11:    if (t6 < 4U)
        goto LAB12;
    else
        goto LAB10;

LAB12:    t7 = (t3 + t6);
    t8 = (t2 + t6);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB9;

LAB13:    t6 = (t6 + 1);
    goto LAB11;

LAB15:    goto LAB2;

}


extern void work_a_3142303690_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3142303690_3212880686_p_0,(void *)work_a_3142303690_3212880686_p_1,(void *)work_a_3142303690_3212880686_p_2,(void *)work_a_3142303690_3212880686_p_3,(void *)work_a_3142303690_3212880686_p_4,(void *)work_a_3142303690_3212880686_p_5,(void *)work_a_3142303690_3212880686_p_6,(void *)work_a_3142303690_3212880686_p_7};
	xsi_register_didat("work_a_3142303690_3212880686", "isim/top_tb_n0t.exe.sim/work/a_3142303690_3212880686.didat");
	xsi_register_executes(pe);
}
