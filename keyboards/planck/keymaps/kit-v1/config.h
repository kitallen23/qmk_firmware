#pragma once

#ifdef AUDIO_ENABLE
    #define STARTUP_SONG SONG(PLANCK_SOUND)
    // #define STARTUP_SONG SONG(NO_SOUND)

    #define DEFAULT_LAYER_SONGS { SONG(QWERTY_SOUND), \
                                  SONG(COLEMAK_SOUND), \
                                  SONG(DVORAK_SOUND), \
                                  SONG(NO_SOUND) \
                                }
#endif

/*
 * MIDI options
 */

/* Prevent use of disabled MIDI features in the keymap */
//#define MIDI_ENABLE_STRICT 1

/* enable basic MIDI features:
   - MIDI notes can be sent when in Music mode is on
*/

#define MIDI_BASIC

/* enable advanced MIDI features:
   - MIDI notes can be added to the keymap
   - Octave shift and transpose
   - Virtual sustain, portamento, and modulation wheel
   - etc.
*/
//#define MIDI_ADVANCED

/* override number of MIDI tone keycodes (each octave adds 12 keycodes and allocates 12 bytes) */
//#define MIDI_TONE_KEYCODE_OCTAVES 2

// Most tactile encoders have detents every 4 stages
#define ENCODER_RESOLUTION 4

/*
 * Mouse key settings
 */
#define MOUSEKEY_DELAY 200
#define MOUSEKEY_MAX_SPEED 4
#define MOUSEKEY_INTERVAL 16
#define MOUSEKEY_TIME_TO_MAX 0

#define MOUSEKEY_WHEEL_DELAY 200
#define MOUSEKEY_WHEEL_INTERVAL 200
#define MOUSEKEY_WHEEL_MAX_SPEED 1
#define MOUSEKEY_WHEEL_TIME_TO_MAX 0


// #define MK_3_SPEED
// #define MK_MOMENTARY_ACCEL
// #define MK_COMBINED

// #define MK_C_OFFSET_0 1
// #define MK_C_OFFSET_1 2
// #define MK_C_OFFSET_UNMOD 32
// #define MK_C_OFFSET_2 200

// #define MK_C_INTERVAL_0 16
// #define MK_C_INTERVAL_1 16
// #define MK_C_INTERVAL_UNMOD 16
// #define MK_C_INTERVAL_2 16

// #define MK_W_OFFSET_0 1
// #define MK_W_OFFSET_1 1
// #define MK_W_OFFSET_UNMOD 1
// #define MK_W_OFFSET_2 1

// #define MK_W_INTERVAL_0 200
// #define MK_W_INTERVAL_1 200
// #define MK_W_INTERVAL_UNMOD 200
// #define MK_W_INTERVAL_2 200
