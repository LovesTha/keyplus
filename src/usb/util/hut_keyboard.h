// Copyright 2017 jem@seethis.link
// Licensed under the MIT license (http://opensource.org/licenses/MIT)

#pragma once

// Keyboard/Keypad Page (0x07)
// HID usage table for key codes to be used in implementing a USB keyboard.
// See: http://www.usb.org/developers/hidpage/Hut1_12v2.pdf

// HID usage table for keyboards
typedef enum hut_keyboard_t {
    KC_NONE                   = 0x00,
    KC_ERROR_ROLL_OVER        = 0x01,
    KC_POST_FAIL              = 0x02,
    KC_ERROR_UNDEFINED        = 0x03,
    KC_A                      = 0x04,
    KC_B                      = 0x05,
    KC_C                      = 0x06,
    KC_D                      = 0x07,
    KC_E                      = 0x08,
    KC_F                      = 0x09,
    KC_G                      = 0x0a,
    KC_H                      = 0x0b,
    KC_I                      = 0x0c,
    KC_J                      = 0x0d,
    KC_K                      = 0x0e,
    KC_L                      = 0x0f,
    KC_M                      = 0x10,
    KC_N                      = 0x11,
    KC_O                      = 0x12,
    KC_P                      = 0x13,
    KC_Q                      = 0x14,
    KC_R                      = 0x15,
    KC_S                      = 0x16,
    KC_T                      = 0x17,
    KC_U                      = 0x18,
    KC_V                      = 0x19,
    KC_W                      = 0x1a,
    KC_X                      = 0x1b,
    KC_Y                      = 0x1c,
    KC_Z                      = 0x1d,
    KC_1                      = 0x1e,
    KC_2                      = 0x1f,
    KC_3                      = 0x20,
    KC_4                      = 0x21,
    KC_5                      = 0x22,
    KC_6                      = 0x23,
    KC_7                      = 0x24,
    KC_8                      = 0x25,
    KC_9                      = 0x26,
    KC_0                      = 0x27,
    KC_ENTER                  = 0x28,
    KC_ESCAPE                 = 0x29,
    KC_BACKSPACE              = 0x2a,
    KC_TAB                    = 0x2b,
    KC_SPACEBAR               = 0x2c,
    KC_MINUS                  = 0x2d,
    KC_EQUAL                  = 0x2e,
    KC_LEFT_BRACKET           = 0x2f,
    KC_RIGHT_BRACKET          = 0x30,
    KC_BACK_SLASH             = 0x31,
    KC_ISO_HASH               = 0x32,
    KC_SEMICOLON              = 0x33,
    KC_APOSTROPHE             = 0x34,
    KC_GRAVE                  = 0x35,
    KC_COMMA                  = 0x36,
    KC_PERIOD                 = 0x37,
    KC_FORWARD_SLASH          = 0x38,
    KC_CAPS_LOCK              = 0x39,
    KC_F1                     = 0x3a,
    KC_F2                     = 0x3b,
    KC_F3                     = 0x3c,
    KC_F4                     = 0x3d,
    KC_F5                     = 0x3e,
    KC_F6                     = 0x3f,
    KC_F7                     = 0x40,
    KC_F8                     = 0x41,
    KC_F9                     = 0x42,
    KC_F10                    = 0x43,
    KC_F11                    = 0x44,
    KC_F12                    = 0x45,
    KC_PRINT_SCREEN           = 0x46,
    KC_SCROLL_LOCK            = 0x47,
    KC_PAUSE                  = 0x48,
    KC_INSERT                 = 0x49,
    KC_HOME                   = 0x4a,
    KC_PAGE_UP                = 0x4b,
    KC_DELETE                 = 0x4c,
    KC_END                    = 0x4d,
    KC_PAGE_DOWN              = 0x4e,
    KC_RIGHT_ARROW            = 0x4f,
    KC_LEFT_ARROW             = 0x50,
    KC_DOWN_ARROW             = 0x51,
    KC_UP_ARROW               = 0x52,
    KC_NUM_LOCK               = 0x53,
    KC_KP_FORWARD_SLASH       = 0x54,
    KC_KP_ASTERISK            = 0x55,
    KC_KP_MINUS               = 0x56,
    KC_KP_PLUS                = 0x57,
    KC_KP_ENTER               = 0x58,
    KC_KP_1                   = 0x59,
    KC_KP_2                   = 0x5a,
    KC_KP_3                   = 0x5b,
    KC_KP_4                   = 0x5c,
    KC_KP_5                   = 0x5d,
    KC_KP_6                   = 0x5e,
    KC_KP_7                   = 0x5f,
    KC_KP_8                   = 0x60,
    KC_KP_9                   = 0x61,
    KC_KP_0                   = 0x62,
    KC_KP_PERIOD              = 0x63,
    KC_ISO_BACK_SLASH         = 0x64,
    KC_APPLICATION            = 0x65,
    KC_POWER                  = 0x66,
    KC_KP_EQUAL               = 0x67,
    KC_F13                    = 0x68,
    KC_F14                    = 0x69,
    KC_F15                    = 0x6A,
    KC_F16                    = 0x6B,
    KC_F17                    = 0x6C,
    KC_F18                    = 0x6D,
    KC_F19                    = 0x6E,
    KC_F20                    = 0x6F,
    KC_F21                    = 0x70,
    KC_F22                    = 0x71,
    KC_F23                    = 0x72,
    KC_F24                    = 0x73,
    KC_EXECUTE                = 0x74,
    KC_HELP                   = 0x75,
    KC_MENU                   = 0x76,
    KC_SELECT                 = 0x77,
    KC_STOP                   = 0x78,
    KC_AGAIN                  = 0x79,
    KC_UNDO                   = 0x7a,
    KC_CUT                    = 0x7b,
    KC_COPY                   = 0x7c,
    KC_PASTE                  = 0x7d,
    KC_FIND                   = 0x7e,
    KC_MUTE                   = 0x7f,
    KC_VOLUME_UP              = 0x80,
    KC_VOLUME_DOWN            = 0x81,
    KC_LOCKING_CAPS_LOCK      = 0x82,
    KC_LOCKING_NUM_LOCK       = 0x83,
    KC_LOCKING_SCROLL_LOCK    = 0x84,
    KC_KP_COMMA               = 0x85,
    KC_KP_EQUAL_AS400         = 0x86,
    KC_INTERNATIONAL_1        = 0x87,
    KC_INTERNATIONAL_2        = 0x88,
    KC_INTERNATIONAL_3        = 0x89,
    KC_INTERNATIONAL_4        = 0x8a,
    KC_INTERNATIONAL_5        = 0x8b,
    KC_INTERNATIONAL_6        = 0x8c,
    KC_INTERNATIONAL_7        = 0x8d,
    KC_INTERNATIONAL_8        = 0x8e,
    KC_INTERNATIONAL_9        = 0x8f,
    KC_LANG_1                 = 0x90,
    KC_LANG_2                 = 0x91,
    KC_LANG_3                 = 0x92,
    KC_LANG_4                 = 0x93,
    KC_LANG_5                 = 0x94,
    KC_LANG_6                 = 0x95,
    KC_LANG_7                 = 0x96,
    KC_LANG_8                 = 0x97,
    KC_LANG_9                 = 0x98,
    KC_ALTERNATE_ERASE        = 0x99,
    KC_SYS_REQ                = 0x9a,
    KC_CANCEL                 = 0x9b,
    KC_CLEAR                  = 0x9c,
    KC_PRIOR                  = 0x9d,
    KC_RETURN                 = 0x9e,
    KC_SEPARATOR              = 0x9f,
    KC_OUT                    = 0xa0,
    KC_OPER                   = 0xa1,
    KC_CLEAR_AGAIN            = 0xa2,
    KC_CRSEL                  = 0xa3,
    KC_EXSEL                  = 0xa4,
    /* reserved a5-af */
    /* KC_RESERVED               = 0xa5, */
    /* KC_RESERVED               = 0xa6, */
    /* KC_RESERVED               = 0xa7, */
    /* KC_RESERVED               = 0xa8, */
    /* KC_RESERVED               = 0xa9, */
    /* KC_RESERVED               = 0xaa, */
    /* KC_RESERVED               = 0xab, */
    /* KC_RESERVED               = 0xac, */
    /* KC_RESERVED               = 0xad, */
    /* KC_RESERVED               = 0xae, */
    /* KC_RESERVED               = 0xaf, */
    KC_KP_00                  = 0xb0,
    KC_KP_000                 = 0xb1,
    KC_THOUSANDS_SEPARATOR    = 0xb2,
    KC_DECIMAL_SEPARATOR      = 0xb3,
    KC_CURRENCY_UNIT          = 0xb4,
    KC_CURRENCY_SUB_UNIT      = 0xb5,
    KC_KP_LEFT_PARENTHESIS    = 0xb6,
    KC_KP_RIGHT_PARENTHESIS   = 0xb7,
    KC_KP_LEFT_BRACE          = 0xb8,
    KC_KP_RIGHT_BRACE         = 0xb9,
    KC_KP_TAB                 = 0xba,
    KC_KP_BACK_SPACE          = 0xbb,
    KC_KP_A                   = 0xbc,
    KC_KP_B                   = 0xbd,
    KC_KP_C                   = 0xbe,
    KC_KP_D                   = 0xbf,
    KC_KP_E                   = 0xc0,
    KC_KP_F                   = 0xc1,
    KC_KP_XOR                 = 0xc2,
    KC_KP_CARET               = 0xc3,
    KC_KP_PERCENT             = 0xc4,
    KC_KP_LESS_THAN           = 0xc5,
    KC_KP_GREATER_THAN        = 0xc6,
    KC_KP_BITWISE_AND         = 0xc7,
    KC_KP_LOGICAL_AND         = 0xc8,
    KC_KP_BITWISE_OR          = 0xc9,
    KC_KP_LOGICAL_OR          = 0xca,
    KC_KP_COLON               = 0xcb,
    KC_KP_HASH                = 0xcc,
    KC_KP_SPACE               = 0xcd,
    KC_KP_AT_SIGN             = 0xce,
    KC_KP_EXCLAMATION         = 0xcf,
    KC_KP_MEMORY_STORE        = 0xd0,
    KC_KP_MEMORY_RECALL       = 0xd1,
    KC_KP_MEMORY_CLEAR        = 0xd2,
    KC_KP_MEMORY_ADD          = 0xd3,
    KC_KP_MEMORY_SUBTRACT     = 0xd4,
    KC_KP_MEMORY_MULTIPLY     = 0xd5,
    KC_KP_MEMORY_DIVIDE       = 0xd6,
    KC_KP_PLUS_MINUS          = 0xd7,
    KC_KP_CLEAR               = 0xd8,
    KC_KP_CLEAR_ENTRY         = 0xd9,
    KC_KP_BINARY              = 0xda,
    KC_KP_OCTAL               = 0xdb,
    KC_KP_DECIMAL             = 0xdc,
    KC_KP_HEXADECIMAL         = 0xdd,
    /* reserved de-df */
    /* KC_RESERVED               = 0xde, */
    /* KC_RESERVED               = 0xdf, */
    KC_LEFT_CONTROL           = 0xe0,
    KC_LEFT_SHIFT             = 0xe1,
    KC_LEFT_ALT               = 0xe2,
    KC_LEFT_GUI               = 0xe3,
    KC_RIGHT_CONTROL          = 0xe4,
    KC_RIGHT_SHIFT            = 0xe5,
    KC_RIGHT_ALT              = 0xe6,
    KC_RIGHT_GUI              = 0xe7,
    /* reserved e8-ffff */
} hut_keyboard_t;