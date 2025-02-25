#pragma once

#include "Function.hpp"
#include "Game_0x40.hpp"
#include "fix16.hpp"

class Fix16_2;

class Nanobotz_8  // Maybe Fix16_2
{
  public:
    s32 field_0;  // x?
    s32 field_4;  // y?
};

struct Vert_DX
{
    float field_0_x;
    float field_4_y;
    float field_8_z;
    s32 field_C_w;
    s32 field_10_diff;
    s32 field_14_spec;
    float field_18_u;
    float field_1C_v;
};

class MapRenderer
{
  public:
    MapRenderer()
    {
        field_0_ambient = dword_67DCCC;
        field_4 = dword_67DCCC;
        field_8.mValue = 0;
        field_2F00_drawn_tile_count = 0;
        field_2EFC_count = 0;
        set_shading_lev_4E9DB0(15u);
    }

    EXPORT void sub_4E9D50(s32& a2, u16& a3);
    EXPORT char_type set_shading_lev_4E9DB0(u8 shading_lev);
    EXPORT void ambient_light_tick_4E9EA0();
    EXPORT void sub_4EA390(u16* a2);
    EXPORT void set_vert_xyz_relative_to_cam_4EAD90(Fix16 xCoord, Fix16 yCoord, Fix16 z_val, Vert_DX* pVerts);
    EXPORT s32 sub_4EAE00(s32* a2, s32* a3, Vert_DX* a4);
    EXPORT s32 sub_4EAEA0(s32* a2, s32* a3, Vert_DX* a4);
    EXPORT void sub_4EAF40(u16* a2);
    EXPORT void sub_4EBA60(u16* a2);
    EXPORT s16 sub_4EC450(u16* a2);
    EXPORT void sub_4EC7A0(u16* a2);
    EXPORT s16 sub_4ECAF0(u16* a2);
    EXPORT s16 sub_4ECE40(u16* a2);
    EXPORT void draw_bottom_4ED290(u16* a2);
    EXPORT void draw_lid_4EE130();
    EXPORT void sub_4EEAF0();
    EXPORT void sub_4EEE60();
    EXPORT void sub_4EF1C0();
    EXPORT void sub_4EF520();
    EXPORT void sub_4EF880();
    EXPORT void sub_4EFB20();
    EXPORT void sub_4EFDB0();
    EXPORT void sub_4F0030();
    EXPORT void sub_4F02D0();
    EXPORT void sub_4F0340();
    EXPORT void sub_4F0420();
    EXPORT char_type sub_4F0BD0(s32 a2);
    EXPORT void sub_4F1660();
    EXPORT void sub_4F22F0();
    EXPORT void sub_4F33B0();
    EXPORT void draw_left_4F3C00(u16* arg0, s32* pVertIdx, s32 a2, Fix16_2* a5);
    EXPORT void Set_UV_4F4190(Fix16_2* a1, Fix16_2* a2, u32* pVertIdx);
    EXPORT void sub_4F4250(u16* arg0, s32* pVertIdx, s32 a2, Fix16_2* a5);
    EXPORT void sub_4F4600(u16* a2, s32 a3, Fix16_2* a4, u32* a5);
    EXPORT void sub_4F49B0(u16* a2, s32 a1, Fix16_2* a4, u32* pVertIdx);
    EXPORT void draw_lid_4F4D60(Fix16_2* xpos, Fix16_2* diffuse_colour, s32 arg_8, u32* a5);
    EXPORT void draw_slope_4F6580();
    EXPORT void draw_slope_4F6630();
    EXPORT void sub_4F66C0();
    EXPORT void sub_4F6880(s32& pXCoord, s32& pYCoord);
    EXPORT void ClearDrawnTileCount_4F6A10();
    EXPORT void Draw_4F6A20();

    Fix16 field_0_ambient;
    Fix16 field_4;
    Fix16 field_8;
    char_type field_C;
    char_type field_D;
    char_type field_E;
    char_type field_F;
    char_type field_10;
    char_type field_11;
    char_type field_12;
    char_type field_13;
    char_type field_14_xcoords;
    char_type field_15;
    char_type field_16;
    char_type field_17;
    char_type field_18_ycoords;
    char_type field_19;
    char_type field_1A;
    char_type field_1B;
    Nanobotz_8 field_1C[1500];
    s32 field_2EFC_count;
    s32 field_2F00_drawn_tile_count;
};

EXPORT_VAR extern MapRenderer* gpMapRenderer_6F66E4;
