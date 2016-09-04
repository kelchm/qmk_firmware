#include "kc60.h"

enum keymap_layout {
    MAC = 0,
    WIN,
    SPACE_FN,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	
   /* Layer 0: Default Layer (macOS)
	* ,-----------------------------------------------------------.
	* |Esc | 1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp |
	* |-----------------------------------------------------------|
	* |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  |
	* |-----------------------------------------------------------|
	* |Gui    |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return |
	* |-----------------------------------------------------------|
	* |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift     |
	* |-----------------------------------------------------------|
	* |Ctrl|Alt |Gui |      SpaceFN          |Gui |FN  |Alt |Ctrl |
	* `-----------------------------------------------------------'
	*/
  [MAC] = KEYMAP( 
      KC_ESC,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,   \
      KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,   \
      KC_LGUI,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_NO,    KC_ENT,    \
      KC_LSFT,  KC_NO,    KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_NO,    KC_RSFT,   \
      KC_LCTL,  KC_LALT,  KC_LGUI,                      KC_FN0,                                           KC_RGUI,  TG(1),    KC_RALT,  KC_GRV    \
      ),

   /* Layer 1: Windows Modifiers
	* ,-----------------------------------------------------------.
	* |   |   |   |   |   |   |   |   |   |   |   |   |   |       |
	* |-----------------------------------------------------------|
	* |     |   |   |   |   |   |   |   |   |   |   |   |   |     |
	* |-----------------------------------------------------------|
	* |Ctrl   |   |   |   |   |   |   |   |   |   |   |   |       |
	* |-----------------------------------------------------------|
	* |        |   |   |   |   |   |   |   |   |   |   |          |
	* |-----------------------------------------------------------|
	* |    |Gui |Alt |                       |Alt |    |Gui |     |
	* `-----------------------------------------------------------'
	*/
  [WIN] = KEYMAP( 
      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,   \
      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,   \
      KC_LCTL,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,   \
      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,   \
      KC_TRNS,  KC_LGUI,  KC_LALT,                      KC_TRNS,                                          KC_RALT,  KC_TRNS,  KC_RGUI,   KC_RCTL    \
      ),

   /* Layer 2: SpaceFN
	* ,-----------------------------------------------------------.
	* | `  |F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12| Del   |
	* |-----------------------------------------------------------|
	* |     |Hme| Up|End|   |   |   |   |   |   | PS|   |   |     |
	* |-----------------------------------------------------------|
	* |       |Lft|Dwn|Rgt|   |BL-|BL+|   |   |   |   |   |       |
	* |-----------------------------------------------------------|
	* |        |Prv| PP|Nxt|   |   |   |   |Hom|End|   |          |
	* |-----------------------------------------------------------|
	* | Rst|    |    |                       |    |    |    |     |
	* `-----------------------------------------------------------'
	* PS = Print Screen
	* PP = Play/Pause
	*/
  [SPACE_FN] = KEYMAP( /* Function Layer */
      KC_GRV,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_DELETE, \
      KC_TRNS,  KC_HOME,  KC_UP,    KC_END,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_PSCR,  KC_TRNS,  KC_TRNS,  KC_TRNS,   \
      KC_TRNS,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_TRNS,  BL_DEC,   BL_INC,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   \
      KC_TRNS,  KC_TRNS,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   \
      RESET,    KC_TRNS,  KC_TRNS,                      KC_TRNS,                                          KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS    \
      ),
};

const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_TAP_KEY(SPACE_FN, KC_SPACE),
};
 
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
  return MACRO_NONE;
};
