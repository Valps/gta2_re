#pragma once

#include "Car_BC.hpp"
#include "Function.hpp"
#include "fix16.hpp"

class Sprite_3CC
{
  public:
    EXPORT char_type* sub_48F600(u16* a2, u32* a3, u32* a4, u16* a5);
    EXPORT char_type* sub_48F690(u32* a2);
    EXPORT s16* sub_48F6E0(u16* a2);
    EXPORT s32* sub_48F710();
    EXPORT Sprite_3CC();
    EXPORT ~Sprite_3CC();

    s32 field_0;
    s32 field_4;
    s32 field_8;
    s32 field_C;
    s32 field_10;
    s32 field_14;
    s32 field_18;
    s32 field_1C;
    s32 field_20;
    s32 field_24;
    s32 field_28;
    s32 field_2C;
    s32 field_30;
    s32 field_34;
    s32 field_38;
    s32 field_3C;
    s32 field_40;
    s32 field_44;
    s32 field_48;
    s32 field_4C;
    s32 field_50;
    s32 field_54;
    s32 field_58;
    s32 field_5C;
    s32 field_60;
    s32 field_64;
    s32 field_68;
    s32 field_6C;
    s32 field_70;
    s32 field_74;
    s32 field_78;
    s32 field_7C;
    s32 field_80;
    s32 field_84;
    s32 field_88;
    s32 field_8C;
    s32 field_90;
    s32 field_94;
    s32 field_98;
    s32 field_9C;
    s32 field_A0;
    s32 field_A4;
    s32 field_A8;
    s32 field_AC;
    s32 field_B0;
    s32 field_B4;
    s32 field_B8;
    s32 field_BC;
    s32 field_C0;
    s32 field_C4;
    s32 field_C8;
    s32 field_CC;
    s32 field_D0;
    s32 field_D4;
    s32 field_D8;
    s32 field_DC;
    s32 field_E0;
    s32 field_E4;
    s32 field_E8;
    s32 field_EC;
    s32 field_F0;
    s32 field_F4;
    s32 field_F8;
    s32 field_FC;
    s32 field_100;
    s32 field_104;
    s32 field_108;
    s32 field_10C;
    s32 field_110;
    s32 field_114;
    s32 field_118;
    s32 field_11C;
    s32 field_120;
    s32 field_124;
    s32 field_128;
    s32 field_12C;
    s32 field_130;
    s32 field_134;
    s32 field_138;
    s32 field_13C;
    s32 field_140;
    s32 field_144;
    s32 field_148;
    s32 field_14C;
    s32 field_150;
    s32 field_154;
    s32 field_158;
    s32 field_15C;
    s32 field_160;
    s32 field_164;
    s32 field_168;
    s32 field_16C;
    s32 field_170;
    s32 field_174;
    s32 field_178;
    s32 field_17C;
    s32 field_180;
    s32 field_184;
    s32 field_188;
    s32 field_18C;
    s32 field_190;
    s32 field_194;
    s32 field_198;
    s32 field_19C;
    s32 field_1A0;
    s32 field_1A4;
    s32 field_1A8;
    s32 field_1AC;
    s32 field_1B0;
    s32 field_1B4;
    s32 field_1B8;
    s32 field_1BC;
    s32 field_1C0;
    s32 field_1C4;
    s32 field_1C8;
    s32 field_1CC;
    s32 field_1D0;
    s32 field_1D4;
    s32 field_1D8;
    s32 field_1DC;
    s32 field_1E0;
    s32 field_1E4;
    s32 field_1E8;
    s32 field_1EC;
    s32 field_1F0;
    s32 field_1F4;
    s32 field_1F8;
    s32 field_1FC;
    s32 field_200;
    s32 field_204;
    s32 field_208;
    s32 field_20C;
    s32 field_210;
    s32 field_214;
    s32 field_218;
    s32 field_21C;
    s32 field_220;
    s32 field_224;
    s32 field_228;
    s32 field_22C;
    s32 field_230;
    s32 field_234;
    s32 field_238;
    s32 field_23C;
    s32 field_240;
    s32 field_244;
    s32 field_248;
    s32 field_24C;
    s32 field_250;
    s32 field_254;
    s32 field_258;
    s32 field_25C;
    s32 field_260;
    s32 field_264;
    s32 field_268;
    s32 field_26C;
    s32 field_270;
    s32 field_274;
    s32 field_278;
    s32 field_27C;
    s32 field_280;
    s32 field_284;
    s32 field_288;
    s32 field_28C;
    s32 field_290;
    s32 field_294;
    s32 field_298;
    s32 field_29C;
    s32 field_2A0;
    s32 field_2A4;
    s32 field_2A8;
    s32 field_2AC;
    s32 field_2B0;
    s32 field_2B4;
    s32 field_2B8;
    s32 field_2BC;
    s32 field_2C0;
    s32 field_2C4;
    s32 field_2C8;
    s32 field_2CC;
    s32 field_2D0;
    s32 field_2D4;
    s32 field_2D8;
    s32 field_2DC;
    s32 field_2E0;
    s32 field_2E4;
    s32 field_2E8;
    s32 field_2EC;
    s32 field_2F0;
    s32 field_2F4;
    s32 field_2F8;
    s32 field_2FC;
    s32 field_300;
    s32 field_304;
    s32 field_308;
    s32 field_30C;
    s32 field_310;
    s32 field_314;
    s32 field_318;
    s32 field_31C;
    s32 field_320;
    s32 field_324;
    s32 field_328;
    s32 field_32C;
    s32 field_330;
    s32 field_334;
    s32 field_338;
    s32 field_33C;
    s32 field_340;
    s32 field_344;
    s32 field_348;
    s32 field_34C;
    s32 field_350;
    s32 field_354;
    s32 field_358;
    s32 field_35C;
    s32 field_360;
    s32 field_364;
    s32 field_368;
    s32 field_36C;
    s32 field_370;
    s32 field_374;
    s32 field_378;
    s32 field_37C;
    s32 field_380;
    s32 field_384;
    s32 field_388;
    s32 field_38C;
    s32 field_390;
    s32 field_394;
    s32 field_398;
    s32 field_39C;
    s32 field_3A0;
    s32 field_3A4;
    s32 field_3A8;
    s32 field_3AC;
    s32 field_3B0;
    s32 field_3B4;
    s32 field_3B8;
    s32 field_3BC;
    s32 field_3C0;
    s32 field_3C4;
    s32 field_3C8;
};

class Sprite_8
{
  public:
    EXPORT void sub_5A5860();
    EXPORT void sub_5A5870();
    EXPORT Sprite_8();
    EXPORT ~Sprite_8();
    s32 field_0;
    s16 field_4;
    s16 field_6;
};

class Sprite_18
{
  public:
    EXPORT ~Sprite_18();
    EXPORT Sprite_18();
    s32 field_0;
    Sprite_18* field_4;
    s32 field_8;
    s32 field_C;
    s16 field_10;
    s16 field_12;
    s32 field_14;
};

class Sprite_1C24
{
  public:
    EXPORT ~Sprite_1C24();
    Sprite_18* field_0;
    Sprite_18 field_4[300];
};

class Sprite_4C
{
  public:
    EXPORT s32 sub_5A57A0();
    EXPORT Sprite_4C();
    EXPORT ~Sprite_4C();
    s32 field_0_width;
    s32 field_4_height;
    s32 field_8;
    Car_8 field_C[4];
    Sprite_4C* field_2C_pNext;
    s32 field_30;
    s32 field_34;
    s32 field_38;
    s32 field_3C;
    s32 field_40;
    s32 field_44;
    char_type field_48;
    char_type field_49;
    char_type field_4A;
    char_type field_4B;
};

class Sprite_5D598
{
  public:
    EXPORT ~Sprite_5D598();
    Sprite_4C* field_0_pFree;
    Sprite_4C field_4[5031];
};

class Sprite_49B28
{
  public:
    EXPORT ~Sprite_49B28();

    Sprite* field_0_first_free;
    Sprite field_4[5031];

  public:
    Sprite_49B28();
};
GTA2_ASSERT_SIZEOF_ALWAYS(Sprite_49B28, 0x49B28)

EXPORT_VAR extern Sprite_8* gSprite_8_703820;
EXPORT_VAR extern Sprite_49B28* gSprite_49B28_703818;
EXPORT_VAR extern Sprite_5D598* gSprite_5D598_70381C;
