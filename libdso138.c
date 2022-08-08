#include <stdint.h>
#include "libdso138.h"
#include "Common.h"
#include "Screen.h"

int32_t SetWindow1(int16_t arg1, int16_t arg2, int16_t arg3, int16_t arg4) {
    write_comm(0x2a);
    write_data((((((uint32_t)arg1) >> 8) << 0x10) >> 0x10));
    write_data(((uint32_t)arg1));
    write_data((((((uint32_t)(((int16_t)(((((uint32_t)arg1) + ((uint32_t)arg2)) << 0x10) >> 0x10)) - 1)) >> 8) << 0x10) >> 0x10));
    write_data(((uint32_t)(((int16_t)(((((uint32_t)arg1) + ((uint32_t)arg2)) << 0x10) >> 0x10)) - 1)));
    write_comm(0x2b);
    write_data((((((uint32_t)arg3) >> 8) << 0x10) >> 0x10));
    write_data(((uint32_t)arg3));
    write_data((((((uint32_t)(((int16_t)(((((uint32_t)arg3) + ((uint32_t)arg4)) << 0x10) >> 0x10)) - 1)) >> 8) << 0x10) >> 0x10));
    write_data(((uint32_t)(((int16_t)(((((uint32_t)arg3) + ((uint32_t)arg4)) << 0x10) >> 0x10)) - 1)));
    int32_t lr;
    return lr;
}

int32_t PutcGenic1(int16_t arg1, int16_t arg2, char arg3, int16_t arg4, int16_t arg5, int32_t* arg6) {
    uint16_t GoodStart;
    void* r2_1 = *(int32_t*)arg6;
    uint32_t r1_2 = (((uint32_t)arg3) - ((uint32_t)arg6[2]));
    int32_t r3_5 = (((uint32_t)arg6[1]) + 7);
    if (r3_5 < 0)
    {
        r3_5 = (r3_5 + 7);
    }
    r3_5 = (r3_5 >> 3);
    char* var_18 = ((char*)r2_1 + (((uint32_t)*(int8_t*)((char*)arg6 + 5)) * (r1_2 * r3_5)));
    nullptr(arg1, ((uint16_t)arg6[1]), ((uint32_t)arg2), ((uint32_t)*(int8_t*)((char*)arg6 + 5)));
    *(int32_t*)0x40011014 = 0x2000;
    *(int32_t*)0x40011014 = 0x4000;
    *(int32_t*)0x40010c0c = ((0xff00 & *(int32_t*)0x40010c0c) | 0x2c);
    *(int32_t*)0x40011014 = 0x8000;
    *(int32_t*)0x40011010 = 0x8000;
    *(int32_t*)0x40011010 = 0x4000;
    GoodStart = 0xec4a;
    int32_t r3_15 = (((uint32_t)*(int8_t*)((char*)arg6 + 5)) * ((uint32_t)arg6[1]));
    if (r3_15 < 0)
    {
        r3_15 = (r3_15 + 7);
    }
    r3_15 = (r3_15 >> 3);
    int16_t var_14 = r3_15;
    while (((uint32_t)var_14) != 0)
    {
        uint8_t var_11_1 = *(int8_t*)var_18;
        char var_12_1 = 8;
        while (((uint32_t)var_12_1) != 0)
        {
            int16_t r3_19;
            if (((((uint32_t)var_11_1) << 0x18) >> 0x18) >= 0)
            {
                r3_19 = arg5;
            }
            else
            {
                r3_19 = arg4;
            }
            *(int32_t*)0x40010c0c = ((((((uint32_t)r3_19) >> 8) << 0x10) >> 0x10) | (*(int32_t*)0x40010c0c & 0xff00));
            *(int32_t*)0x40011014 = 0x8000;
            *(int32_t*)0x40011010 = 0x8000;
            *(int32_t*)0x40010c0c = (((uint32_t)r3_19) | (*(int32_t*)0x40010c0c & 0xff00));
            *(int32_t*)0x40011014 = 0x8000;
            *(int32_t*)0x40011010 = 0x8000;
            var_11_1 = ((int8_t)(((uint32_t)var_11_1) << 1));
            var_12_1 = (var_12_1 - 1);
        }
        var_18 = &var_18[1];
        var_14 = (var_14 - 1);
    }
    *(int32_t*)0x40011010 = 0x2000;
    int32_t lr;
    return lr;
}

int32_t DrawRect(int16_t arg1, int16_t arg2, int16_t arg3, int16_t arg4, int16_t arg5) {
    FillRect(((int32_t)arg1), ((int32_t)arg2), (((((((((uint32_t)arg3) - 1) << 0x10) >> 0x10) << 0x10) >> 0x10) << 0x10) >> 0x10), 1, ((uint32_t)arg5));
    FillRect(((int32_t)arg1), ((((((((((((uint32_t)arg2) + ((uint32_t)arg4)) << 0x10) >> 0x10) - 1) << 0x10) >> 0x10) << 0x10) >> 0x10) << 0x10) >> 0x10), ((int32_t)arg3), 1, ((uint32_t)arg5));
    FillRect(((int32_t)arg1), ((int32_t)arg2), 1, (((((((((uint32_t)arg4) - 1) << 0x10) >> 0x10) << 0x10) >> 0x10) << 0x10) >> 0x10), ((uint32_t)arg5));
    FillRect(((((((((((((uint32_t)arg1) + ((uint32_t)arg3)) << 0x10) >> 0x10) - 1) << 0x10) >> 0x10) << 0x10) >> 0x10) << 0x10) >> 0x10), ((int32_t)arg2), 1, (((((((((uint32_t)arg4) - 1) << 0x10) >> 0x10) << 0x10) >> 0x10) << 0x10) >> 0x10), ((uint32_t)arg5));
    int32_t lr;
    return lr;
}

int32_t TIM1_Init() {
    *(int32_t*)0x40012c00 = 0x80;
    *(int32_t*)0x40012c04 = 0;
    *(int32_t*)0x40012c08 = 0x17;
    *(int32_t*)0x40012c0c = 0;
    *(int32_t*)0x40012c10 = 0;
    *(int32_t*)0x40012c14 = 0;
    *(int32_t*)0x40012c18 = 0x3001;
    *(int32_t*)0x40012c1c = 0;
    *(int32_t*)0x40012c20 = 0x11;
    *(int32_t*)0x40012c24 = 0;
    *(int32_t*)0x40012c28 = 0;
    *(int32_t*)0x40012c2c = 0xffff;
    *(int32_t*)0x40012c34 = 0x1388;
    *(int32_t*)0x40012c38 = 2;
    *(int32_t*)0x40012c3c = 0;
    *(int32_t*)0x40012c40 = 0;
    *(int32_t*)0x40012c48 = 0;
    *(int32_t*)0x40012c4c = 0;
    *(int32_t*)0x40012c00 = 0x81;
    int32_t lr;
    return lr;
}

int32_t TIM2_Init() {
    *(int32_t*)0x40000000 = 0x80;
    *(int32_t*)0x40000004 = 0x50;
    *(int32_t*)0x40000008 = 0;
    *(int32_t*)0x4000000c = 0;
    *(int32_t*)0x40000010 = 0;
    *(int32_t*)0x40000014 = 0;
    *(int32_t*)0x40000018 = 0x6000;
    *(int32_t*)0x4000001c = 0;
    *(int32_t*)0x40000020 = 0x10;
    *(int32_t*)0x40000024 = 0;
    *(int32_t*)0x40000028 = 8;
    *(int32_t*)0x4000002c = 9;
    *(int32_t*)0x40000034 = 0x1388;
    *(int32_t*)0x40000038 = 5;
    *(int32_t*)0x4000003c = 0;
    *(int32_t*)0x40000040 = 0;
    *(int32_t*)0x40000048 = 0;
    *(int32_t*)0x4000004c = 0;
    *(int32_t*)0x40000000 = 0x80;
    int32_t lr;
    return lr;
}

int32_t ADC1_Init() {
    *(int32_t*)0x40012400 = 0;
    *(int32_t*)0x40012404 = 0;
    *(int32_t*)0x40012408 = 0x160100;
    *(int32_t*)0x4001240c = 0;
    *(int32_t*)0x40012410 = 0;
    *(int32_t*)0x40012414 = 0;
    *(int32_t*)0x40012418 = 0;
    *(int32_t*)0x4001241c = 0;
    *(int32_t*)0x40012420 = 0;
    *(int32_t*)0x40012424 = 0xfff;
    *(int32_t*)0x40012428 = 0;
    *(int32_t*)0x4001242c = 0;
    *(int32_t*)0x40012430 = 0;
    *(int32_t*)0x40012434 = 0;
    *(int32_t*)0x40012438 = 0;
    *(int32_t*)0x40012408 = (*(int32_t*)0x40012408 | 4);
    while ((4 & *(int32_t*)0x40012408) == 0)
    {
        /* nop */
    }
    *(int32_t*)0x40012408 = (*(int32_t*)0x40012408 | 1);
    int32_t lr;
    return lr;
}

int32_t DMA1_CH1_Init(int32_t arg1, int32_t arg2, int32_t arg3) {
    DMA_DeInit(0x40020008, arg2, arg3, 0x40020008);
    *(int32_t*)0x4002000c = 0x801c;
    *(int32_t*)0x40020010 = 0x4001244c;
    *(int32_t*)0x40020014 = 0;
    *(int32_t*)0x40020008 = 0x25a5;
    int32_t lr;
    return lr;
}

int32_t NVIC_Configuration_lib(int32_t arg1, int32_t arg2) {
    char var_c = 0x1b;
    char var_b = 0;
    char var_a = 0;
    char var_9 = 0;
    var_c = 0x12;
    char var_b_1 = 0;
    char var_a_1 = 0;
    char var_9_1 = 0;
    var_c = 0xb;
    char var_b_2 = 0;
    char var_a_2 = 0;
    char var_9_2 = 0;
    NVIC_Init(&var_c, NVIC_Init(&var_c, NVIC_Init(&var_c, arg2, 0, &var_c), 0, &var_c), 0, &var_c);
    int32_t lr;
    return lr;
}

int DSO_Init() {
    *(int16_t *) 0xa = 0x0;
    FillRect(0x0, 0x0, (0xa0 << 0x1) + 0x0, 0xf0, *(int16_t *)((sp - 0x18) + 0xe));
    PutcGenic(0x18, 0x32, 0x0, 0xffe0, *(int16_t *)((sp - 0x18) + 0xe), 0x32bc);
    PutcGenic(0x6e, 0x34, 0x0, 0xffe0, *(int16_t *)((sp - 0x18) + 0xe), 0x32c8);
    PutcGenic1(0x18, 0x4b, 0x0, 0xffe0);
    *(int16_t *)0x6 = 0x0;
    *(int8_t *)0x4 = 0x7;
    *(int8_t *)0x5 = 0x0;
    *(int8_t *)0x0 = 0x12;
    *(int8_t *)0xa = 0x0;
    *(int8_t *)0xb = 0x0;
    *(int16_t *)0xc = 0x0;
    *(int16_t *)0x10 = 0x80 << 0x3;
    *(int16_t *)0x2 = 0xb5 << 0x1;
    *(int16_t *)0xe = *(int16_t *)0x10 >> 0x1 << 0x10 >> 0x10 << 0x10 >> 0x10;
    *(int16_t *)0x8 = 0x0;
    *(int16_t *)0x18 = 0x0;
    *(int16_t *)0x2 = 0x0;
    *(int8_t *)0x4 = 0x0;
    *(int16_t *)0x0 = 0x0;
    *(int16_t *)0x6 = *(int16_t *)0x2;
    *(int16_t *)0xc = *(int16_t *)0x10 << 0x10 >> 0x10;
    *(int8_t *)0x33ae = 0x0;
    *(int16_t *)0x0 = 0xf3a5;
    *(int16_t *)0x0 = 0x0;
    *(int16_t *)0x0 = 0x2710;
    *(int16_t *)0x0 = 0x0;
    *(int16_t *)0x5ba6 = 0xbb8;
    *(int8_t *)0x5baa = 0x0;
    TIM1_Init();
    TIM2_Init();
    ADC1_Init();
    r0 = DMA1_CH1_Init();
    r0 = (r0)();
    return r0;
}

int32_t Min(int16_t arg1, int16_t arg2) {
    uint32_t r3_1;
    if (((int32_t)arg1) >= ((int32_t)arg2))
    {
        r3_1 = ((uint32_t)arg2);
    }
    else
    {
        r3_1 = ((uint32_t)arg1);
    }
    r3_1 = (r3_1 << 0x10);
    return (r3_1 >> 0x10);
}

int32_t Max(int16_t arg1, int16_t arg2) {
    uint32_t r3_1;
    if (((int32_t)arg1) <= ((int32_t)arg2))
    {
        r3_1 = ((uint32_t)arg2);
    }
    else
    {
        r3_1 = ((uint32_t)arg1);
    }
    r3_1 = (r3_1 << 0x10);
    return (r3_1 >> 0x10);
}

uint8_t* BinToDec16(int32_t arg1, uint8_t* arg2) {
    int16_t var_12 = ((int16_t)arg1);
    uint32_t r3 = ((uint32_t)var_12);
    uint8_t r2_1 = ((int8_t)((__aeabi_uidiv(r3, 0x2710, arg1, r3, arg2) << 0x10) >> 0x10));
    *(int8_t*)arg2 = ((int8_t)(((((uint32_t)r2_1) | 0x30) << 0x18) >> 0x18));
    uint32_t r3_9 = ((((uint32_t)r2_1) << 0x10) >> 0x10);
    uint32_t r2_5 = ((r3_9 << 3) - r3_9);
    uint32_t r2_9 = (((((((r2_5 << 5) - r2_5) << 4) - r3_9) << 0x14) >> 0x10) + ((uint32_t)var_12));
    uint16_t var_12_1 = ((int16_t)r2_9);
    uint8_t r2_10 = ((int8_t)((__aeabi_uidiv(((uint32_t)var_12_1), 0x3e8, r2_9, 0xfa) << 0x10) >> 0x10));
    arg2[1] = ((int8_t)(((((uint32_t)r2_10) | 0x30) << 0x18) >> 0x18));
    uint32_t r3_20 = ((((uint32_t)r2_10) << 0x10) >> 0x10);
    uint32_t r2_22 = (((((((((r3_20 << 6) - r3_20) << 6) + r3_20) << 1) + r3_20) << 0x13) >> 0x10) + ((uint32_t)var_12_1));
    uint16_t var_12_2 = ((int16_t)r2_22);
    uint32_t r3_24 = ((uint32_t)var_12_2);
    uint8_t r2_23 = ((int8_t)((__aeabi_uidiv(r3_24, 0x64, r2_22, r3_24) << 0x10) >> 0x10));
    arg2[2] = ((int8_t)(((((uint32_t)r2_23) | 0x30) << 0x18) >> 0x18));
    uint32_t r3_31 = ((((uint32_t)r2_23) << 0x10) >> 0x10);
    uint32_t r2_35 = (((((((((r3_31 << 9) - r3_31) << 2) + r3_31) << 3) - r3_31) << 0x12) >> 0x10) + ((uint32_t)var_12_2));
    uint16_t var_12_3 = ((int16_t)r2_35);
    uint32_t r3_35 = ((uint32_t)var_12_3);
    uint8_t r2_36 = ((int8_t)((__aeabi_uidiv(r3_35, 0xa, r2_35, r3_35) << 0x10) >> 0x10));
    arg2[3] = ((int8_t)(((((uint32_t)r2_36) | 0x30) << 0x18) >> 0x18));
    uint32_t r3_42 = ((((uint32_t)r2_36) << 0x10) >> 0x10);
    arg2[4] = ((int8_t)(((((((uint32_t)(((int16_t)((((((r3_42 << 0xd) - r3_42) << 2) - r3_42) << 0x11) >> 0x10)) + var_12_3)) << 0x18) >> 0x18) | 0x30) << 0x18) >> 0x18));
    arg2[5] = 0;
    return arg2;
}

int32_t UpdateTimebase() {
    *(int32_t*)0x40000028 = 0x4001;
    *(int32_t*)0x4000002c = ((int16_t)(((((uint32_t)data_3296) - 1) << 0x10) >> 0x10));
    *(int32_t*)0x40000038 = ((int16_t)(((((((uint32_t)*(int32_t*)0x4000002c) << 0x10) >> 0x10) >> 1) << 0x10) >> 0x10));
    int32_t lr;
    return lr;
}

int32_t StartCapture() {
    *nullptr = 0xb590;
    *(int32_t*)0x40000000 = ((int16_t)(((((((uint32_t)*(int32_t*)0x40000000) << 0x10) >> 0x10) & 0xfffffffe) << 0x10) >> 0x10));
    *(int32_t*)0x40012c0c = ((int16_t)(((((((uint32_t)*(int32_t*)0x40012c0c) << 0x10) >> 0x10) & 0xfffffff9) << 0x10) >> 0x10));
    *(int32_t*)0x40020008 = (*(int32_t*)0x40020008 & 0xfffffffe);
    *(int32_t*)0x40020008 = (*(int32_t*)0x40020008 & 0xfffffff9);
    *(int32_t*)0x40020004 = (*(int32_t*)0x40020004 | 0xf);
    *(int32_t*)0x40012404 = (*(int32_t*)0x40012404 & 0xffffffdf);
    *(int32_t*)0x40012400 = (*(int32_t*)0x40012400 & 0xfffffffd);
    *(int32_t*)0x40020014 = 0;
    *(int32_t*)0x00000014 = 0;
    *(int32_t*)0x4002000c = 0x801c;
    *(int32_t*)0x40020008 = (*(int32_t*)0x40020008 | 4);
    *(int32_t*)0x40012c38 = 0x801c;
    *(int32_t*)0x40012c0c = ((int16_t)(((((((uint32_t)*(int32_t*)0x40012c0c) << 0x10) >> 0x10) & 0xfffffff9) << 0x10) >> 0x10));
    *(int32_t*)0x40012c10 = ((int16_t)(((((((uint32_t)*(int32_t*)0x40012c10) << 0x10) >> 0x10) & 0xfffffff9) << 0x10) >> 0x10));
    UpdateTimebase();
    *(int32_t*)0x40012404 = (*(int32_t*)0x40012404 | 0x20);
    *(int32_t*)0x40012408 = (0xfffffeff & *(int32_t*)0x40012408);
    *(int32_t*)0x40012c20 = ((int16_t)(((((((uint32_t)*(int32_t*)0x40012c20) << 0x10) >> 0x10) | 2) << 0x10) >> 0x10));
    if (((uint32_t)LogoShowDone) != 0)
    {
        *nullptr = 0xb590;
        *(int32_t*)0x40012c24 = 0;
        *(int32_t*)0x40000000 = ((int16_t)(((((((uint32_t)*(int32_t*)0x40000000) << 0x10) >> 0x10) | 1) << 0x10) >> 0x10));
    }
    int32_t lr;
    return lr;
}

int32_t ProcCapture(void* arg1, int32_t arg2) {
    void* r8;
    void* var_18 = r8;
    *(int32_t*)0x40010810 = 0x8000;
    int16_t* var_1c_1 = 0x1cbb8018;
    int16_t* var_20_1 = nullptr;
    int32_t var_28_1 = 0;
    int32_t r2_3 = 0x801c;
    int16_t var_22_1 = 0x801c;
    while (((uint32_t)var_22_1) != 0)
    {
        *(int16_t*)var_20_1 = *(int16_t*)var_1c_1;
        var_28_1 = (var_28_1 + ((uint32_t)*(int16_t*)var_1c_1));
        var_20_1 = &var_20_1[1];
        var_1c_1 = &var_1c_1[1];
        if (0x10038 <= var_1c_1)
        {
            var_1c_1 = nullptr;
        }
        r2_3 = (((uint32_t)var_22_1) - 1);
        var_22_1 = ((int16_t)r2_3);
    }
    arg1 = __aeabi_uidiv(var_28_1, 0x801c, r2_3, 0x801c);
    data_e = ((int16_t)((arg1 << 0x10) >> 0x10));
    sub_1b6e(arg1, arg2);
    int16_t* var_1c_2 = nullptr;
    int32_t var_28_2 = 0;
    int16_t var_22_2 = 0;
    uint32_t r2_11;
    while (true)
    {
        r2_11 = ((uint32_t)var_22_2);
        if (r2_11 >= 0x801c)
        {
            break;
        }
        var_28_2 = (var_28_2 + ((uint32_t)*(int16_t*)var_1c_2));
        var_1c_2 = &var_1c_2[1];
        var_22_2 = (var_22_2 + 1);
    }
    void* r0_2;
    int32_t r1;
    r0_2 = __aeabi_uidiv(var_28_2, 0x801c, r2_11, 0x801c);
    int16_t r3_21 = r0_2;
    data_e = r3_21;
    int16_t* var_1c_3 = 0x1cbb8018;
    uint16_t* var_2c = nullptr;
    int16_t var_22_3 = 0;
    uint32_t r2_18;
    while (true)
    {
        r2_18 = ((uint32_t)var_22_3);
        if (r2_18 >= 0x801c)
        {
            break;
        }
        *(int16_t*)var_2c = ((int16_t)(((((((uint32_t)*(int16_t*)var_1c_3) - ((uint32_t)r3_21)) << 0x10) >> 0x10) << 0x10) >> 0x10));
        var_2c = &var_2c[1];
        var_1c_3 = &var_1c_3[1];
        if (0x10038 <= var_1c_3)
        {
            var_1c_3 = nullptr;
        }
        var_22_3 = (var_22_3 + 1);
    }
    int16_t* var_2c_1 = nullptr;
    uint16_t* var_20_2 = nullptr;
    sub_1b6e(r0_2, r1, r2_18, 0xffffff90);
    int32_t r2_19 = 0;
    int16_t var_22_4 = 0;
    while (true)
    {
        int32_t r0_163;
        int32_t r1_100;
        r0_163 = __aeabi_uidiv(0x801c, 5, r2_19, 0x801c);
        if (((uint32_t)var_22_4) >= ((r0_163 << 0x10) >> 0x10))
        {
            break;
        }
        uint32_t r2_21 = (((((((uint32_t)var_2c_1[2]) << 0x10) >> 0x10) + ((uint32_t)r3_21)) << 0x10) >> 0x10);
        *(int16_t*)var_20_2 = ((int16_t)r2_21);
        int32_t r3_47 = ((((uint32_t)*(int16_t*)var_2c_1) << 0x10) >> 0x10);
        int32_t r0_6;
        int32_t r1_1;
        r0_6 = __aeabi_f2d(__aeabi_i2f(r3_47, r1_100, r2_21, r3_47));
        int32_t r0_8;
        int32_t r1_3;
        r0_8 = __aeabi_dmul(r0_6, r1_1, 0, 0);
        int32_t r0_12;
        int32_t r1_4;
        r0_12 = __aeabi_f2d(__aeabi_i2f(((((uint32_t)var_2c_1[1]) << 0x10) >> 0x10)));
        int32_t r0_14;
        int32_t r1_6;
        r0_14 = __aeabi_dmul(r0_12, r1_4, 0x886594af, 0xbfb45d63);
        int32_t r0_16;
        int32_t r1_8;
        r0_16 = __aeabi_dadd(r0_8, r1_3, r0_14, r1_6);
        int32_t r0_20;
        int32_t r1_9;
        r0_20 = __aeabi_f2d(__aeabi_i2f(((((uint32_t)var_2c_1[2]) << 0x10) >> 0x10)));
        int32_t r0_22;
        int32_t r1_11;
        r0_22 = __aeabi_dmul(r0_20, r1_9, 0x9db22d0e, 0x3fe6a7ef);
        int32_t r0_24;
        int32_t r1_13;
        r0_24 = __aeabi_dadd(r0_16, r1_8, r0_22, r1_11);
        int32_t r0_28;
        int32_t r1_14;
        r0_28 = __aeabi_f2d(__aeabi_i2f(((((uint32_t)var_2c_1[3]) << 0x10) >> 0x10)));
        int32_t r0_30;
        int32_t r1_16;
        r0_30 = __aeabi_dmul(r0_28, r1_14, 0xff97247, 0x3fdbb7e9);
        int32_t r0_32;
        int32_t r1_18;
        r0_32 = __aeabi_dadd(r0_24, r1_13, r0_30, r1_16);
        int32_t r0_36;
        int32_t r1_19;
        r0_36 = __aeabi_f2d(__aeabi_i2f(((((uint32_t)var_2c_1[4]) << 0x10) >> 0x10)));
        int32_t r0_38;
        int32_t r1_21;
        r0_38 = __aeabi_dmul(r0_36, r1_19, 0x9db22d0e, 0xbfa6a7ef);
        int32_t r0_40;
        int32_t r1_23;
        r0_40 = __aeabi_dadd(r0_32, r1_18, r0_38, r1_21);
        int32_t r0_42;
        int32_t r1_25;
        r0_42 = __aeabi_d2iz(r0_40, r1_23);
        var_20_2[1] = ((int16_t)(((((((r0_42 << 0x10) >> 0x10) << 0x10) >> 0x10) + ((uint32_t)r3_21)) << 0x10) >> 0x10));
        int32_t r3_105 = ((((uint32_t)var_2c_1[1]) << 0x10) >> 0x10);
        int32_t r0_46;
        int32_t r1_26;
        r0_46 = __aeabi_f2d(__aeabi_i2f(r3_105, r1_25, &var_20_2[1], r3_105));
        int32_t r0_48;
        int32_t r1_28;
        r0_48 = __aeabi_dmul(r0_46, r1_26, 0x9db22d0e, 0xbfa6a7ef);
        int32_t r0_52;
        int32_t r1_29;
        r0_52 = __aeabi_f2d(__aeabi_i2f(((((uint32_t)var_2c_1[2]) << 0x10) >> 0x10)));
        int32_t r0_54;
        int32_t r1_31;
        r0_54 = __aeabi_dmul(r0_52, r1_29, 0x9db22d0e, 0x3fc6a7ef);
        int32_t r0_56;
        int32_t r1_33;
        r0_56 = __aeabi_dadd(r0_48, r1_28, r0_54, r1_31);
        int32_t r0_60;
        int32_t r1_34;
        r0_60 = __aeabi_f2d(__aeabi_i2f(((((uint32_t)var_2c_1[3]) << 0x10) >> 0x10)));
        int32_t r0_62;
        int32_t r1_36;
        r0_62 = __aeabi_dmul(r0_60, r1_34, 0xb9778573, 0x3fedef88);
        int32_t r0_64;
        int32_t r1_38;
        r0_64 = __aeabi_dadd(r0_56, r1_33, r0_62, r1_36);
        int32_t r0_68;
        int32_t r1_39;
        r0_68 = __aeabi_f2d(__aeabi_i2f(((((uint32_t)var_2c_1[4]) << 0x10) >> 0x10)));
        int32_t r0_70;
        int32_t r1_41;
        r0_70 = __aeabi_dmul(r0_68, r1_39, 0x952d234f, 0xbfb423b7);
        int32_t r0_72;
        int32_t r1_43;
        r0_72 = __aeabi_dadd(r0_64, r1_38, r0_70, r1_41);
        int32_t r0_76;
        int32_t r1_44;
        r0_76 = __aeabi_f2d(__aeabi_i2f(((((uint32_t)var_2c_1[5]) << 0x10) >> 0x10)));
        int32_t r0_78;
        int32_t r1_46;
        r0_78 = __aeabi_dmul(r0_76, r1_44, 0, 0);
        int32_t r0_80;
        int32_t r1_48;
        r0_80 = __aeabi_dadd(r0_72, r1_43, r0_78, r1_46);
        int32_t r0_82;
        int32_t r1_50;
        r0_82 = __aeabi_d2iz(r0_80, r1_48);
        var_20_2[2] = ((int16_t)(((((((r0_82 << 0x10) >> 0x10) << 0x10) >> 0x10) + ((uint32_t)r3_21)) << 0x10) >> 0x10));
        int32_t r3_163 = ((((uint32_t)var_2c_1[1]) << 0x10) >> 0x10);
        int32_t r0_86;
        int32_t r1_51;
        r0_86 = __aeabi_f2d(__aeabi_i2f(r3_163, r1_50, &var_20_2[2], r3_163));
        int32_t r0_88;
        int32_t r1_53;
        r0_88 = __aeabi_dmul(r0_86, r1_51, 0, 0);
        int32_t r0_92;
        int32_t r1_54;
        r0_92 = __aeabi_f2d(__aeabi_i2f(((((uint32_t)var_2c_1[2]) << 0x10) >> 0x10)));
        int32_t r0_94;
        int32_t r1_56;
        r0_94 = __aeabi_dmul(r0_92, r1_54, 0x952d234f, 0xbfb423b7);
        int32_t r0_96;
        int32_t r1_58;
        r0_96 = __aeabi_dadd(r0_88, r1_53, r0_94, r1_56);
        int32_t r0_100;
        int32_t r1_59;
        r0_100 = __aeabi_f2d(__aeabi_i2f(((((uint32_t)var_2c_1[3]) << 0x10) >> 0x10)));
        int32_t r0_102;
        int32_t r1_61;
        r0_102 = __aeabi_dmul(r0_100, r1_59, 0xb9778573, 0x3fedef88);
        int32_t r0_104;
        int32_t r1_63;
        r0_104 = __aeabi_dadd(r0_96, r1_58, r0_102, r1_61);
        int32_t r0_108;
        int32_t r1_64;
        r0_108 = __aeabi_f2d(__aeabi_i2f(((((uint32_t)var_2c_1[4]) << 0x10) >> 0x10)));
        int32_t r0_110;
        int32_t r1_66;
        r0_110 = __aeabi_dmul(r0_108, r1_64, 0x9db22d0e, 0x3fc6a7ef);
        int32_t r0_112;
        int32_t r1_68;
        r0_112 = __aeabi_dadd(r0_104, r1_63, r0_110, r1_66);
        int32_t r0_116;
        int32_t r1_69;
        r0_116 = __aeabi_f2d(__aeabi_i2f(((((uint32_t)var_2c_1[5]) << 0x10) >> 0x10)));
        int32_t r0_118;
        int32_t r1_71;
        r0_118 = __aeabi_dmul(r0_116, r1_69, 0, 0);
        int32_t r0_120;
        int32_t r1_73;
        r0_120 = __aeabi_dadd(r0_112, r1_68, r0_118, r1_71);
        int32_t r0_122;
        int32_t r1_75;
        r0_122 = __aeabi_d2iz(r0_120, r1_73);
        var_20_2[3] = ((int16_t)(((((((r0_122 << 0x10) >> 0x10) << 0x10) >> 0x10) + ((uint32_t)r3_21)) << 0x10) >> 0x10));
        int32_t r3_220 = ((((uint32_t)var_2c_1[2]) << 0x10) >> 0x10);
        int32_t r0_126;
        int32_t r1_76;
        r0_126 = __aeabi_f2d(__aeabi_i2f(r3_220, r1_75, &var_20_2[4], r3_220));
        int32_t r0_128;
        int32_t r1_78;
        r0_128 = __aeabi_dmul(r0_126, r1_76, 0x9db22d0e, 0xbfa6a7ef);
        int32_t r0_132;
        int32_t r1_79;
        r0_132 = __aeabi_f2d(__aeabi_i2f(((((uint32_t)var_2c_1[3]) << 0x10) >> 0x10)));
        int32_t r0_134;
        int32_t r1_81;
        r0_134 = __aeabi_dmul(r0_132, r1_79, 0xff97247, 0x3fdbb7e9);
        int32_t r0_136;
        int32_t r1_83;
        r0_136 = __aeabi_dadd(r0_128, r1_78, r0_134, r1_81);
        int32_t r0_140;
        int32_t r1_84;
        r0_140 = __aeabi_f2d(__aeabi_i2f(((((uint32_t)var_2c_1[4]) << 0x10) >> 0x10)));
        int32_t r0_142;
        int32_t r1_86;
        r0_142 = __aeabi_dmul(r0_140, r1_84, 0x9db22d0e, 0x3fe6a7ef);
        int32_t r0_144;
        int32_t r1_88;
        r0_144 = __aeabi_dadd(r0_136, r1_83, r0_142, r1_86);
        int32_t r0_148;
        int32_t r1_89;
        r0_148 = __aeabi_f2d(__aeabi_i2f(((((uint32_t)var_2c_1[5]) << 0x10) >> 0x10)));
        int32_t r0_150;
        int32_t r1_91;
        r0_150 = __aeabi_dmul(r0_148, r1_89, 0x886594af, 0xbfb45d63);
        int32_t r0_152;
        int32_t r1_93;
        r0_152 = __aeabi_dadd(r0_144, r1_88, r0_150, r1_91);
        int32_t r0_156;
        int32_t r1_94;
        r0_156 = __aeabi_f2d(__aeabi_i2f(((((uint32_t)var_2c_1[6]) << 0x10) >> 0x10)));
        int32_t r0_158;
        int32_t r1_96;
        r0_158 = __aeabi_dmul(r0_156, r1_94, 0, 0);
        int32_t r0_160;
        int32_t r1_98;
        r0_160 = __aeabi_dadd(r0_152, r1_93, r0_158, r1_96);
        var_20_2[4] = ((int16_t)(((((((__aeabi_d2iz(r0_160, r1_98) << 0x10) >> 0x10) << 0x10) >> 0x10) + ((uint32_t)r3_21)) << 0x10) >> 0x10));
        var_2c_1 = &var_2c_1[2];
        var_20_2 = &var_20_2[5];
        r2_19 = (((uint32_t)var_22_4) + 1);
        var_22_4 = ((int16_t)r2_19);
    }
    data_18 = 0;
    int32_t lr;
    return lr;
}

int32_t sub_1b6e(void* arg1) {
    data_18 = 0;
    *(int32_t*)((char*)arg1 + 0x18);
    *(int32_t*)((char*)arg1 + 0x1c);
    *(int32_t*)((char*)arg1 + 0x20);
    *(int32_t*)((char*)arg1 + 0x24);
    *(int32_t*)((char*)arg1 + 0x28);      /* jump -> *(int32_t*)((char*)arg1 + 0x2c) */
}

int32_t sub_1b74(void* arg1) {
    *(int32_t*)((char*)arg1 + 0x18);
    *(int32_t*)((char*)arg1 + 0x1c);
    *(int32_t*)((char*)arg1 + 0x20);
    *(int32_t*)((char*)arg1 + 0x24);
    *(int32_t*)((char*)arg1 + 0x28);      /* jump -> *(int32_t*)((char*)arg1 + 0x2c) */
}

int32_t Rolling() {
    *(0x0) = 0xb590;
    int32_t lr;
    return lr;
}

int32_t StopCapture() {
    *(int32_t*)0x40000000 = ((int16_t)(((((((uint32_t)*(int32_t*)0x40000000) << 0x10) >> 0x10) & 0xfffffffe) << 0x10) >> 0x10));
    int32_t lr;
    return lr;
}


int32_t SetVSen(char arg1) {
    char var_9 = arg1;
    if (((((uint32_t)var_9) << 0x18) >> 0x18) > 0xc)
    {
        var_9 = 0xc;
    }
    if (((((uint32_t)var_9) << 0x18) >> 0x18) <= 3)
    {
        var_9 = 4;
    }
    data_4 = var_9;
    return 0;
}

int32_t GetVSen() {
    return 0;
}

int32_t SetCpl(char arg1) {
    char var_9 = arg1;
    if (((((uint32_t)var_9) << 0x18) >> 0x18) > 2)
    {
        var_9 = 2;
    }
    if (((uint32_t)var_9) > 0x7f)
    {
        var_9 = 0;
    }
    data_5 = var_9;
    return 0xffffffaf;
}

