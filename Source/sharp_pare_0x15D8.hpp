#pragma once

#include "Function.hpp"
#include <windows.h>

struct STexture;

class optimistic_moser
{
  public:
    // inlined 0x4C2F70
    optimistic_moser()
    {
        field_0_pPixelData = 0;
        field_4_pTexture = 0;
        field_8_w = 0;
        field_A_h = 0;
    }

    u8* field_0_pPixelData;
    STexture* field_4_pTexture;
    u16 field_8_w;
    u16 field_A_h;
};

class festive_hopper
{
  public:
    STexture** field_0_pAlloc;
    u16 field_4_item_alloc_count;
    u16 field_6_count;
    s32 field_8_pal_type;
    s32 field_C_pal_type;
    char_type field_10_bDoFree;
    char_type field_11;
    char_type field_12;
    char_type field_13;

    // inlined 0x4C2F10
    festive_hopper()
    {
        field_0_pAlloc = 0;
        field_4_item_alloc_count = 0;
        field_6_count = 0;
        field_8_pal_type = 0;
        field_C_pal_type = 0;
        field_10_bDoFree = 0;
    }

    EXPORT ~festive_hopper();

    EXPORT void Alloc_5B8E90(s16 a2, s16 a3, s32 a4, s32 a5);

    EXPORT void sub_5B8F70();

    EXPORT void LoadTextures_5B8F00();

    EXPORT STexture* get_texture_5B90A0(s32 type, s16 sprite_pal);

    EXPORT STexture* sub_5B90D0(s16 a2, s16 a3);
};

struct sharp_pare_0x15D8
{
    STexture* field_0_textures1[1024];
    char_type field_1000_bFreeTextures2;
    char_type field_1001_bFreeTextures1;
    char_type field_1002;
    char_type field_1003;
    STexture* field_1004_textures2[48];
    optimistic_moser field_10C4[96];
    STexture* field_1544_pTexture;
    festive_hopper field_1548_unk;
    festive_hopper field_155C_unk;
    festive_hopper field_1570_unk;
    festive_hopper field_1584_unk;
    festive_hopper field_1598_unk;
    festive_hopper field_15AC_unk;
    festive_hopper field_15C0_unk;
    s16 field_15D4_idx;
    u16 field_15D6_pal_count;

    EXPORT void LoadPals_5B90F0();
    EXPORT void FreePals_5B9140();
    EXPORT void LoadTextures2_5B9180();
    EXPORT s16 sub_5B9220(u16 a2, u16 a3);
    EXPORT void ReadTextures_5B92E0();
    EXPORT void sub_5B9350();
    EXPORT STexture* sub_5B94F0(s32 type, s32 pal, s32 kind, s32 a5);
    EXPORT STexture* GetTexture2_5B95D0(u16 textureIdx);
    EXPORT STexture* sub_5B95F0(u16 a2, u16 a3, u16 a4);
    EXPORT void sub_5B9660(u16 texture_idx, u16 pal_idx);
    EXPORT void sub_5B96B0(u16 a2, u16 a3, u16 a4, u16 a5);
    EXPORT STexture* sub_5B9710(s16 a2, s16 a3, u8* a4, u16 a5);
    EXPORT sharp_pare_0x15D8();
    EXPORT ~sharp_pare_0x15D8();
};

EXTERN_GLOBAL(sharp_pare_0x15D8*, gSharp_pare_0x15D8_705064);