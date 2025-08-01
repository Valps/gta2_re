#include "Sero_181C.hpp"
#include "Car_BC.hpp"
#include "Globals.hpp"
#include "debug.hpp"
#include "map_0x370.hpp"

DEFINE_GLOBAL(Sero_181C*, gSero_181C_6FF1D4, 0x6FF1D4);

MATCH_FUNC(0x577E20)
char __stdcall sub_577E20(int param_1, gmp_block_info* param_2)
{
    switch (param_1)
    {
        case 1:
            return param_2->field_A_arrows >> 2 & 1;
        case 2:
            return param_2->field_A_arrows >> 3 & 1;
        case 3:
            return param_2->field_A_arrows >> 1 & 1;
        case 4:
            return param_2->field_A_arrows & 1;
        default:
            return '\x01';
    }
}

STUB_FUNC(0x578030)
void Train_58::sub_578030()
{
    NOT_IMPLEMENTED;
}

MATCH_FUNC(0x578180)
void Train_58::sub_578180()
{
    if (!bSkip_trains_67D550)
    {
        switch (this->field_50)
        {
            case 0:
                this->field_50 = 1;
                break;
            case 1:
                sub_578030();
                this->field_50 = 2;
                break;
            case 2:
                this->field_50 = 3;
                break;
            case 3:
                this->field_50 = 4;
                break;
            case 4:
                this->field_50 = 5;
                break;
            default:
                return;
        }
    }
}

MATCH_FUNC(0x5781f0)
void Train_58::sub_5781F0()
{
    if (!bSkip_trains_67D550)
    {
        switch (this->field_50)
        {
            case 1:
                this->field_50 = 0;
                break;
            case 2:
                sub_578030();
                this->field_50 = 1;
                break;
            case 3:
                this->field_50 = 2;
                break;
            case 4:
                this->field_50 = 3;
                break;
            case 5:
                this->field_50 = 4;
                break;
            default:
                return;
        }
    }
}

MATCH_FUNC(0x578260)
Train_58::Train_58()
{
    Car_BC** ppCVar1;
    char* pcVar2;
    int iVar3;

    field_8 = 0;
    field_C_first_carriage = NULL;
    field_44 = 0;
    field_4C = 0;
    field_4 = 0;
    field_0 = 0;
    field_2 = 0;
    field_48 = 0;
    field_50 = 2;
    field_54 = 0;
    field_55 = 0;
    field_56_passenger_count = 0;
    field_57 = 0;
    pcVar2 = field_38;
    ppCVar1 = field_10;
    iVar3 = 10;
    do
    {
        *ppCVar1 = NULL;
        *pcVar2 = -1;
        ppCVar1++;
        pcVar2++;
        iVar3--;
    } while (iVar3 != 0);
    field_42 = -1;
    field_43_idx = 0;
    field_1 = 0;
}

MATCH_FUNC(0x5782c0)
Train_58::~Train_58()
{
    this->field_C_first_carriage = 0;
    this->field_4C = 0;
}

MATCH_FUNC(0x5782d0)
void Train_58::sub_5782D0()
{
    if (!bSkip_trains_67D550)
    {
        if (this->field_C_first_carriage->field_54_driver)
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
void Train_58::sub_578300()
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

MATCH_FUNC(0x578330)
void Train_58::sub_578330()
{
    if (!bSkip_trains_67D550)
    {
        for (s32 i = 0; i < 2; i++)
        {
            if (field_10[i])
            {
                if (field_10[i]->field_84_car_info_idx == car_model_enum::TRAIN)
                {
                    field_10[i]->sub_43B3D0();
                }
            }
        }
    }
}

MATCH_FUNC(0x578360)
void Train_58::sub_578360()
{
    if (!bSkip_trains_67D550)
    {
        for (s32 i = 0; i < 2; i++)
        {
            if (field_10[i])
            {
                if (field_10[i]->field_84_car_info_idx == car_model_enum::TRAIN)
                {
                    field_10[i]->sub_43B380();
                }
            }
        }
    }
}

STUB_FUNC(0x578390)
void Train_58::sub_578390()
{
    NOT_IMPLEMENTED;
}

STUB_FUNC(0x578670)
u8 Train_58::sub_578670()
{
    NOT_IMPLEMENTED;
    return 0;
}

MATCH_FUNC(0x577f80)
s32 TrainStation_34::GetWagonType_577f80(u8 idx)
{
    if (field_24_train_wagons[0] != 0)
    {
        switch (field_24_train_wagons[idx])
        {
            case 1:
                return car_model_enum::TRAIN;
            case 2:
                return car_model_enum::TRAINFB;
            case 3:
                return car_model_enum::boxcar;
        }
    }
    return car_model_enum::none;
}

MATCH_FUNC(0x577fd0)
TrainStation_34::TrainStation_34()
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
TrainStation_34::~TrainStation_34()
{
    field_18 = 0;
    field_4_entry_point = NULL;
    field_8_exit_point = NULL;
    field_C_stop_point = NULL;
    field_10_pZone = 0;
    field_20_next_station = NULL;
}

MATCH_FUNC(0x578790)
Train_58* Sero_181C::AllocateTrain_578790()
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
TrainStation_34* Sero_181C::AllocateTrainStation_5787E0()
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

// NOTE: Declared out of order
STUB_FUNC(0x578820)
void TrainStation_34::sub_578820(u8* a2)
{
    NOT_IMPLEMENTED;
    if (!bSkip_trains_67D550)
    {
        u8 i;
        for (i = 0; i < 10; i++)
        {
            field_24_train_wagons[i] = a2[i];
        }

        for (i = 0; i < 10; i++)
        {
            if (field_24_train_wagons[i])
            {
                field_2E_wagons_number++;
            }
        }
    }
}

STUB_FUNC(0x578860)
void Sero_181C::sub_578860()
{
    NOT_IMPLEMENTED;
}

STUB_FUNC(0x5793e0)
char_type Sero_181C::sub_5793E0()
{
    NOT_IMPLEMENTED;
    return 0;
}

STUB_FUNC(0x579440)
gmp_map_zone* Sero_181C::sub_579440()
{
    NOT_IMPLEMENTED;
    return 0;
}

STUB_FUNC(0x5794b0)
gmp_map_zone* Sero_181C::sub_5794B0()
{
    NOT_IMPLEMENTED;
    return 0;
}

STUB_FUNC(0x5799b0)
char_type* Sero_181C::sub_5799B0()
{
    NOT_IMPLEMENTED;
    return 0;
}

STUB_FUNC(0x579a30)
void Sero_181C::sub_579A30(Car_BC* a2)
{
    NOT_IMPLEMENTED;
}

MATCH_FUNC(0x579aa0)
bool Sero_181C::is_bus_579AA0(Car_BC* pCar)
{
    if (!bSkip_buses_67D558)
    {
        Car_BC* pBus = this->field_17C0.field_C_first_carriage;
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

    Car_BC* result = this->field_17C0.field_C_first_carriage;
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
        field_17C0.field_C_first_carriage->field_4.sub_4715A0();
    }
}

MATCH_FUNC(0x579b40)
Car_BC** Sero_181C::sub_579B40(Car_BC* toFind)
{
    for (u8 i = 0; i < GTA2_COUNTOF(field_1450); i++)
    {
        Train_58* pIter = &field_1450[i];
        if (pIter->field_C_first_carriage == toFind)
        {
            return &pIter->field_10[0];
        }
    }
    return NULL;
}

STUB_FUNC(0x579b90)
bool Sero_181C::sub_579B90(Car_BC* a2, u32* a3)
{
    NOT_IMPLEMENTED;
    return 0;
}

STUB_FUNC(0x579ca0)
void Sero_181C::sub_579CA0()
{
    NOT_IMPLEMENTED;
}

STUB_FUNC(0x57a7a0)
void Sero_181C::sub_57A7A0()
{
    NOT_IMPLEMENTED;
}

MATCH_FUNC(0x57b4b0)
TrainStation_34* Sero_181C::TrainStationForZone_57B4B0(gmp_map_zone* pZone)
{
    TrainStation_34* pIter = &field_0[0];
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
    if (!bSkip_trains_67D550 &&
        (a2->field_84_car_info_idx == 59 || a2->field_84_car_info_idx == 60 || a2->field_84_car_info_idx == 61 ||
         a2->field_84_car_info_idx == 6))
    {
        return GetTrainFromCar_57B5C0(a2)->field_C_first_carriage;
    }
    else
    {
        return 0;
    }
}

STUB_FUNC(0x57b5c0)
Train_58* Sero_181C::GetTrainFromCar_57B5C0(Car_BC* a2)
{
    NOT_IMPLEMENTED;
    return 0;
}

STUB_FUNC(0x57b6a0)
Train_58* Sero_181C::sub_57B6A0(Car_BC* a2)
{
    NOT_IMPLEMENTED;
    return 0;
}

static inline bool IsTrainModel(s32 idx1)
{
    return idx1 == car_model_enum::TRAIN || idx1 == car_model_enum::TRAINCAB || idx1 == car_model_enum::TRAINFB ||
        idx1 == car_model_enum::boxcar;
}

MATCH_FUNC(0x57b740)
bool Sero_181C::sub_57B740(Car_BC* pCar1, Car_BC* pCar2)
{
    if (IsTrainModel(pCar1->field_84_car_info_idx) && IsTrainModel(pCar2->field_84_car_info_idx))
    {
        Train_58* pTrain1 = GetTrainFromCar_57B5C0(pCar1);
        Train_58* pTrain2 = GetTrainFromCar_57B5C0(pCar2);
        if (pTrain1->field_57 != pTrain2->field_57)
        {
            return 1;
        }
    }
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