#pragma once
#include <cstdint>

namespace gear
{
    class EUIPageID
    {
        public:
            enum EUIPageID_ : int32_t 
            {
                Invalid = -1,
                DebugMenuSeq, //0x00
                DebugMessage, //0x01
                DebugViewer, //0x02
                Boot, //0x03
                Fader, //0x04
                FaderPause, //0x05
                FaderPlayer, //0x06
                Dialog, //0x07
                DialogPause, //0x08
                HomePause, //0x09
                Unlock, //0x0A
                ControllerApplet, //0x0B
                Keyboard, //0x0C
                Cursor, //0x0D
                PartsCursor, //0x0E
                MenuUnder, //0x0F
                Lyt_RuleList, //0x10
                TrialSoftReset, //0x11
                DebugLocalRoom, //0x12
                Lyt_Mode, //0x13
                Lyt_CharaPartsS, //0x14
                Lyt_CharaPartsM2, //0x15
                Lyt_CharaPartsM4, //0x16
                Lyt_CharaPartsBgS, //0x17
                Lyt_CharaPartsBgM2, //0x18
                Lyt_CharaPartsBgM4, //0x19
                Lyt_ScrollList, //0x1A
                Lyt_ScrollList2, //0x1B
                Lyt_ScrollListBg, //0x1C
                Lyt_GhostScrollList, //0x1D
                Bg, //0x1E
                BgBlur, //0x1F
                TitleTop, //0x20
                TitleSelect, //0x21
                Record, //0x22
                ModeS, //0x23
                ModeM, //0x24
                Class, //0x25
                CharaPresent, //0x26
                PartsPresent, //0x27
                CharaList0, //0x28
                CharaList1, //0x29
                CharaList2, //0x2A
                CharaList3, //0x2B
                CharaS, //0x2C
                CharaM2, //0x2D
                CharaM4, //0x2E
                PartsS, //0x2F
                PartsM2, //0x30
                PartsM4, //0x31
                Rule, //0x32
                Team, //0x33
                ItemSwitch, //0x34
                CourseGP, //0x35
                CourseVS, //0x36
                CourseBattle, //0x37
                Ghost, //0x38
                GhostScrollList, //0x39
                RaceStart, //0x3A
                MiiSelect, //0x3B
                CatalogueDialog, //0x3C
                ShopJumpDialog, //0x3D
                WiFi_Select2P, //0x3E
                WiFi_Login, //0x3F
                WiFi_Top, //0x40
                WiFi_Mode, //0x41
                WiFi_Rule, //0x42
                WiFi_Matching, //0x43
                WiFi_RaceOrLive, //0x44
                WiFi_Mii, //0x45
                WiFi_MiiComment, //0x46
                WiFi_CourseRandom, //0x47
                WiFi_Course, //0x48
                WiFi_CourseBattle, //0x49
                WiFi_Roulette, //0x4A
                WiFi_FriendList, //0x4B
                WiFi_FriendInfo, //0x4C
                WiFi_CommentList, //0x4D
                WiFi_FriendLobby, //0x4E
                WiFi_FriendRule, //0x4F
                WiFi_CompeTop, //0x50
                WiFi_CompeInfo, //0x51
                WiFi_CompeRanking, //0x52
                WiFi_CompeConfirm, //0x53
                WiFi_CompeMessage, //0x54
                WiFi_CompeSearchRule, //0x55
                WiFi_CompeSearchResult, //0x56
                WiFi_CompeCreateIcon, //0x57
                WiFi_CompeCreateName, //0x58
                WiFi_CompeCreateRule, //0x59
                WiFi_CompeCreateDescription, //0x5A
                WiFi_CompeCreateTeamA, //0x5B
                WiFi_CompeCreateTeamB, //0x5C
                WiFi_CompeCreateConfirm, //0x5D
                WiFi_CompeCreateFinish, //0x5E
                Local_Matching, //0x5F
                Local_LobbySelect, //0x60
                Local_LobbyCameraWait, //0x61
                Local_LobbyWait, //0x62
                TrialTitle, //0x63
                RaceView0, //0x64
                RaceView1, //0x65
                RaceView2, //0x66
                RaceView3, //0x67
                Race, //0x68
                RaceViewFront0, //0x69
                RaceViewFront1, //0x6A
                RaceViewFront2, //0x6B
                RaceViewFront3, //0x6C
                Race_Intro, //0x6D
                Race_Pause, //0x6E
                Race_Result, //0x6F
                Race_TAResult, //0x70
                Race_Next, //0x71
                Race_Watch, //0x72
                Race_Replay, //0x73
                Race_Title, //0x74
                Race_Telop, //0x75
                Race_Remake, //0x76
                Award, //0x77
                TrialThankyou, //0x78
                Credit, //0x79
                ChgCredit, //0x7A
                Theater_Menu, //0x7B
                Theater_Race, //0x7C
                Theater_Result, //0x7D
                Theater_Next, //0x7E
                Theater_Remake, //0x7F
                Theater_ScrollButton, //0x80
                Amiibo, //0x81
                AmiiboDialog, //0x82
                Labo, //0x83
                CourseBGM, //0x84
                BgBGM, //0x85
                Viewer, //0x86
            };

            EUIPageID_ mValue;
            
            const char* text_(int);

            EUIPageID(EUIPageID_ item) : mValue(item) {}
            EUIPageID(int32_t item) : mValue(static_cast<EUIPageID_>(item)) {}

            ~EUIPageID() {}
    };
}