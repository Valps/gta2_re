#pragma once

#include "Function.hpp"

class Car_BC;
class Ped;

class Garage_48
{
  public:
    EXPORT ~Garage_48();
    EXPORT char_type sub_534650();
    EXPORT void sub_534700(Car_BC* a2, void* a3);
    EXPORT void sub_5349D0();
    EXPORT Garage_48();

    Car_BC* field_0;
    Car_BC* field_4;
    s32 field_8;
    s32 field_C;
    s32 field_10;
    Ped* field_14;
    s32 field_18;
    s32 field_1C;
    s32 field_20;
    s32 field_24;
    s32 field_28;
    s32 field_2C;
    s32 field_30;
    s32 field_34;
    s32 field_38;
    char_type field_3C;
    char_type field_3D;
    u8 field_3E;
    char_type field_3F;
    char_type field_40;
    char_type field_41;
    char_type field_42;
    char_type field_43;
    s32 field_44;
};

EXPORT_VAR extern Garage_48* gGarage_48_6FD26C;
