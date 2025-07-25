#pragma once

#include "Car_BC.hpp"
#include "Fix16_Rect.hpp"
#include "Function.hpp"
#include "Game_0x40.hpp"
#include "fix16.hpp"

class Sprite_14
{
  public:
    // Inlined, from 9.6f at 0x44af30
    EXPORT Sprite_14()
    {
        field_C = 0;
        field_8 = 0;
        field_4 = -1;
        field_12 = 0;
    }

    u8* field_0;
    s16 field_4;
    char_type field_6;
    char_type field_7;
    s32 field_8;
    s32 field_C;
    u16 field_10;
    s16 field_12;
};

class Sprite_3CC
{
  public:
    EXPORT char_type* sub_48F600(u16* a2, u32* a3, u32* a4, u16* a5);
    EXPORT char_type* sub_48F690(u32* a2);
    EXPORT s16* sub_48F6E0(u16* a2);
    EXPORT void sub_48F710();
    EXPORT Sprite_3CC();
    EXPORT ~Sprite_3CC();

    u8* get_s14(u16 idx)
    {
        return field_0[idx].field_0;
    }

    Sprite_14 field_0[48];
    s32 field_3C0;
    u8* field_3C4;
    s32* field_3C8;
};

class Sprite_8
{
  public:
    EXPORT void sub_5A5860();
    EXPORT void sub_5A5870();
    EXPORT Sprite_8();
    EXPORT ~Sprite_8();
    s32 field_0;
    s16 field_4_id_base;
    s16 field_6;
};

class Sprite_18
{
  public:
    EXPORT ~Sprite_18();
    EXPORT Sprite_18();

    // TODO: ordering ?
    EXPORT Sprite* sub_5A6CA0(s32 a2);

    EXPORT void sub_5A6A20();

    EXPORT void sub_5A69E0();

    Sprite* field_0;
    Sprite_18* field_4_next;
    Fix16_Point field_8;
    Ang16 field_10;
    s16 field_12;
    s32 field_14_rng;
};

class Sprite_1C24
{
  public:
    // Inlined, from 9.6f at 0x4bdcf0
    EXPORT Sprite_1C24()
    {
        Sprite_18* pIter = field_4;
        for (s32 i = 0; i < GTA2_COUNTOF(field_4) - 1; i++)
        {
            pIter->field_4_next = pIter + 1;
            pIter++;
        }

        field_4[299].field_4_next = NULL;
        field_0 = field_4;
    }

    // 0x4BEC40
    Sprite_18* Alloc()
    {
        Sprite_18* p18 = field_0;
        field_0 = field_0->field_4_next;
        return p18;
    }

    void DeAlloc(Sprite_18* pNext)
    {
        pNext->field_4_next = field_0;
        field_0 = pNext;
    }

    EXPORT ~Sprite_1C24();
    Sprite_18* field_0;
    Sprite_18 field_4[300];
};

class Sprite_4C
{
  public:
    EXPORT s32 sub_5A57A0();
    EXPORT void SetCurrentRect_5A4D90();
    EXPORT void sub_5A3550(Fix16 x, Fix16 y, Fix16 z, Ang16 ang);

    EXPORT Sprite_4C();
    EXPORT ~Sprite_4C();
    Fix16 field_0_width;
    Fix16 field_4_height;
    Fix16 field_8;
    Fix16_Point field_C_b_box[4];
    Sprite_4C* field_2C_pNext;
    Fix16_Rect field_30;
    char_type field_48;
    char_type field_49;
    char_type field_4A;
    char_type field_4B;
};

class Sprite_5D598
{
  public:
    // Inlined, from 9.6f at 0x4bc9a0
    EXPORT Sprite_5D598()
    {
        Sprite_4C* pIter = field_4;
        for (s32 i = 0; i < GTA2_COUNTOF(field_4) - 1; i++)
        {
            pIter->field_2C_pNext = pIter + 1;
            pIter++;
        }

        field_4[0x13a6].field_2C_pNext = NULL;
        field_0_pFree = field_4;
    }
    EXPORT ~Sprite_5D598();

    // TODO: Get 9.6f inline addr
    void Remove(Sprite_4C* pToRemove)
    {
        pToRemove->field_2C_pNext = field_0_pFree;
        field_0_pFree = pToRemove;
    }

    // TODO: Get 9.6f inline addr
    Sprite_4C* Allocate()
    {
        Sprite_4C* pSprite4C = field_0_pFree;
        field_0_pFree = field_0_pFree->field_2C_pNext;
        pSprite4C->sub_5A57A0();
        return pSprite4C;
    }

    Sprite_4C* field_0_pFree;
    Sprite_4C field_4[5031];
};

class Sprite_49B28
{
  public:
    // Inlined, from 9.6f at 0x4bca20
    EXPORT Sprite_49B28()
    {
        Sprite* pIter = field_4;
        for (s32 i = 0; i < GTA2_COUNTOF(field_4) - 1; i++)
        {
            pIter->field_C_sprite_next_ptr = pIter + 1;
            pIter++;
        }

        field_4[0x13a6].field_C_sprite_next_ptr = NULL;
        field_0_first_free = field_4;
    }
    EXPORT ~Sprite_49B28();

    // Inlined, from 9.6f at 0x421000
    Sprite* get_new_sprite()
    {
        Sprite* this_00 = this->field_0_first_free;
        this->field_0_first_free = this_00->field_C_sprite_next_ptr;
        this_00->Init_5A2CF0();
        return this_00;
    }

    // TODO: get 9.6f addr
    void remove(Sprite* pSprite)
    {
        pSprite->sub_5A3030();
        pSprite->field_C_sprite_next_ptr = field_0_first_free;
        field_0_first_free = pSprite;
    }

    Sprite* field_0_first_free;
    Sprite field_4[5031];
};
GTA2_ASSERT_SIZEOF_ALWAYS(Sprite_49B28, 0x49B28)

EXTERN_GLOBAL(Sprite_8*, gSprite_8_703820);

EXTERN_GLOBAL(Sprite_49B28*, gSprite_49B28_703818);

EXTERN_GLOBAL(Sprite_5D598*, gSprite_5D598_70381C);

EXTERN_GLOBAL(Sprite_3CC*, gSprite_3CC_67AF1C);

EXTERN_GLOBAL(Sprite_1C24*, gSprite_1C24_703B80);
