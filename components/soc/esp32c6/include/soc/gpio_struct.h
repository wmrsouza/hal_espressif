// Copyright 2017-2018 Espressif Systems (Shanghai) PTE LTD
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
#ifndef _SOC_GPIO_STRUCT_H_
#define _SOC_GPIO_STRUCT_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "soc.h"

typedef volatile struct {
    uint32_t bt_select;
    uint32_t out;
    uint32_t out_w1ts;
    uint32_t out_w1tc;
    union {
        struct {
            uint32_t data                          :    18;  /*GPIO output register for GPIO32-49*/
            uint32_t reserved18                    :    14;  /*reserved*/
        };
        uint32_t val;
    } out1;
    union {
        struct {
            uint32_t out1_w1ts                     :    18;  /*GPIO output set register for GPIO32-49*/
            uint32_t reserved18                    :    14;  /*reserved*/
        };
        uint32_t val;
    } out1_w1ts;
    union {
        struct {
            uint32_t out1_w1tc                     :    18;  /*GPIO output clear register for GPIO32-49*/
            uint32_t reserved18                    :    14;  /*reserved*/
        };
        uint32_t val;
    } out1_w1tc;
    union {
        struct {
            uint32_t sel                           :    8;  /*GPIO sdio select register*/
            uint32_t reserved8                     :    24;  /*reserved*/
        };
        uint32_t val;
    } sdio_select;
    uint32_t enable;
    uint32_t enable_w1ts;
    uint32_t enable_w1tc;
    union {
        struct {
            uint32_t data                          :    18;  /*GPIO output enable register for GPIO32-49*/
            uint32_t reserved18                    :    14;  /*reserved*/
        };
        uint32_t val;
    } enable1;
    union {
        struct {
            uint32_t data                          :    18;  /*GPIO output enable set register for GPIO32-49*/
            uint32_t reserved18                    :    14;  /*reserved*/
        };
        uint32_t val;
    } enable1_w1ts;
    union {
        struct {
            uint32_t enable1_w1tc                  :    18;  /*GPIO output enable clear register for GPIO32-49*/
            uint32_t reserved18                    :    14;  /*reserved*/
        };
        uint32_t val;
    } enable1_w1tc;
    union {
        struct {
            uint32_t strapping                     :    16;  /*pad strapping register*/
            uint32_t reserved16                    :    16;  /*reserved*/
        };
        uint32_t val;
    } strap;
    uint32_t in;
    union {
        struct {
            uint32_t data                          :    18;  /*GPIO input register for GPIO32-49*/
            uint32_t reserved18                    :    14;  /*reserved*/
        };
        uint32_t val;
    } in1;
    uint32_t status;
    uint32_t status_w1ts;
    uint32_t status_w1tc;
    union {
        struct {
            uint32_t intr_st                       :    18;  /*GPIO interrupt status register for GPIO32-49*/
            uint32_t reserved18                    :    14;  /*reserved*/
        };
        uint32_t val;
    } status1;
    union {
        struct {
            uint32_t status1_w1ts                  :    18;  /*GPIO interrupt status set register for GPIO32-49*/
            uint32_t reserved18                    :    14;  /*reserved*/
        };
        uint32_t val;
    } status1_w1ts;
    union {
        struct {
            uint32_t status1_w1tc                  :    18;  /*GPIO interrupt status clear register for GPIO32-49*/
            uint32_t reserved18                    :    14;  /*reserved*/
        };
        uint32_t val;
    } status1_w1tc;
    uint32_t pcpu_int;
    uint32_t pcpu_nmi_int;
    uint32_t cpusdio_int;
    union {
        struct {
            uint32_t intr                          :    18;  /*GPIO PRO_CPU interrupt status register for GPIO32-49*/
            uint32_t reserved18                    :    14;  /*reserved*/
        };
        uint32_t val;
    } pcpu_int1;
    union {
        struct {
            uint32_t intr                          :    18;  /*GPIO PRO_CPU(not shielded) interrupt status register for GPIO32-49*/
            uint32_t reserved18                    :    14;  /*reserved*/
        };
        uint32_t val;
    } pcpu_nmi_int1;
    union {
        struct {
            uint32_t intr                          :    18;  /*GPIO CPUSDIO interrupt status register for GPIO32-49*/
            uint32_t reserved18                    :    14;  /*reserved*/
        };
        uint32_t val;
    } cpusdio_int1;
    union {
        struct {
            uint32_t pin_sync2_bypass                  :    2;  /*set GPIO input_sync2 signal mode. 0:disable. 1:trigger at negedge. 2or3:trigger at posedge.*/
            uint32_t pad_driver                        :    1;  /*set this bit to select pad driver. 1:open-drain. 0:normal.*/
            uint32_t sync1_bypass                      :    2;  /*set GPIO input_sync1 signal mode. 0:disable. 1:trigger at negedge. 2or3:trigger at posedge.*/
            uint32_t reserved5                         :    2;  /*reserved*/
            uint32_t int_type                          :    3;  /*set this value to choose interrupt mode. 0:disable GPIO interrupt. 1:trigger at posedge. 2:trigger at negedge. 3:trigger at any edge. 4:valid at low level. 5:valid at high level*/
            uint32_t wakeup_enable                     :    1;  /*set this bit to enable GPIO wakeup.(can only wakeup CPU from Light-sleep Mode)*/
            uint32_t pin_config                        :    2;  /*reserved*/
            uint32_t int_ena                           :    5;  /*set bit 13 to enable CPU interrupt. set bit 14 to enable CPU(not shielded) interrupt.*/
            uint32_t reserved18                        :    14;  /*reserved*/
        };
        uint32_t val;
    } pin[49];
    uint32_t reserved_13c;
    uint32_t reserved_140;
    uint32_t reserved_144;
    uint32_t reserved_148;
    uint32_t status_next;
    union {
        struct {
            uint32_t intr_st_next                  :    18;  /*GPIO interrupt source register for GPIO32-49*/
            uint32_t reserved18                    :    14;  /*reserved*/
        };
        uint32_t val;
    } status_next1;
    union {
        struct {
            uint32_t func_sel                      :    6;  /*set this value: s=0-49: connect GPIO[s] to this port. s=0x38: set this port always high level. s=0x3C: set this port always low level.*/
            uint32_t sig_in_inv_sel                :    1;  /*set this bit to invert input signal. 1:invert. 0:not invert.*/
            uint32_t sig_in_sel                    :    1;  /*set this bit to bypass GPIO. 1:do not bypass GPIO. 0:bypass GPIO.*/
            uint32_t reserved8                     :    24;  /*reserved*/
        };
        uint32_t val;
    } func_in_sel_cfg[127];
    uint32_t reserved_354;
    uint32_t reserved_358;
    uint32_t reserved_35c;
    uint32_t reserved_360;
    uint32_t reserved_364;
    uint32_t reserved_368;
    uint32_t reserved_36c;
    uint32_t reserved_370;
    uint32_t reserved_374;
    uint32_t reserved_378;
    uint32_t reserved_37c;
    uint32_t reserved_380;
    uint32_t reserved_384;
    uint32_t reserved_388;
    uint32_t reserved_38c;
    uint32_t reserved_390;
    uint32_t reserved_394;
    uint32_t reserved_398;
    uint32_t reserved_39c;
    uint32_t reserved_3a0;
    uint32_t reserved_3a4;
    uint32_t reserved_3a8;
    uint32_t reserved_3ac;
    uint32_t reserved_3b0;
    uint32_t reserved_3b4;
    uint32_t reserved_3b8;
    uint32_t reserved_3bc;
    uint32_t reserved_3c0;
    uint32_t reserved_3c4;
    uint32_t reserved_3c8;
    uint32_t reserved_3cc;
    uint32_t reserved_3d0;
    uint32_t reserved_3d4;
    uint32_t reserved_3d8;
    uint32_t reserved_3dc;
    uint32_t reserved_3e0;
    uint32_t reserved_3e4;
    uint32_t reserved_3e8;
    uint32_t reserved_3ec;
    uint32_t reserved_3f0;
    uint32_t reserved_3f4;
    uint32_t reserved_3f8;
    uint32_t reserved_3fc;
    uint32_t reserved_400;
    uint32_t reserved_404;
    uint32_t reserved_408;
    uint32_t reserved_40c;
    uint32_t reserved_410;
    uint32_t reserved_414;
    uint32_t reserved_418;
    uint32_t reserved_41c;
    uint32_t reserved_420;
    uint32_t reserved_424;
    uint32_t reserved_428;
    uint32_t reserved_42c;
    uint32_t reserved_430;
    uint32_t reserved_434;
    uint32_t reserved_438;
    uint32_t reserved_43c;
    uint32_t reserved_440;
    uint32_t reserved_444;
    uint32_t reserved_448;
    uint32_t reserved_44c;
    uint32_t reserved_450;
    uint32_t reserved_454;
    uint32_t reserved_458;
    uint32_t reserved_45c;
    uint32_t reserved_460;
    uint32_t reserved_464;
    uint32_t reserved_468;
    uint32_t reserved_46c;
    uint32_t reserved_470;
    uint32_t reserved_474;
    uint32_t reserved_478;
    uint32_t reserved_47c;
    uint32_t reserved_480;
    uint32_t reserved_484;
    uint32_t reserved_488;
    uint32_t reserved_48c;
    uint32_t reserved_490;
    uint32_t reserved_494;
    uint32_t reserved_498;
    uint32_t reserved_49c;
    uint32_t reserved_4a0;
    uint32_t reserved_4a4;
    uint32_t reserved_4a8;
    uint32_t reserved_4ac;
    uint32_t reserved_4b0;
    uint32_t reserved_4b4;
    uint32_t reserved_4b8;
    uint32_t reserved_4bc;
    uint32_t reserved_4c0;
    uint32_t reserved_4c4;
    uint32_t reserved_4c8;
    uint32_t reserved_4cc;
    uint32_t reserved_4d0;
    uint32_t reserved_4d4;
    uint32_t reserved_4d8;
    uint32_t reserved_4dc;
    uint32_t reserved_4e0;
    uint32_t reserved_4e4;
    uint32_t reserved_4e8;
    uint32_t reserved_4ec;
    uint32_t reserved_4f0;
    uint32_t reserved_4f4;
    uint32_t reserved_4f8;
    uint32_t reserved_4fc;
    uint32_t reserved_500;
    uint32_t reserved_504;
    uint32_t reserved_508;
    uint32_t reserved_50c;
    uint32_t reserved_510;
    uint32_t reserved_514;
    uint32_t reserved_518;
    uint32_t reserved_51c;
    uint32_t reserved_520;
    uint32_t reserved_524;
    uint32_t reserved_528;
    uint32_t reserved_52c;
    uint32_t reserved_530;
    uint32_t reserved_534;
    uint32_t reserved_538;
    uint32_t reserved_53c;
    uint32_t reserved_540;
    uint32_t reserved_544;
    uint32_t reserved_548;
    uint32_t reserved_54c;
    uint32_t reserved_550;
    union {
        struct {
            uint32_t func_sel                      :    9;  /*The value of the bits: 0<=s<=128. Set the value to select output signal. s=0-127: output of GPIO[n] equals input of peripheral[s]. s=128: output of GPIO[n] equals GPIO_OUT_REG[n]. */
            uint32_t func_out_inv_sel              :    1;  /*set this bit to invert output signal.1:invert.0:not invert.*/
            uint32_t oen_sel                       :    1;  /*set this bit to select output enable signal.1:use GPIO_ENABLE_REG[n] as output enable signal.0:use peripheral output enable signal.*/
            uint32_t oen_inv_sel                   :    1;  /*set this bit to invert output enable signal.1:invert.0:not invert.*/
            uint32_t reserved12                    :    20;  /*reserved*/
        };
        uint32_t val;
    } func_out_sel_cfg[49];
    uint32_t reserved_61c;
    uint32_t reserved_620;
    uint32_t reserved_624;
    uint32_t reserved_628;
    union {
        struct {
            uint32_t clk_en                        :    1;  /*set this bit to enable GPIO clock gate*/
            uint32_t reserved1                     :    31;  /*reserved*/
        };
        uint32_t val;
    } clock_gate;
    uint32_t reserved_630;
    uint32_t reserved_634;
    uint32_t reserved_638;
    uint32_t reserved_63c;
    uint32_t reserved_640;
    uint32_t reserved_644;
    uint32_t reserved_648;
    uint32_t reserved_64c;
    uint32_t reserved_650;
    uint32_t reserved_654;
    uint32_t reserved_658;
    uint32_t reserved_65c;
    uint32_t reserved_660;
    uint32_t reserved_664;
    uint32_t reserved_668;
    uint32_t reserved_66c;
    uint32_t reserved_670;
    uint32_t reserved_674;
    uint32_t reserved_678;
    uint32_t reserved_67c;
    uint32_t reserved_680;
    uint32_t reserved_684;
    uint32_t reserved_688;
    uint32_t reserved_68c;
    uint32_t reserved_690;
    uint32_t reserved_694;
    uint32_t reserved_698;
    uint32_t reserved_69c;
    uint32_t reserved_6a0;
    uint32_t reserved_6a4;
    uint32_t reserved_6a8;
    uint32_t reserved_6ac;
    uint32_t reserved_6b0;
    uint32_t reserved_6b4;
    uint32_t reserved_6b8;
    uint32_t reserved_6bc;
    uint32_t reserved_6c0;
    uint32_t reserved_6c4;
    uint32_t reserved_6c8;
    uint32_t reserved_6cc;
    uint32_t reserved_6d0;
    uint32_t reserved_6d4;
    uint32_t reserved_6d8;
    uint32_t reserved_6dc;
    uint32_t reserved_6e0;
    uint32_t reserved_6e4;
    uint32_t reserved_6e8;
    uint32_t reserved_6ec;
    uint32_t reserved_6f0;
    uint32_t reserved_6f4;
    uint32_t reserved_6f8;
    union {
        struct {
            uint32_t date                          :    28;  /*version register*/
            uint32_t reserved28                    :    4;  /*reserved*/
        };
        uint32_t val;
    } date;
} gpio_dev_t;
extern gpio_dev_t GPIO;
#ifdef __cplusplus
}
#endif



#endif /*_SOC_GPIO_STRUCT_H_ */