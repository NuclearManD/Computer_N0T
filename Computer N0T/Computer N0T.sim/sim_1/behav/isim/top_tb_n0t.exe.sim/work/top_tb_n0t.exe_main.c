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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_2592010699;
char *STD_STANDARD;
char *IEEE_P_3499444699;
char *IEEE_P_3620187407;
char *UNISIM_P_0947159679;
char *IEEE_P_1242562249;
char *WORK_P_0982324371;
char *STD_TEXTIO;
char *IEEE_P_3564397177;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    unisim_p_0947159679_init();
    ieee_p_1242562249_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    std_textio_init();
    ieee_p_3564397177_init();
    work_a_2974611363_1516540902_init();
    unisim_a_1222866846_4197503510_init();
    work_a_1280342829_3212880686_init();
    work_a_0032343433_3665547200_init();
    work_a_0131875416_3665547200_init();
    xilinxcorelib_a_4258712558_3212880686_init();
    xilinxcorelib_a_0299526704_3212880686_init();
    xilinxcorelib_a_0572027879_3212880686_init();
    work_a_1156261981_3330682609_init();
    work_a_4262980374_3212880686_init();
    work_a_0141943142_1922909208_init();
    work_a_0832606739_3212880686_init();
    work_a_3291338526_3212880686_init();
    work_p_0982324371_init();
    xilinxcorelib_a_0006774673_3212880686_init();
    xilinxcorelib_a_3515213324_3212880686_init();
    xilinxcorelib_a_4068296027_3212880686_init();
    work_a_3437604476_4164189818_init();
    work_a_0198830370_3212880686_init();
    work_a_3059077005_3212880686_init();
    work_a_3142303690_3212880686_init();
    work_a_3789895987_3212880686_init();
    work_a_3959351695_1782271143_init();
    work_a_0564119469_3212880686_init();
    work_a_3225011129_2933281589_init();
    work_a_0954196578_2372691052_init();


    xsi_register_tops("work_a_0954196578_2372691052");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    UNISIM_P_0947159679 = xsi_get_engine_memory("unisim_p_0947159679");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    WORK_P_0982324371 = xsi_get_engine_memory("work_p_0982324371");
    STD_TEXTIO = xsi_get_engine_memory("std_textio");
    IEEE_P_3564397177 = xsi_get_engine_memory("ieee_p_3564397177");

    return xsi_run_simulation(argc, argv);

}
