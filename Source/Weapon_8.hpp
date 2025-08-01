#pragma once

#include "Function.hpp"
#include "Weapon_30.hpp"
#include "Object_3C.hpp"

class Ped;
class Car_BC;
class infallible_turing;

class Weapon_8
{
  public:
    EXPORT Weapon_30* allocate_5E3C10(s32 a2, Ped* a3, u8 a4);
    EXPORT void deallocate_5E3CB0(Weapon_30* pWeapon);
    EXPORT Weapon_30* allocate_5E3CE0(s32 a1, Car_BC* a2, u8 a3);
    EXPORT Weapon_30* find_5E3D20(Car_BC* a2, s32 a3);
    EXPORT char_type allocate_5E3D50(s32 a2, u8 a3, Car_BC* a4);
    EXPORT void alloc_car_weapon_5E3DF0(Car_BC* a1);
    EXPORT char_type get_max_ammo_capacity_5E3E70(s32 a2);
    EXPORT char_type get_ammo_5E3E80(s32 a2);
    EXPORT Weapon_8();
    EXPORT ~Weapon_8();
    struct_4 field_0;
    s16 field_4_ref_count;
    s16 field_6;
};

class Weapon_2FDC
{
  public:
    Weapon_2FDC() // 4CDA20 inline
    {
        Weapon_30* pF8 = field_8;
        Weapon_30* pIter = field_8;

        for (s32 i = 0; i < 254; i++)
        {
            pIter->field_18_pNext = pIter + 1;
            pIter++;
        }
        field_0 = pF8;
        field_8[254].field_18_pNext = 0;
        field_4 = 0;
        field_2FD8 = 0;
    }

    Weapon_30* Allocate()
    {
        Weapon_30* pWeapon = field_0;
        field_0 = pWeapon->field_18_pNext;
        pWeapon->field_18_pNext = field_4;
        field_4 = pWeapon;
        return pWeapon;
    }

    // Remove/dealloc?
    void sub_4A4F20(Weapon_30* pW30)
    {
        Weapon_30* pIter = this->field_4;
        Weapon_30* pLastIter = 0;
        while (pIter)
        {
            if (pIter == pW30)
            {
                pIter->clear_5DCDE0();
                if (pLastIter)
                {
                    pLastIter->field_18_pNext = pIter->field_18_pNext;
                }
                else
                {
                    this->field_4 = pIter->field_18_pNext;
                }
                pIter->field_18_pNext = this->field_0;
                this->field_0 = pIter;
                break;
            }
            else
            {
                pLastIter = pIter;
                pIter = pIter->field_18_pNext;
            }
        }
    }    

    Weapon_30* get_next_4CC9B0()
    {
        return this->field_4;
    }
  
    EXPORT ~Weapon_2FDC();

    Weapon_30* field_0;
    Weapon_30* field_4;
    Weapon_30 field_8[255];
    s16 field_2FD8;
    s16 field_2FDA;
};

EXTERN_GLOBAL(Weapon_2FDC*, gWeapon_2FDC_707014);

EXTERN_GLOBAL(Weapon_8*, gWeapon_8_707018);

EXTERN_GLOBAL_ARRAY(u8, max_ammo_capacity_5FF75C, 28);
