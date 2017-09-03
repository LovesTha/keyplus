// Copyright 2017 jem@seethis.link
// Licensed under the MIT license (http://opensource.org/licenses/MIT)

#pragma once

// LED Page (0x08)
// An LED or indicator is implemented as an On/Off Control (OOF) using the
// “Single button toggle” mode, where a value of 1 will turn on the indicator,
// and a value of 0 will turn it off.
// See: http://www.usb.org/developers/hidpage/Hut1_12v2.pdf

typedef enum hut_led_t {
    HID_LED_Undefined                  = 0x00,
    HID_LED_Num_Lock                   = 0x01,
    HID_LED_Caps_Lock                  = 0x02,
    HID_LED_Scroll_Lock                = 0x03,
    HID_LED_Compose                    = 0x04,
    HID_LED_Kana                       = 0x05,
    HID_LED_Power                      = 0x06,
    HID_LED_Shift                      = 0x07,
    HID_LED_Do_Not_Disturb             = 0x08,
    HID_LED_Mute                       = 0x09,
    HID_LED_Tone_Enable                = 0x0A,
    HID_LED_High_Cut_Filter            = 0x0B,
    HID_LED_Low_Cut_Filter             = 0x0C,
    HID_LED_Equalizer_Enable           = 0x0D,
    HID_LED_Sound_Field_On             = 0x0E,
    HID_LED_Surround_On                = 0x0F,
    HID_LED_Repeat                     = 0x10,
    HID_LED_Stereo                     = 0x11,
    HID_LED_Sampling_Rate_Detect       = 0x12,
    HID_LED_Spinning                   = 0x13,
    HID_LED_CAV                        = 0x14,
    HID_LED_CLV                        = 0x15,
    HID_LED_Recording_Format_Detect    = 0x16,
    HID_LED_Off                        = 0x17,
    HID_LED_Message_Waiting            = 0x19,
    HID_LED_Data_Mode                  = 0x1A,
    HID_LED_Battery_Operation          = 0x1B,
    HID_LED_Battery_OK                 = 0x1C,
    HID_LED_Battery_Low                = 0x1D,
    HID_LED_Speaker                    = 0x1E,
    HID_LED_Head_Set                   = 0x1F,
    HID_LED_Hold                       = 0x20,
    HID_LED_Microphone                 = 0x21,
    HID_LED_Coverage                   = 0x22,
    HID_LED_Night_Mode                 = 0x23,
    HID_LED_Send_Calls                 = 0x24,
    HID_LED_Call_Pickup                = 0x25,
    HID_LED_Conference                 = 0x26,
    HID_LED_Stand_by                   = 0x27,
    HID_LED_Camera_On                  = 0x28,
    HID_LED_Camera_Off                 = 0x29,
    HID_LED_On_Line                    = 0x2A,
    HID_LED_Off_Line                   = 0x2B,
    HID_LED_Busy                       = 0x2C,
    HID_LED_Ready                      = 0x2D,
    HID_LED_Paper_Out                  = 0x2E,
    HID_LED_Paper_Jam                  = 0x2F,
    HID_LED_Remote                     = 0x30,
    HID_LED_Forward                    = 0x31,
    HID_LED_Reverse                    = 0x32,
    HID_LED_Stop                       = 0x33,
    HID_LED_Rewind                     = 0x34,
    HID_LED_Fast_Forward               = 0x35,
    HID_LED_Play                       = 0x36,
    HID_LED_Pause                      = 0x37,
    HID_LED_Record                     = 0x38,
    HID_LED_Error                      = 0x39,
    HID_LED_Usage_Selected_Indicator   = 0x3A,
    HID_LED_Usage_In_Use_Indicator     = 0x3B,
    HID_LED_Usage_Multi_Mode_Indicator = 0x3C,
    HID_LED_Indicator_On               = 0x3D,
    HID_LED_Indicator_Flash            = 0x3E,
    HID_LED_Indicator_Slow_Blink       = 0x3F,
    HID_LED_Indicator_Fast_Blink       = 0x40,
    HID_LED_Indicator_Off              = 0x41,
    HID_LED_Flash_On_Time              = 0x42,
    HID_LED_Slow_Blink_On_Time         = 0x43,
    HID_LED_Slow_Blink_Off_Time        = 0x44,
    HID_LED_Fast_Blink_On_Time         = 0x45,
    HID_LED_Fast_Blink_Off_Time        = 0x46,
    HID_LED_Usage_Indicator_Color      = 0x47,
    HID_LED_Indicator_Red              = 0x48,
    HID_LED_Indicator_Green            = 0x49,
    HID_LED_Indicator_Amber            = 0x4A,
    HID_LED_Generic_Indicator          = 0x4B,
    HID_LED_System_Suspend             = 0x4C,
    HID_LED_External_Power_Connected   = 0x4D,
    /* 4E-FFFF Reserved */
} hut_led_t;