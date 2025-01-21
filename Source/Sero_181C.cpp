#include "Sero_181C.hpp"
#include "Globals.hpp"
#include "debug.hpp"

EXPORT_VAR Sero_181C* gSero_181C_6FF1D4;
GLOBAL(gSero_181C_6FF1D4, 0x6FF1D4);

STUB_FUNC(0x578030)
void Sero_58::sub_578030()
{
}

STUB_FUNC(0x578180)
void Sero_58::sub_578180()
{
}

STUB_FUNC(0x5781f0)
void Sero_58::sub_5781F0()
{
}

STUB_FUNC(0x578260)
Sero_58::Sero_58()
{
}

MATCH_FUNC(0x5782c0)
Sero_58::~Sero_58()
{
    this->field_C[0] = 0;
    this->field_4C = 0;
}

STUB_FUNC(0x5782d0)
void Sero_58::sub_5782D0()
{
}

STUB_FUNC(0x578300)
void Sero_58::sub_578300()
{
}

STUB_FUNC(0x578330)
void Sero_58::sub_578330()
{
}

STUB_FUNC(0x578360)
void Sero_58::sub_578360()
{
}

STUB_FUNC(0x578390)
void Sero_58::sub_578390()
{
}

STUB_FUNC(0x578670)
u8 Sero_58::sub_578670()
{
    return 0;
}

MATCH_FUNC(0x577fd0)
Sero_34::Sero_34()
{
    field_0 = 0;
    field_4 = 0;
    field_8 = 0;
    field_C = 0;
    field_10_pZone = 0;
    field_14 = 0;
    field_18 = 0;
    field_1C = 0;
    field_20 = 0;
    field_2E = 0;
    field_2F = 0;
    field_24 = 0x1010101;
    field_28 = 0x1010101;
    field_2C = field_28;
}

MATCH_FUNC(0x578010)
Sero_34::~Sero_34()
{
    field_18 = 0;
    field_4 = 0;
    field_8 = 0;
    field_C = 0;
    field_10_pZone = 0;
    field_20 = 0;
}

MATCH_FUNC(0x578790)
Sero_58* Sero_181C::sub_578790()
{
    if (bSkip_trains_67D550)
    {
        return 0;
    }

    for (u16 i = 0; i < 10; i++)
    {
        if (!field_1450[i].field_8)
        {
            return &this->field_1450[i];
        }
    }
    return 0;
}

STUB_FUNC(0x5787e0)
Sero_34* Sero_181C::sub_5787E0()
{
    return 0;
}

STUB_FUNC(0x578820)
void Sero_181C::sub_578820(s32 a2)
{
}

STUB_FUNC(0x578860)
void Sero_181C::sub_578860()
{
}

STUB_FUNC(0x5793e0)
char_type Sero_181C::sub_5793E0()
{
    return 0;
}

STUB_FUNC(0x579440)
gmp_map_zone* Sero_181C::sub_579440()
{
    return 0;
}

STUB_FUNC(0x5794b0)
gmp_map_zone* Sero_181C::sub_5794B0()
{
    return 0;
}

STUB_FUNC(0x5799b0)
char_type* Sero_181C::sub_5799B0()
{
    return 0;
}

STUB_FUNC(0x579a30)
void Sero_181C::sub_579A30(Car_BC* a2)
{
}

STUB_FUNC(0x579aa0)
bool Sero_181C::is_bus_579AA0(Car_BC* pCar)
{
    return 0;
}

STUB_FUNC(0x579ad0)
Car_BC* Sero_181C::sub_579AD0()
{
    return 0;
}

MATCH_FUNC(0x579af0)
bool Sero_181C::is_bus_full_579AF0()
{
    if (bSkip_buses_67D558)
    {
        return false;
    }

    if (field_17C0.field_56_passenger_count >= 10)
    {
        return true;
    }

    return false;
}

STUB_FUNC(0x579b10)
char_type Sero_181C::sub_579B10()
{
    return 0;
}

STUB_FUNC(0x579b20)
void Sero_181C::sub_579B20()
{
}

STUB_FUNC(0x579b40)
Car_BC** Sero_181C::sub_579B40(Car_BC* toFind)
{
    return 0;
}

STUB_FUNC(0x579b90)
bool Sero_181C::sub_579B90(Car_BC* a2, u32* a3)
{
    return 0;
}

STUB_FUNC(0x579ca0)
void Sero_181C::sub_579CA0()
{
}

STUB_FUNC(0x57a7a0)
void Sero_181C::sub_57A7A0()
{
}

STUB_FUNC(0x57b4b0)
Sero_34* Sero_181C::sub_57B4B0(gmp_map_zone* pZone)
{
    return 0;
}

STUB_FUNC(0x57b540)
Car_BC* Sero_181C::sub_57B540(Car_BC* a2)
{
    return 0;
}

STUB_FUNC(0x57b5c0)
Sero_58* Sero_181C::sub_57B5C0(Car_BC* a2)
{
    return 0;
}

STUB_FUNC(0x57b6a0)
Sero_58* Sero_181C::sub_57B6A0(Car_BC* a2)
{
    return 0;
}

STUB_FUNC(0x57b740)
bool Sero_181C::sub_57B740(Car_BC* a2, Car_BC* a3)
{
    return 0;
}

MATCH_FUNC(0x57b7b0)
Sero_181C::Sero_181C()
{
}

MATCH_FUNC(0x57b820)
Sero_181C::~Sero_181C()
{
}
