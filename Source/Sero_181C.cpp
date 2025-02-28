#include "Sero_181C.hpp"
#include "Car_BC.hpp"
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

MATCH_FUNC(0x5782d0)
void Sero_58::sub_5782D0()
{
    if (!bSkip_trains_67D550)
    {
        if (this->field_C[0]->field_54_driver)
        {
            this->field_50 = 3;
        }
        else
        {
            this->field_50 = 2;
        }
    }
}

MATCH_FUNC(0x578300)
void Sero_58::sub_578300()
{
    if (!bSkip_trains_67D550)
    {
        if (this->field_50 < 2)
        {
            this->field_1 = 1;
            sub_578030();
        }
        this->field_50 = 2;
    }
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
    field_0_bus_or_train = 0;
    field_4_entry_point = NULL;
    field_8_exit_point = NULL;
    field_C_stop_point = NULL;
    field_10_pZone = NULL;
    field_14 = 0;
    field_18 = 0;
    field_1C = 0;
    field_20_next_station = NULL;
    field_2E_wagons_number = 0;
    field_2F = 0;

    for (u8 i = 0; i < 10; i++)
    {
        field_24_train_wagons[i] = 1;
    }
}

MATCH_FUNC(0x578010)
Sero_34::~Sero_34()
{
    field_18 = 0;
    field_4_entry_point = NULL;
    field_8_exit_point = NULL;
    field_C_stop_point = NULL;
    field_10_pZone = 0;
    field_20_next_station = NULL;
}

MATCH_FUNC(0x578790)
Sero_58* Sero_181C::sub_578790()
{
    if (bSkip_trains_67D550)
    {
        return 0;
    }

    for (u16 i = 0; i < GTA2_COUNTOF(field_1450); i++)
    {
        if (!field_1450[i].field_8)
        {
            return &this->field_1450[i];
        }
    }
    return 0;
}

MATCH_FUNC(0x5787e0)
Sero_34* Sero_181C::sub_5787E0()
{
    for (u16 i = 0; i < GTA2_COUNTOF(field_0); i++)
    {
        if (!this->field_0[i].field_14)
        {
            return &this->field_0[i];
        }
    }
    return 0;
}

STUB_FUNC(0x578820)
void Sero_181C::sub_578820(u8* a2)
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

MATCH_FUNC(0x579aa0)
bool Sero_181C::is_bus_579AA0(Car_BC* pCar)
{
    if (!bSkip_buses_67D558)
    {
        Car_BC* pBus = this->field_17C0.field_C[0];
        if (pBus)
        {
            if (pCar == pBus)
            {
                return true;
            }
        }
    }

    return false;
}

MATCH_FUNC(0x579ad0)
Car_BC* Sero_181C::sub_579AD0()
{
    if (bSkip_buses_67D558)
    {
        return 0;
    }

    Car_BC* result = this->field_17C0.field_C[0];
    if (!result || this->field_17C0.field_48 != 13)
    {
        return 0;
    }
    return result;
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

MATCH_FUNC(0x579b10)
void Sero_181C::sub_579B10()
{
    if (!bSkip_buses_67D558)
    {
        field_17C0.field_56_passenger_count++;
    }
}

MATCH_FUNC(0x579b20)
void Sero_181C::sub_579B20()
{
    if (!bSkip_buses_67D558)
    {
        this->field_17C0.field_56_passenger_count = 0;
        field_17C0.field_C[0]->field_4.sub_4715A0();
    }
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

MATCH_FUNC(0x57b4b0)
Sero_34* Sero_181C::sub_57B4B0(gmp_map_zone* pZone)
{
    Sero_34* pIter = &field_0[0];
    for (u16 i = 0; i < GTA2_COUNTOF(field_0); i++)
    {
        if (pIter->field_10_pZone == pZone)
        {
            return pIter;
        }
        pIter++;
    }
    return 0;
}

MATCH_FUNC(0x57b540)
Car_BC* Sero_181C::sub_57B540(Car_BC* a2)
{
    if (!bSkip_trains_67D550 && (a2->field_84_car_info_idx == 59 || a2->field_84_car_info_idx == 60 || a2->field_84_car_info_idx == 61 || a2->field_84_car_info_idx == 6))
    {
        return sub_57B5C0(a2)->field_C[0];
    }
    else
    {
        return 0;
    }
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
