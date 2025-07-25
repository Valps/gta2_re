#pragma once

#include "Function.hpp"
#include "fix16.hpp"
#include <wchar.h>

class gmp_map_zone;

class Gang_144
{
  public:
    EXPORT Gang_144(); //  0x4BE4E0
    EXPORT ~Gang_144(); // 0x4BE4F0

    EXPORT wchar_t* get_name_wide_4BED30();
    EXPORT void init_4BED70();
    EXPORT char_type sub_4BEDF0(u8 a2);
    EXPORT void sub_4BEE30(u8 idx, char_type value);
    EXPORT void sub_4BEE50(u8 idx, char_type a3);
    EXPORT void sub_4BEEA0(u8 a2, char_type a3);
    EXPORT char_type sub_4BEEF0(u8 a2);
    EXPORT bool sub_4BEF10(u8 a2);
    EXPORT void sub_4BEF50(u8 zone_idx, char_type a3);
    EXPORT char_type sub_4BEF70(u8 a2, u8 a3);
    EXPORT void sub_4BF000(u8 a2, char_type a3);
    EXPORT s32 sub_4BF0C0();
    EXPORT void set_name_4BF090(const char_type* pName, u8 nameLen);
    EXPORT wchar_t* sub_4BF340();

    u8 field_0_used;
    u8 field_1_zone_idx;
    char field_2_name[4];
    char field_6;
    char field_7;
    u32 field_8;
    u32 field_C;
    u32 field_10;
    u32 field_14;
    u32 field_18;
    u32 field_1C;
    u32 field_20;
    u32 field_24;
    u32 field_28;
    u32 field_2C;
    u32 field_30;
    u32 field_34;
    u32 field_38;
    u32 field_3C;
    u32 field_40;
    u32 field_44;
    u32 field_48;
    u32 field_4C;
    u32 field_50;
    u32 field_54;
    u32 field_58;
    u32 field_5C;
    u32 field_60;
    u32 field_64;
    u32 field_68;
    u32 field_6C;
    u32 field_70;
    u32 field_74;
    u32 field_78;
    u32 field_7C;
    u32 field_80;
    u32 field_84;
    u32 field_88;
    u32 field_8C;
    u32 field_90;
    u32 field_94;
    u32 field_98;
    u32 field_9C;
    u32 field_A0;
    u32 field_A4;
    u32 field_A8;
    u32 field_AC;
    u32 field_B0;
    u32 field_B4;
    u32 field_B8;
    u32 field_BC;
    u32 field_C0;
    u32 field_C4;
    u32 field_C8;
    u32 field_CC;
    u32 field_D0;
    u32 field_D4;
    u32 field_D8;
    u32 field_DC;
    u32 field_E0;
    u32 field_E4;
    u32 field_E8;
    u32 field_EC;
    u32 field_F0;
    u32 field_F4;
    u32 field_F8;
    u32 field_FC;
    char field_100;
    char field_101;
    char field_102;
    char field_103;
    u32 field_104_basic_weapon;
    u32 field_108_angry_weapon;
    u32 field_10C_hate_weapon;
    char field_110;
    char field_111;
    char field_112[10];
    s8 field_11C[6];
    char field_122[10];
    Fix16 field_12C_info_phone_x;
    Fix16 field_130_info_phone_y;
    Fix16 field_134_info_phone_z;
    u8 field_138_arrow_colour;
    u8 field_139_kill_respect_change;
    char field_13A;
    char field_13B;
    u32 field_13C_gang_car_model;
    char field_140_gang_car_remap;
    char field_141;
    char field_142;
    char field_143;
};

class Zones_CA8
{
  public:
    Zones_CA8()
    {
    }

    EXPORT ~Zones_CA8();
    EXPORT Gang_144* sub_4BECA0();
    EXPORT Gang_144* sub_4BECE0();
    EXPORT Gang_144* zone_by_name_4BF100(const char* pZoneName);
    EXPORT Gang_144* next_free_zone_4BF170();
    EXPORT Gang_144* ZoneByIdx_4BF1C0(u8 zone_idx);
    EXPORT void alloc_map_zone_4BF1E0(gmp_map_zone* pMapZone);
    EXPORT u8 get_zone_idx_4BF210(const char* zoneName);
    EXPORT void sub_4BF230(Gang_144* pZone, u8 zone_idx);
    EXPORT s8 sub_4BF2F0(s32 arg0);

    Gang_144 field_0[10];
};

EXTERN_GLOBAL(Zones_CA8*, gZones_CA8_67E274);
