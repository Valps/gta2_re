#pragma once

#include "Function.hpp"
#include "Phi_8CA8.hpp"
#include "ang16.hpp"
#include "fix16.hpp"
#include "Object_3C.hpp"

class Object_2C;
class Sprite;
class Sprite_4C;
class Car_BC;
class Phi_74;
class Object_3C;
class Object_29178;
class Wolfy_30;

class Object_2C
{
  public:
    EXPORT Object_2C();
    EXPORT void sub_522180();
    EXPORT bool sub_522250(Sprite* a2);
    EXPORT s32 sub_5222B0();
    EXPORT s32 sub_5222D0();
    EXPORT void sub_522340();
    EXPORT void sub_522360();
    EXPORT char_type sub_5223C0(Sprite* a2);
    EXPORT bool sub_522430(Sprite* a2);
    EXPORT char_type sub_522460(Sprite* a2);
    EXPORT s16* sub_5224E0(s32* a2);
    EXPORT s16 sub_522640(s32 a2);
    EXPORT void sub_5226A0(char_type a2);
    EXPORT void sub_522710(Object_2C* a2, u32* a3);
    EXPORT void sub_5229B0(s32 a2, u32* a3, s32 a4);
    EXPORT void sub_522B20(s32 a2, s32 a3, s32* a4);
    EXPORT void sub_522BE0(u32* a2);
    EXPORT void sub_522D00(u32* a2);
    EXPORT void sub_522E10(s32* a2);
    EXPORT char_type sub_5233A0(s32 a2);
    EXPORT void sub_523440(s32 a2, s32 a3, char_type a4, char_type a5);
    EXPORT char_type sub_5235B0(Sprite* a2, u32* a3, u8* a4, s32 a5);
    EXPORT void sub_524630(s32 a2, s16 a3);
    EXPORT void sub_525190(u8 a2);
    EXPORT void sub_5257D0();
    EXPORT char_type sub_525910();
    EXPORT void sub_525B40();
    EXPORT void sub_525B80();
    EXPORT void sub_525D90();
    EXPORT void sub_525F30();
    EXPORT char_type sub_5263D0();
    EXPORT void sub_526790(s32 a2);
    EXPORT s32 sub_526830(s32 a1);
    EXPORT s16 sub_526B40(s32 a2);
    EXPORT char_type sub_527070(s16* a2, s32 a3, s16* a4, s32 a5);
    EXPORT void sub_527630(s32 object_type, Fix16 xpos, Fix16 ypos, Fix16 zpos, Ang16 rotation);
    EXPORT void sub_527990();
    EXPORT void sub_527AE0();
    EXPORT void sub_527D00();
    EXPORT void sub_527F10();
    EXPORT s16* sub_528130(Fix16* a2);
    EXPORT char_type sub_528240(s32 a2, s32 a3);
    EXPORT void sub_5283C0(s32 a2);
    EXPORT char_type sub_528990(Sprite* a2);
    EXPORT void sub_528BA0();
    EXPORT void sub_528E50(Sprite* a3);
    EXPORT void sub_529000(Object_2C* pObj);
    EXPORT void sub_529030(s8 speed_x, s8 speed_y);
    EXPORT void sub_529070(Object_2C* pObj);
    EXPORT void sub_5292D0();
    EXPORT void sub_529080(u8 a2);
    EXPORT void sub_5290A0();
    EXPORT void sub_5290B0();
    EXPORT void sub_5291B0();
    EXPORT void sub_5291D0();
    EXPORT void sub_5291E0(char_type a2);
    EXPORT bool sub_529200();
    EXPORT ~Object_2C();
    EXPORT void sub_52A650();
    EXPORT void sub_52A6D0(Sprite* a2);
    EXPORT u32* sub_52AE70(u32* a2);
    EXPORT u32* sub_52AE90(u32* a2);

    // TODO: ordering
    EXPORT void sub_5290C0(u8 id_base);
    EXPORT char sub_525AC0();

    inline bool check_is_shop()
    {
        s32 v1 = field_8->field_34;
        return v1 == 6 || v1 == 7 || v1 == 8 || v1 == 9;
    }

    inline bool check_is_busy_shop()
    {
        s32 v1 = field_8->field_34;
        return v1 == 10;
    }

    // Inlined on version 9.6f 0x447e90
    inline void set_field_26(u8 v)
    {
      field_26_varrok_idx = v;
    }

    Object_2C* field_0;
    Sprite* field_4;
    Phi_74* field_8;
    Wolfy_30* field_C;
    Object_3C* field_10;
    s32 field_14;
    s32 field_18_model;
    char_type field_1C;
    char_type field_1D;
    char_type field_1E;
    char_type field_1F;
    s32 field_20;
    char_type field_24;
    char_type field_25;
    u8 field_26_varrok_idx;
    char_type field_27;
    char_type field_28;
    char_type field_29;
    char_type field_2A;
    char_type field_2B;
};

class Object_5C
{
  public:
    EXPORT void sub_529300();
    EXPORT void sub_5293A0();
    EXPORT Object_5C();
    EXPORT ~Object_5C();
    EXPORT void sub_5297F0();
    EXPORT s32 sub_5298E0(s32 a2);
    EXPORT Object_2C* sub_529950(s32 object_type, Fix16 x, Fix16 y, Fix16 z, Ang16 rot, Fix16 w, Fix16 h, Fix16 a9);
    EXPORT Object_2C* sub_5299B0(s32 object_type, Fix16 a3, Fix16 a4, Fix16 a5, Ang16 a6);
    EXPORT Object_2C* sub_5299F0(s32 a2, u32 a3, Fix16 a4, Fix16 a5, Fix16 a6);
    EXPORT Object_2C* sub_529A40(s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, u8 a7);
    EXPORT Object_2C* sub_529AB0(s32 a2, Fix16 a3, Fix16 a4, Fix16 a5, s32 a6, s32 a7, u8 a8);
    EXPORT Object_2C* sub_529B20(s32 obj_type,
                                 s32 a3,
                                 s32 a4,
                                 s32 argb,
                                 s32 a6,
                                 u8 intensity,
                                 char_type on_time,
                                 char_type off_time,
                                 u8 shape);
    EXPORT Object_2C* sub_529BC0(s32 a2, Fix16 a3, Fix16 a4, Fix16 a5, Ang16 a6);
    EXPORT Object_2C* sub_529C00(s32 object_type, Fix16 a3, Fix16 a4, Fix16 a5, Ang16 a6, char_type a7);
    EXPORT char_type sub_52A210(char_type a2);
    EXPORT s32* sub_52A240(s32 a2, s32 maybe_x, s32 maybe_y, s32 maybe_z, s16 pCarBC, s16 maybe_ang, s32 a8, s32 a9, s32 a10);
    EXPORT s32* sub_52A280(s32 a2, s32 a3, s32 a4, s32 a5, s16 a6, s16 a7, s32 a8, s32 a9, s32 a10);
    EXPORT s32* sub_52A2C0(s32 a2, s32 a3, s32 a4, s32 a5, s16 a6, s16 a7, s32 a8, s32 a9, s32 a10, char_type a11);
    EXPORT s32* sub_52A3D0(Fix16 a2, Fix16 a3, Fix16 a4, Ang16 a5, s32 a6, s32 a7);

    EXPORT void sub_52A500(int pUnknownObj);
    EXPORT void sub_52A590(int pUnknownObj);
    EXPORT void sub_52A610(Object_2C *p2C);

    Object_2C* field_0; // Object_2C* ?
    Object_2C* field_4;
    Object_2C* field_8;
    Object_2C* field_C;
    Object_3C* field_10;
    s32 field_14;
    s32 field_18;

    // !! not object_3c here
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

    Sprite* field_58;
};

EXTERN_GLOBAL(Object_5C*, gObject_5C_6F8F84);
