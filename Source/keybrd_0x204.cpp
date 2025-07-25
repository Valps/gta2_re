#include "keybrd_0x204.hpp"
#include "Function.hpp"
#include "Globals.hpp"
#include "error.hpp"
#include <stdlib.h>
#include <windows.h>

DEFINE_GLOBAL(keybrd_0x204*, gKeybrd_0x204_6F52F4, 0x6F52F4);

char dword_620D2C[] = {' ', ' ', 0};

MATCH_FUNC(0x4D5D70)
keybrd_0x204::keybrd_0x204()
{
    field_200_keyBoardLayout = 0;
    memset(field_0_keys, 0, sizeof(field_0_keys));
}

MATCH_FUNC(0x4D5D90)
keybrd_0x204::~keybrd_0x204()
{
}


static inline bool is_line_break_or_space(wchar_t letter)
{
    return letter == '\n' || letter == ' ';
}

MATCH_FUNC(0x4D5DA0)
void keybrd_0x204::ReadCfg_4D5DA0(FILE* Stream, wchar_t* pOut)
{
    u8 i = 0;
    for (;;)
    {
        const wchar_t read_char = fgetc(Stream);
        if (is_line_break_or_space(read_char))
        {
            pOut[i] = 0;
            return;
        }
        pOut[i++] = read_char;
    }
}


MATCH_FUNC(0x4D5E00)
void keybrd_0x204::LoadKbCfg_4D5E00()
{
    field_200_keyBoardLayout = 0;
    field_200_keyBoardLayout = GetLayout_4D6000();

    char_type FileName[128];
    const char_type* pKeyboardCfgFile;
    switch (field_200_keyBoardLayout)
    {
        case 0:
            pKeyboardCfgFile = "data\\keyboard\\eng_kb.cfg";
            strcpy(FileName, pKeyboardCfgFile); // note: compiler de-dups this to the end for all cases
            break;
        case 1:
            pKeyboardCfgFile = "data\\keyboard\\fre_kb.cfg";
            strcpy(FileName, pKeyboardCfgFile);
            break;
        case 2:
            pKeyboardCfgFile = "data\\keyboard\\ger_kb.cfg";
            strcpy(FileName, pKeyboardCfgFile);
            break;
        case 3:
            pKeyboardCfgFile = "data\\keyboard\\ita_kb.cfg";
            strcpy(FileName, pKeyboardCfgFile);
            break;
        case 4:
            pKeyboardCfgFile = "data\\keyboard\\spa_kb.cfg";
            strcpy(FileName, pKeyboardCfgFile);
            break;
        case 5:
            pKeyboardCfgFile = "data\\keyboard\\por_kb.cfg";
            strcpy(FileName, pKeyboardCfgFile);
            break;
        case 6:
            pKeyboardCfgFile = "data\\keyboard\\rus_kb.cfg";
            strcpy(FileName, pKeyboardCfgFile);
            break;

        default:
            pKeyboardCfgFile = "data\\keyboard\\eng_kb.cfg";
            strcpy(FileName, pKeyboardCfgFile);
            break;
    }

    FILE* hConfigFile = fopen(FileName, "rt");
    if (!hConfigFile)
    {
        FatalError_4A38C0(151, "C:\\Splitting\\Gta2\\Source\\keybrd.cpp", 187);
    }

    for (s32 i = 0; i < 256; i++)
    {
        wchar_t tmpBuffer[16];
        ReadCfg_4D5DA0(hConfigFile, tmpBuffer);
        if (tmpBuffer[0] == '~')
        {
            field_0_keys[i] = 0;
        }
        else if (tmpBuffer[0] != '`')
        {
            field_0_keys[i] = 0;
        }
        else
        {
            field_0_keys[i] = tmpBuffer[1];
        }
    }

    fclose(hConfigFile);
}

MATCH_FUNC(0x4D5F40)
wchar_t keybrd_0x204::GetKey_4D5F40(u16 key_idx)
{
    return field_0_keys[key_idx];
}


MATCH_FUNC(0x4D5F50)
void __stdcall keybrd_0x204::create_4D5F50()
{
    if (!gKeybrd_0x204_6F52F4)
    {
        gKeybrd_0x204_6F52F4 = new keybrd_0x204();
        if (!gKeybrd_0x204_6F52F4)
        {
            FatalError_4A38C0(32, "C:\\Splitting\\Gta2\\Source\\keybrd.cpp", 244);
        }
    }
    gKeybrd_0x204_6F52F4->LoadKbCfg_4D5E00();
}

MATCH_FUNC(0x4D5FA0)
void keybrd_0x204::destroy_4D5FA0()
{
    if (gKeybrd_0x204_6F52F4)
    {
        delete gKeybrd_0x204_6F52F4;
        gKeybrd_0x204_6F52F4 = 0;
    }
}


MATCH_FUNC(0x4D5FD0)
void keybrd_0x204::RecreateIfLayoutChanged_4D5FD0()
{
    if (gKeybrd_0x204_6F52F4)
    {
        s32 curLayout = gKeybrd_0x204_6F52F4->field_200_keyBoardLayout;
        if (curLayout == keybrd_0x204::GetLayout_4D6000())
        {
            return;
        }
        keybrd_0x204::destroy_4D5FA0();
        keybrd_0x204::create_4D5F50();
    }
    else
    {
        keybrd_0x204::create_4D5F50();
    }
}

STUB_FUNC(0x4D6000)
s32 keybrd_0x204::GetLayout_4D6000()
{
    NOT_IMPLEMENTED;
    s32 result; // eax
    char_type Buffer[4]; // [esp+0h] [ebp-14h] BYREF
    char_type pwszKLID[KL_NAMELENGTH]; // [esp+8h] [ebp-Ch] BYREF

    memcpy(Buffer, dword_620D2C, sizeof(Buffer));

    GetKeyboardLayoutNameA(pwszKLID);

    Buffer[0] = pwszKLID[6];
    Buffer[1] = pwszKLID[7];

    s32 v2;
    sscanf(Buffer, "%x", &v2);
    switch (v2)
    {
        case 12:
            result = 1;
            break;

        case 7:
            result = 2;
            break;

        case 16:
            result = 3;
            break;

        case 10:
            result = 4;
            break;

        case 22:
            result = 5;
            break;
        case 25:
            result = 6;
            break;
        default:
            result = 0;
            break;
    }
    return result;
}