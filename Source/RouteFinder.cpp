#include "RouteFinder.hpp"
#include "Globals.hpp"
#include "debug.hpp"
#include "error.hpp"
#include "file.hpp"
#include <cstdio>

EXPORT_VAR RouteFinder* gRouteFinder_6FFDC8;
GLOBAL(gRouteFinder_6FFDC8, 0x6FFDC8);

MATCH_FUNC(0x588580)
char_type Junction_10::sub_588580(s32 a2)
{
    if (a2 == 2)
    {
        if (this->field_8_type != 1)
        {
            return 1;
        }
    }
    else if (a2 == 1)
    {
        if (this->field_8_type != 2)
        {
            return 1;
        }
    }
    else if (a2 == 3)
    {
        return 1;
    }
    return 0;
}

MATCH_FUNC(0x5885c0)
u16 Junction_10::sub_5885C0(u16 a2)
{
    if (a2 != 0)
    {
        if (field_0_n.FUN_0040ce90() == a2)
        {
            return 1;
        }
        if (field_2_s.FUN_0040ce90() == a2)
        {
            return 2;
        }
        if(field_4_e.FUN_0040ce90() != a2)
        {
            return 3;
        }
        else
        {
            return 4;
        }
    }
    else
    {
        return gRouteFinder_6FFDC8->field_2;
    }
}

STUB_FUNC(0x5892d0)
RouteFinder_10* RouteFinder_10::sub_5892D0()
{
    return 0;
}

STUB_FUNC(0x588620)
void RouteFinder::ShowJunctionIds_588620()
{
}

STUB_FUNC(0x588810)
u16 RouteFinder::sub_588810(u8 a2, u8 a3, u8 a4)
{
    return 0;
}

STUB_FUNC(0x588950)
u16 RouteFinder::sub_588950(s32 a2, s32 a3, s32 a4)
{
    return 0;
}

STUB_FUNC(0x588aa0)
u16 RouteFinder::sub_588AA0(u8 a2, u8 a3, u16 a4, u16 a5)
{
    return 0;
}

MATCH_FUNC(0x588b30)
void RouteFinder::Load_RGEN_588B30()
{
    File::Global_Read_4A71C0(field_8, 0x2210);
    File::Global_Read_4A71C0(this->field_A830,0x1108);
    File::Global_Read_4A71C0(this->field_B938, 0x1108);
    File::Global_Read_4A71C0(&this->field_4, 2);
    File::Global_Read_4A71C0(&this->field_CC62, 2);
    File::Global_Read_4A71C0(&this->field_CC64, 2);
    this->field_0 = 0;

    if(bLog_routefinder_67D6D1)
    {
        int iVar2 = 0;
        do
        {
            sprintf(gTmpBuffer_67C598, "Junc: %d (%d, %d) n %d s %d w %d e %d", iVar2,
                    field_8[iVar2].field_C_min_x,
                    field_8[iVar2].field_D_min_y,
                    field_8[iVar2].field_0_n.FUN_0040ce90(),
                    field_8[iVar2].field_2_s.FUN_0040ce90(),
                    field_8[iVar2].field_6_w.FUN_0040ce90(),
                    field_8[iVar2].field_4_e.FUN_0040ce90()
                    );
            gErrorLog_67C530.Write_4D9620(gTmpBuffer_67C598);

            if(iVar2 > 0 && field_8[iVar2].field_C_min_x == 0 && field_8[iVar2].field_D_min_y == 0)
            {
                break;
            }
            iVar2++;
        } while(iVar2 < 0x221);

        gErrorLog_67C530.Write_4D9620("     ");
    }
}

STUB_FUNC(0x588c60)
void RouteFinder::Reset_588C60()
{
}

STUB_FUNC(0x588ca0)
char_type RouteFinder::sub_588CA0(gmp_block_info* a1, s32 a2, char_type a3)
{
    return 0;
}

STUB_FUNC(0x588de0)
char_type RouteFinder::sub_588DE0(gmp_block_info* a1, s32 a2, s32 a4)
{
    return 0;
}

STUB_FUNC(0x588e60)
u16 RouteFinder::sub_588E60(u8 a2, u8 a3, u8 a4, char_type a5, s32 a6)
{
    return 0;
}

STUB_FUNC(0x588f30)
u16 RouteFinder::sub_588F30(u8 x_coord, u8 y_coord, u8 z_coord, char_type a5, s32 a6)
{
    return 0;
}

STUB_FUNC(0x589000)
u16 RouteFinder::sub_589000(u8 x_coord, u8 y_coord, u8 z_coord, char_type a5, s32 a6)
{
    return 0;
}

STUB_FUNC(0x5890d0)
u8 RouteFinder::sub_5890D0(u16 a2, s32 a3, u8* a4, u8* a5)
{
    return 0;
}

STUB_FUNC(0x589210)
s32 RouteFinder::sub_589210(char_type a2, char_type a3, s32 a4, char_type a5, s32 a6, u16 a7)
{
    return 0;
}

STUB_FUNC(0x5892f0)
RouteFinder_10* RouteFinder::sub_5892F0(RouteFinder_10* a2, u16 a3, s16 a4)
{
    return 0;
}

STUB_FUNC(0x589390)
RouteFinder_10* RouteFinder::sub_589390(u16 a2)
{
    return 0;
}

STUB_FUNC(0x589420)
void RouteFinder::sub_589420(RouteFinder_10* a2)
{
}

STUB_FUNC(0x589480)
char_type RouteFinder::sub_589480(u8 a2, u8 a3, u8 a4, u8 a5, u8 a6, u8 a7, s32 a8)
{
    return 0;
}

STUB_FUNC(0x5895c0)
char_type RouteFinder::sub_5895C0(u8 a2, s16 a3, u8 a4, s32 a5, s32 a6)
{
    return 0;
}

STUB_FUNC(0x589930)
s16 RouteFinder::sub_589930(s16 idx)
{
    return 0;
}

STUB_FUNC(0x589960)
s16 RouteFinder::sub_589960()
{
    return 0;
}

STUB_FUNC(0x589990)
u16 RouteFinder::sub_589990(RouteFinder_10* a2, u16 a3, s16 a4)
{
    return 0;
}

STUB_FUNC(0x5899c0)
bool RouteFinder::sub_5899C0(RouteFinder_10* a2, s32 a3)
{
    return 0;
}

STUB_FUNC(0x589bb0)
char_type RouteFinder::sub_589BB0(RouteFinder_10* a2, s32 a3)
{
    return 0;
}

STUB_FUNC(0x589e00)
RouteFinder_10* RouteFinder::sub_589E00()
{
    return 0;
}

STUB_FUNC(0x589e20)
char_type RouteFinder::sub_589E20(s32 a2)
{
    return 0;
}

STUB_FUNC(0x589e70)
char_type RouteFinder::sub_589E70(s32 a2)
{
    return 0;
}

STUB_FUNC(0x589eb0)
s16 RouteFinder::sub_589EB0()
{
    return 0;
}

STUB_FUNC(0x589f70)
s16 RouteFinder::sub_589F70()
{
    return 0;
}

STUB_FUNC(0x58a020)
void RouteFinder::sub_58A020(char_type a2)
{
}

STUB_FUNC(0x58a0b0)
Junction_10* RouteFinder::sub_58A0B0(u16 jIdx)
{
    return 0;
}

STUB_FUNC(0x58a0d0)
s16 RouteFinder::sub_58A0D0(u8 a2, u8 a3, u8 a4, u8 a5, u8 a6, u8 a7, s32 a8)
{
    return 0;
}

STUB_FUNC(0x58a130)
s16 RouteFinder::sub_58A130(u8 a2, s16 a3, u8 a4, u8* a5, s32 a6, s32 a7)
{
    return 0;
}

STUB_FUNC(0x58a190)
s16 RouteFinder::sub_58A190(u8 a2, u8 a3, u8 a4, u8 a5, u8 a6, u8 a7, s32 a8)
{
    return 0;
}

STUB_FUNC(0x58a1c0)
RouteFinder::RouteFinder()
{
}
