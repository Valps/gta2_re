#include "MapRenderer.hpp"
#include "Globals.hpp"
#include "map_0x370.hpp"
#include "DrawUnk_0xBC.hpp"
#include "fix16.hpp"
#include "debug.hpp"

EXPORT_VAR MapRenderer* gpMapRenderer_6F66E4;
GLOBAL(gpMapRenderer_6F66E4, 0x6F66E4);

EXPORT_VAR Fix16_2 stru_6F6484;
GLOBAL(stru_6F6484, 0x6F6484);

EXPORT_VAR u16 gBlockLeft_6F62F6;
GLOBAL(gBlockLeft_6F62F6, 0x6F62F6);

EXPORT_VAR u16 gBlockTop_6F62F4;
GLOBAL(gBlockTop_6F62F4, 0x6F62F4);

EXPORT_VAR u16 gBlockRight_6F63C6;
GLOBAL(gBlockRight_6F63C6, 0x6F63C6);

EXPORT_VAR u16 gBlockBottom_6F6468;
GLOBAL(gBlockBottom_6F6468, 0x6F6468);

EXPORT_VAR u16 gLidType_6F6274;
GLOBAL(gLidType_6F6274, 0x6F6274);

EXPORT_VAR Fix16 gXCoord_6F63AC;
GLOBAL(gXCoord_6F63AC, 0x6F63AC);

EXPORT_VAR Fix16 gYCoord_6F63B8;
GLOBAL(gYCoord_6F63B8, 0x6F63B8);

EXPORT_VAR s32 gZCoord_6F63E0;
GLOBAL(gZCoord_6F63E0, 0x6F63E0);

EXPORT_VAR gmp_block_info* gpBlock_6F6478;
GLOBAL(gpBlock_6F6478, 0x6F6478);

EXPORT_VAR Vert_DX gTileVerts_6F65A8[2];
GLOBAL(gTileVerts_6F65A8, 0x6F65A8);    // TODO: why is it giving 0x46B058?

MATCH_FUNC(0x4e9d50)
void MapRenderer::sub_4E9D50(s32& target_level, u16& cycles)
{
    Fix16 tgt_level(target_level, 0);
    field_4 = tgt_level;

    if (cycles > 0)
    {
        Fix16 v7;
        v7.FromUnsignedShort(cycles);
        Fix16 v6 = tgt_level - field_0_ambient;
        field_8 = v6.inline_divide_by(v7);
    }
    else
    {
        field_0_ambient = tgt_level;
        field_8 = stru_6F6484.field_0_full;
    }
}

STUB_FUNC(0x4e9db0)
char_type MapRenderer::set_shading_lev_4E9DB0(u8 shading_lev)
{
    return 0;
}

MATCH_FUNC(0x4e9ea0)
void MapRenderer::ambient_light_tick_4E9EA0()
{
    field_0_ambient = field_8 + field_0_ambient;

    if (field_8 > stru_6F6484.field_0_full)
    {
        if (field_0_ambient >= field_4)
        {
            field_8 = stru_6F6484.field_0_full;
            field_0_ambient = field_4;
        }
    }
    else if (field_8 < stru_6F6484.field_0_full)
    {
        if (field_0_ambient <= field_4)
        {
            field_8 = stru_6F6484.field_0_full;
            field_0_ambient = field_4;
        }
    }
}

STUB_FUNC(0x4ea390)
void MapRenderer::sub_4EA390(u16* a2)
{
}

MATCH_FUNC(0x4ead90)
void MapRenderer::set_vert_xyz_relative_to_cam_4EAD90(Fix16 xCoord, Fix16 yCoord, Fix16 z_val, Vert_DX* pVerts)
{
    DrawUnk_0xBC* pCam = gViewCamera_676978;

    s32 next_idx = (pVerts - gTileVerts_6F65A8) + 4;

    gTileVerts_6F65A8[next_idx].field_0_x = (xCoord + pCam->field_98_x).ToFloat();
    gTileVerts_6F65A8[next_idx].field_4_y = (yCoord + pCam->field_9C_y).ToFloat();
    gTileVerts_6F65A8[next_idx].field_8_z = z_val.ToFloat();
}

STUB_FUNC(0x4eae00)
s32 MapRenderer::sub_4EAE00(s32* a2, s32* a3, Vert_DX* a4)
{
    return 0;
}

STUB_FUNC(0x4eaea0)
s32 MapRenderer::sub_4EAEA0(s32* a2, s32* a3, Vert_DX* a4)
{
    return 0;
}

STUB_FUNC(0x4eaf40)
void MapRenderer::sub_4EAF40(u16* a2)
{
}

STUB_FUNC(0x4eba60)
void MapRenderer::sub_4EBA60(u16* a2)
{
}

STUB_FUNC(0x4ec450)
s16 MapRenderer::sub_4EC450(u16* a2)
{
    return 0;
}

STUB_FUNC(0x4ec7a0)
void MapRenderer::sub_4EC7A0(u16* a2)
{
}

STUB_FUNC(0x4ecaf0)
s16 MapRenderer::sub_4ECAF0(u16* a2)
{
    return 0;
}

STUB_FUNC(0x4ece40)
s16 MapRenderer::sub_4ECE40(u16* a2)
{
    return 0;
}

STUB_FUNC(0x4ed290)
void MapRenderer::draw_bottom_4ED290(u16* a2)
{
}

STUB_FUNC(0x4ee130)
void MapRenderer::draw_lid_4EE130()
{
}

STUB_FUNC(0x4eeaf0)
void MapRenderer::sub_4EEAF0()
{
}

STUB_FUNC(0x4eee60)
void MapRenderer::sub_4EEE60()
{
}

STUB_FUNC(0x4ef1c0)
void MapRenderer::sub_4EF1C0()
{
}

STUB_FUNC(0x4ef520)
void MapRenderer::sub_4EF520()
{
}

STUB_FUNC(0x4ef880)
void MapRenderer::sub_4EF880()
{
}

STUB_FUNC(0x4efb20)
void MapRenderer::sub_4EFB20()
{
}

STUB_FUNC(0x4efdb0)
void MapRenderer::sub_4EFDB0()
{
}

STUB_FUNC(0x4f0030)
void MapRenderer::sub_4F0030()
{
}

STUB_FUNC(0x4f02d0)
void MapRenderer::sub_4F02D0()
{
}

STUB_FUNC(0x4f0340)
void MapRenderer::sub_4F0340()
{
}

STUB_FUNC(0x4f0420)
void MapRenderer::sub_4F0420()
{
}

STUB_FUNC(0x4f0bd0)
char_type MapRenderer::sub_4F0BD0(s32 a2)
{
    return 0;
}

STUB_FUNC(0x4f1660)
void MapRenderer::sub_4F1660()
{
}

STUB_FUNC(0x4f22f0)
void MapRenderer::sub_4F22F0()
{
}

STUB_FUNC(0x4f33b0)
void MapRenderer::sub_4F33B0()
{
}

STUB_FUNC(0x4f3c00)
void MapRenderer::draw_left_4F3C00(u16* arg0, s32* pVertIdx, s32 a2, Fix16_2* a5)
{
}

STUB_FUNC(0x4f4190)
void MapRenderer::Set_UV_4F4190(Fix16_2* a1, Fix16_2* a2, u32* pVertIdx)
{
}

STUB_FUNC(0x4f4250)
void MapRenderer::sub_4F4250(u16* arg0, s32* pVertIdx, s32 a2, Fix16_2* a5)
{
}

STUB_FUNC(0x4f4600)
void MapRenderer::sub_4F4600(u16* a2, s32 a3, Fix16_2* a4, u32* a5)
{
}

STUB_FUNC(0x4f49b0)
void MapRenderer::sub_4F49B0(u16* a2, s32 a1, Fix16_2* a4, u32* pVertIdx)
{
}

STUB_FUNC(0x4f4d60)
void MapRenderer::draw_lid_4F4D60(Fix16_2* xpos, Fix16_2* diffuse_colour, s32 arg_8, u32* a5)
{
}

STUB_FUNC(0x4f6580)
void MapRenderer::draw_slope_4F6580()
{
}

STUB_FUNC(0x4f6630)
void MapRenderer::draw_slope_4F6630()
{
}

STUB_FUNC(0x4f66c0)
void MapRenderer::sub_4F66C0()
{
}

MATCH_FUNC(0x4f6880)
void MapRenderer::sub_4F6880(s32& pXCoord, s32& pYCoord)
{
    gmp_block_info* pBlock = gMap_0x370_6F6268->sub_4DFEE0(pXCoord, pYCoord, gZCoord_6F63E0);
    gpBlock_6F6478 = pBlock;
    if (pBlock)
    {
        gBlockLeft_6F62F6 = pBlock->field_0_left;
        gBlockRight_6F63C6 = pBlock->field_2_right;
        gBlockTop_6F62F4 = pBlock->field_4_top;
        gBlockBottom_6F6468 = pBlock->field_6_bottom;
        
        u16 v8 = pBlock->field_8_lid;
        gLidType_6F6274 = v8;
        
        if (bShow_hidden_faces_67D5CD)
        {
            if (!v8 && (pBlock->field_B_slope_type & 3) != 0)
            {
                gLidType_6F6274 = 0x260;
            }
            if ((gBlockLeft_6F62F6 & 0x400) != 0 && (gBlockLeft_6F62F6 & 0x3FF) == 0)
            {
                gBlockLeft_6F62F6 = gBlockLeft_6F62F6 | 0x260;
            }
            if ((gBlockRight_6F63C6 & 0x400) != 0 && (gBlockRight_6F63C6 & 0x3FF) == 0)
            {
                gBlockRight_6F63C6 |= 0x260u;
            }
            if ((gBlockTop_6F62F4 & 0x400) != 0 && (gBlockTop_6F62F4 & 0x3FF) == 0)
            {
                gBlockTop_6F62F4 |= 0x260u;
            }
            if ((gBlockBottom_6F6468 & 0x400) != 0 && (gBlockBottom_6F6468 & 0x3FF) == 0)
            {
                gBlockBottom_6F6468 = gBlockBottom_6F6468 | 0x260;
            }
        }
        gXCoord_6F63AC = Fix16(pXCoord) - gViewCamera_676978->field_98_x;
        gYCoord_6F63B8 = Fix16(pYCoord) - gViewCamera_676978->field_9C_y;
        
        u8 v6 = pBlock->field_B_slope_type & 0xFC;
        
        if (v6 < 0xB4u || v6 > 0xC0u)
        {
            if (v6 < 0xC4u || v6 > 0xD0u)
            {
                if (v6 < 0xD4u || v6 > 0xF4u)
                {
                    if (v6 > 0 && v6 < 0xB4u)
                    {
                        MapRenderer::draw_slope_4F6630();
                    }
                    else
                    {
                        MapRenderer::sub_4F66C0();
                    }
                }
                else
                {
                    MapRenderer::draw_slope_4F6580();
                }
            }
            else
            {
                MapRenderer::sub_4F0340();
            }
        }
        else
        {
            MapRenderer::sub_4F02D0();
        }
    }
}

MATCH_FUNC(0x4f6a10)
void MapRenderer::ClearDrawnTileCount_4F6A10()
{
    field_2F00_drawn_tile_count = 0;
}

STUB_FUNC(0x4f6a20)
void MapRenderer::Draw_4F6A20()
{
}
