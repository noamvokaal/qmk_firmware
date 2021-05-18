#include QMK_KEYBOARD_H

#define HRM_K LCTL_T(KC_K)
#define HRM_R LALT_T(KC_R)
#define HRM_N LGUI_T(KC_N)
#define HRM_T LSFT_T(KC_T)
#define HRM_A RSFT_T(KC_A)
#define HRM_E RGUI_T(KC_E)
#define HRM_S RALT_T(KC_S)
#define HRM_V RCTL_T(KC_V)
#define KC_AE KC_QUOT
#define KC_OE KC_SCLN
#define KC_AA KC_LBRC
#define LB_ENT LT(_LITTERATURBANKEN, KC_ENTER)
#define SYM_B LT(_SYM, KC_B)
#define NAV_SPC LT(_NAV, KC_SPC)
#define S_SFT OSM(MOD_LSFT)
#define BS_TAB LT(_BACKSPACE, KC_TAB)
#define MUS_BS LT(_MOUSE, KC_BSPC)
#define MUS_I LT(_MOUSE, KC_I)
#define MUS_H LT(_MOUSE, KC_H)



enum layers {
    _BAS = 0,
    _NAV,
    _SYM,
    _LITTERATURBANKEN,
    _BACKSPACE,
    _RESETLAGER,
    _MOUSE
};

enum custom_keycodes {
    L_FRAG = SAFE_RANGE,
    L_CIT,
    L_CK,
    L_KOL,
    L_SEM,
    L_TANK,
    L_PAR1,
    L_PAR2,
    L_XDEL,
    L_AP,
    L_BSP,
    L_LIT,
    L_NAV,
    L_IMP1,
    L_IMP2,
    L_KONT,
    L_TYPE,
    L_TITLE,
    L_PG,
    CAPSWRD,

  
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/*
 *  ALFA
 *
 * ,----------------------------------.                              ,----------------------------------.
 * |      |      |      |      |      |                              |      |      |      |      |      |
 * |------+------+------+------+------|                              |------+------+------+------+------|
 * |      |      |      |      |      |                              |      |      |      |      |      |
 * |------+------+------+------+------|                              |------+------+------+------+------|
 * |      |      |      |      |      |                              |      |      |      |      |      |
 * `-------------+------+------+------+------.                .------+------+------+------+-------------'
 *                      | Ent  | Spc  | Bspc |                | Shft | B    | Tab  | 
 *                      | LB   | Nav  | Mus  |                |      | Sym  | BSPC | 
 *                      `--------------------'                `--------------------'
 */
    [_BAS] = LAYOUT(
        KC_Q,   KC_F,   KC_L,   KC_M,   KC_J,                           KC_C,   KC_AE,  KC_O,   KC_OE,  KC_X,
        HRM_K,  HRM_R,  HRM_N,  HRM_T,  KC_G,                           KC_Y,   HRM_A,  HRM_E,  HRM_S,  HRM_V,
        KC_Z,   MUS_H,   KC_P,   KC_D,   KC_B,                           KC_C,   MUS_I,  KC_AA,  KC_U,   KC_W,
                                LB_ENT, NAV_SPC,MUS_BS,         S_SFT,  SYM_B,  BS_TAB
    ),


/*
 *  NAVIGATIONSLAGER
 *
 * ,----------------------------------.                              ,----------------------------------.
 * |      |      |      |      |      |                              |      |      |      |      |      |
 * |------+------+------+------+------|                              |------+------+------+------+------|
 * |      |      |      |      |      |                              |      |      |      |      |      |
 * |------+------+------+------+------|                              |------+------+------+------+------|
 * |      |      |      |      |      |                              |      |      |      |      |      |
 * `-------------+------+------+------+------.                .------+------+------+------+-------------'
 *                      | Tab  | Spc  | Bspc |                | Shft | Sym  | Tab  | 
 *                      | LB   | Nav  |      |                |      |      |      | 
 *                      `--------------------'                `--------------------'
 */
    [_NAV] = LAYOUT(
        _______,KC_HOME,KC_UP,  KC_END,_______,                        _______,KC_1,  KC_2,    KC_3,   KC_CAPS,
        _______,KC_LEFT,KC_DOWN,KC_RGHT,_______,                        _______,RSFT_T(KC_4), RGUI_T(KC_5),RALT_T(KC_6),KC_LCTL,
        _______,_______,KC_PGUP,KC_PGDN,_______,                        _______,KC_7,  KC_8,    KC_9,   _______,
                                _______,_______,_______,        _______,_______,KC_0
    ),


/*
 * SYMBOLLAGER
 *
 * ,----------------------------------.                              ,----------------------------------.
 * |      |      |      |      |      |                              |      |      |      |      |      |
 * |------+------+------+------+------|                              |------+------+------+------+------|
 * |      |      |      |      |      |                              |      |      |      |      |      |
 * |------+------+------+------+------|                              |------+------+------+------+------|
 * |      |      |      |      |      |                              |      |      |      |      |      |
 * `-------------+------+------+------+------.                .------+------+------+------+-------------'
 *                      | Tab  | Spc  | Bspc |                | Shft | Sym  | Tab  | 
 *                      | LB   | Nav  |      |                |      |      |      | 
 *                      `--------------------'                `--------------------'
 */
    [_SYM] = LAYOUT(
        S(KC_3), LALT(KC_2), KC_SLSH, L_TANK, S(KC_SLSH),                  KC_ESC,  L_KOL,   S(KC_MINS),     S(KC_7), S(KC_NUHS),
        L_CK,    L_AP,    L_CIT,   KC_BSPC, KC_DEL,                        KC_TAB,  KC_ENT,  KC_DOT,S(KC_1),   S(KC_6),
        LSA(KC_V), A(KC_8), L_PAR1,  L_PAR2,_______,                        _______,KC_COMM, L_SEM, A(KC_9), LSA(KC_B),
                                _______,_______,_______,        _______,_______,_______
    ),


/*
 * LITTERATURBANKEN
 *
 * ,----------------------------------.                              ,----------------------------------.
 * |      |      |      |      |      |                              |      |      |      |      |      |
 * |------+------+------+------+------|                              |------+------+------+------+------|
 * |      |      |      |      |      |                              |      |      |      |      |      |
 * |------+------+------+------+------|                              |------+------+------+------+------|
 * |      |      |      |      |      |                              |      |      |      |      |      |
 * `-------------+------+------+------+------.                .------+------+------+------+-------------'
 *                      | Tab  | Spc  | Bspc |                | Shft | Sym  | Tab  | 
 *                      | LB   | Nav  |      |                |      |      |      | 
 *                      `--------------------'                `--------------------'
 */
    [_LITTERATURBANKEN] = LAYOUT(                                      
        _______,_______,S(KC_ENT),_______,_______,                        _______,_______,_______,_______,L_IMP1,
        _______,S(KC_TAB), KC_ENT, KC_TAB,_______,                        _______,KC_F2,_______,_______, L_LIT,
        L_KONT,_______,_______,_______,_______,                        _______,L_TYPE,L_TITLE,L_PG,L_IMP2,
                                _______,_______,_______,        _______,_______,_______
    ),


/*
 * Lägsta lagret: Lingon-layout
 *
 * ,----------------------------------.                              ,----------------------------------.
 * |      |      |      |      |      |                              |      |      |      |      |      |
 * |------+------+------+------+------|                              |------+------+------+------+------|
 * |      |      |      |      |      |                              |      |      |      |      |      |
 * |------+------+------+------+------|                              |------+------+------+------+------|
 * |      |      |      |      |      |                              |      |      |      |      |      |
 * `-------------+------+------+------+------.                .------+------+------+------+-------------'
 *                      | Tab  | Spc  | Bspc |                | Shft | Sym  | Tab  | 
 *                      | LB   | Nav  |      |                |      |      |      | 
 *                      `--------------------'                `--------------------'
 */
    [_BACKSPACE] = LAYOUT(
        _______,LGUI(KC_DEL),LALT(KC_DEL),KC_DEL,_______,                        _______,_______,_______,_______,_______,
        _______,LGUI(KC_BSPC), LALT(KC_BSPC), KC_BSPC,_______,                        _______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,
                                _______,_______,_______,        _______,_______,_______
    ),


        [_RESETLAGER] = LAYOUT(
        _______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,
        _______,_______,_______,_______,RESET,                          _______,_______,_______,_______,_______,
                                _______,_______,_______,        _______,_______,_______
    ),
       [_MOUSE] = LAYOUT(
        _______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,
        _______,KC_MS_BTN3,KC_MS_BTN2,KC_MS_BTN1,_______,                        _______,_______,_______,_______,_______,
        _______,_______,KC_MS_WH_DOWN,KC_MS_WH_UP,_______,                          _______,_______,_______,_______,_______,
                                _______,_______,_______,        _______,_______,_______
    ),

};

//     _____                                       _ 
//    / ____|                                      | |
//   | |     __ _ _ __  ___  __      _____  _ __ __| |
//   | |    / _` | '_ \/ __| \ \ /\ / / _ \| '__/ _` |
//   | |___| (_| | |_) \__ \  \ V  V / (_) | | | (_| |
//    \_____\__,_| .__/|___/   \_/\_/ \___/|_|  \__,_|
//               | |                                  
//               |_|                  

static bool caps_word_on = false;

void caps_word_enable(void) {
    caps_word_on = true;
}

void caps_word_disable(void) {
    caps_word_on = false;
    unregister_mods(MOD_LSFT);
}

void caps_word_process_user(uint16_t keycode, const keyrecord_t *record) {
    // Update caps word state
    if (caps_word_on) {
        // Get the base keycode of a mod or layer tap key
        switch (keycode) {
            case QK_MOD_TAP ... QK_MOD_TAP_MAX:
            case QK_LAYER_TAP ... QK_LAYER_TAP_MAX:
                // Earlier return if this has not been considered tapped yet
                if (record->tap.count == 0)
                    return;
                keycode = keycode & 0xFF;
                break;
            default:
                break;
        }
#define KC_AE KC_QUOT
#define KC_OE KC_SCLN
#define KC_AA KC_LBRC

        switch (keycode) {
            // Keycodes to shift
            case KC_A ... KC_Z:
                if (record->event.pressed)
                    register_mods(MOD_LSFT);
                else if (!record->tap.interrupted)
                    unregister_mods(MOD_LSFT);
            case KC_QUOT:
                if (record->event.pressed)
                    register_mods(MOD_LSFT);
                else if (!record->tap.interrupted)
                    unregister_mods(MOD_LSFT);
            case KC_SCLN:
                if (record->event.pressed)
                    register_mods(MOD_LSFT);
                else if (!record->tap.interrupted)
                    unregister_mods(MOD_LSFT);
            case KC_LBRC:        
                if (record->event.pressed)
                    register_mods(MOD_LSFT);
                else if (!record->tap.interrupted)
                    unregister_mods(MOD_LSFT);
            // Keycodes to ignore (don't disable caps word), but not to shift
            case KC_MINS:
            case KC_BSPC:
            case KC_UNDS:
            case CAPSWRD:
            case S(KC_SLSH):
                // If mod chording disable the mods
                if (record->event.pressed && (get_mods() != MOD_LSFT) && (get_mods() != 0)) {
                    caps_word_disable();
                }
                break;
            default:
                if (record->event.pressed)
                    caps_word_disable();
                break;
        }
    }
}








// ,--------.                     ,--.                     ,--.                                                       ,--.                    
// '--.  .--',--,--. ,---.  ,---. `--',--,--,  ,---.     ,-'  '-. ,---. ,--.--.,--,--,--.     ,---.  ,---. ,--.--.    |  |,-. ,---. ,--. ,--. 
//    |  |  ' ,-.  || .-. || .-. |,--.|      \| .-. |    '-.  .-'| .-. :|  .--'|        |    | .-. || .-. :|  .--'    |     /| .-. : \  '  / 
//    |  |  \ '-'  || '-' '| '-' '|  ||  ||  |' '-' '      |  |  \   --.|  |   |  |  |  |    | '-' '\   --.|  |       |  \  \\   --.  \   '   
//    `--'   `--`--'|  |-' |  |-' `--'`--''--'.`-  /       `--'   `----'`--'   `--`--`--'    |  |-'  `----'`--'       `--'`--'`----'.-'  /     
//                  `--'   `--'               `---'                                          `--'                                   `---'     

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(_NAV, KC_SPC):
            return TAPPING_TERM + 180;
        case LCTL_T(KC_K):
            return TAPPING_TERM + 310;
        case LALT_T(KC_R):
            return TAPPING_TERM + 310;
        case RCTL_T(KC_V):
            return TAPPING_TERM + 310;
        case RALT_T(KC_S):
            return TAPPING_TERM + 310;
        case LGUI_T(KC_N):
            return TAPPING_TERM + 70;
        case RGUI_T(KC_E):
            return TAPPING_TERM + 70; 
        case SYM_B:
            return TAPPING_TERM - 10;   
        default:
            return TAPPING_TERM;
    }
}




//  ,-----.                 ,--.                  
// '  .--./ ,---. ,--,--,--.|  |-.  ,---.  ,---.  
// |  |    | .-. ||        || .-. '| .-. |(  .-'  
// '  '--'\' '-' '|  |  |  || `-' |' '-' '.-'  `) 
//  `-----' `---' `--`--`--' `---'  `---' `----´  


enum combos { 
  N_T_KOMMA,
  HP_COPY,
  PD_PASTE,
  HD_CUT,
  RT_FIND,
  LM_NEXT,
  FM_PREVIOUS,
  EA_PUNKT,
  AAI_FRAG,
  OO_ESCAPE,
  OC_OCH,
  RESET_QZ,
  CAPSWORD_COMBO

};

const uint16_t PROGMEM n_t_combo[] = { LGUI_T(KC_N), LSFT_T(KC_T), COMBO_END};
const uint16_t PROGMEM copy_combo[] = {MUS_H, KC_P, COMBO_END};
const uint16_t PROGMEM paste_combo[] = {KC_P, KC_D, COMBO_END};
const uint16_t PROGMEM cut_combo[] = {MUS_H, KC_D, COMBO_END};
const uint16_t PROGMEM find_combo[] = {LALT_T(KC_R), LSFT_T(KC_T), COMBO_END};
const uint16_t PROGMEM next_combo[] = {KC_L, KC_M, COMBO_END};
const uint16_t PROGMEM previous_combo[] = {KC_F, KC_M, COMBO_END};
const uint16_t PROGMEM punkt_combo[] = {RGUI_T(KC_E), RSFT_T(KC_A), COMBO_END};
const uint16_t PROGMEM frag_combo[] = {MUS_I, KC_LBRC, COMBO_END};
const uint16_t PROGMEM komma_combo[] = {MUS_I, KC_U, COMBO_END};
const uint16_t PROGMEM escape_combo[] = {KC_O, KC_SCLN, COMBO_END};
const uint16_t PROGMEM och_combo[] = {KC_O, KC_C, COMBO_END};
const uint16_t PROGMEM reset_combo[] = {KC_Q, KC_Z, COMBO_END};
const uint16_t PROGMEM capsword_combo[] = {MUS_BS, S_SFT, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [N_T_KOMMA] = COMBO_ACTION(n_t_combo),
  [HP_COPY] = COMBO_ACTION(copy_combo),
  [PD_PASTE] = COMBO_ACTION(paste_combo),
  [HD_CUT] = COMBO_ACTION(cut_combo),
  [RT_FIND] = COMBO_ACTION(find_combo),
  [LM_NEXT] = COMBO_ACTION(next_combo),
  [FM_PREVIOUS] = COMBO_ACTION(previous_combo),
  [EA_PUNKT] = COMBO_ACTION(punkt_combo),  
  [AAI_FRAG] = COMBO_ACTION(frag_combo),     
  [OO_ESCAPE] = COMBO_ACTION(escape_combo),
  [OC_OCH] = COMBO_ACTION(och_combo),
  [RESET_QZ] = COMBO_ACTION(reset_combo),  
  [CAPSWORD_COMBO] = COMBO_ACTION(capsword_combo),   
};

void process_combo_event(uint16_t combo_index, bool pressed) {
  switch(combo_index) {
    case N_T_KOMMA:
      if (pressed) {
        caps_word_disable();
        tap_code16(LALT(KC_BSPC));
;
      }
      break;
    case HP_COPY:
      if (pressed) {
        tap_code16(LGUI(KC_C));
      }
      break;
    case PD_PASTE:
      if (pressed) {
        tap_code16(LGUI(KC_V));
      }
      break;
    case HD_CUT:
      if (pressed) {
        tap_code16(LGUI(KC_X));
      }
      break;
    case RT_FIND:
      if (pressed) {
        tap_code16(LGUI(KC_F));
      }
      break;
    case LM_NEXT:
      if (pressed) {
        tap_code16(LGUI(KC_G));
      }
      break;
    case FM_PREVIOUS:
      if (pressed) {
        tap_code16(SGUI(KC_G));
      }
      break;
    case EA_PUNKT:
      if (pressed) {
        clear_oneshot_mods();
        caps_word_disable();
        tap_code16(KC_DOT);
        tap_code16(KC_SPACE);
        set_oneshot_mods(MOD_LSFT);
      }
      else {
          layer_off(_BACKSPACE);
      }    
      break;
    case AAI_FRAG:
      if (pressed) {
        caps_word_disable();
        clear_oneshot_mods();
        tap_code16(KC_COMMA);
        tap_code16(KC_SPACE);
      } 
     break;          
     case OO_ESCAPE:
      if (pressed) {
        tap_code16(KC_ESC);
      }              
      break;
      case OC_OCH:
      if (pressed) {
        tap_code16(KC_O);
        tap_code16(KC_C);
        tap_code16(KC_H);
        tap_code16(KC_SPC);  
      }              
      break; 
     case RESET_QZ:
      if (pressed) {
        layer_on(_RESETLAGER);
      }
      else {
          layer_off(_RESETLAGER);
      }    
      break;
      case CAPSWORD_COMBO:
      if (pressed) {
        caps_word_enable();
      }              
      break;         
  }
}
/*
//   _____                                _             _                    _               _                      
//  |  __ \                              | |           | |                  (_)             | |                     
//  | |__) |__ _ __    ___ ___  _ __ ___ | |__   ___   | |_ __ _ _ __  _ __  _ _ __   __ _  | |_ ___ _ __ _ __ ___  
//  |  ___/ _ \ '__|  / __/ _ \| '_ ` _ \| '_ \ / _ \  | __/ _` | '_ \| '_ \| | '_ \ / _` | | __/ _ \ '__| '_ ` _ \ 
//  | |  |  __/ |    | (_| (_) | | | | | | |_) | (_) | | || (_| | |_) | |_) | | | | | (_| | | ||  __/ |  | | | | | |
//  |_|   \___|_|     \___\___/|_| |_| |_|_.__/ \___/   \__\__,_| .__/| .__/|_|_| |_|\__, |  \__\___|_|  |_| |_| |_|
//                                                              | |   | |             __/ |                         
//                                                              |_|   |_|            |___/                        
 */

uint16_t get_combo_term(uint16_t index, combo_t *combo) {
    if (KEYCODE_IS_MOD(combo->keycode)) {
        return COMBO_TERM;
    }

    switch (index) {
        case N_T_KOMMA:
            return 25;

    }
    switch (index) {
        case RT_FIND:
            return 35;

    }

    return COMBO_TERM;
}




// ,--------.                   ,---.                                                        ,--.                    
// '--.  .--',--,--. ,---.     /  .-' ,---. ,--.--. ,---. ,---.      ,---.  ,---. ,--.--.    |  |,-. ,---. ,--. ,--. 
//    |  |  ' ,-.  || .-. |    |  `-,| .-. ||  .--'| .--'| .-. :    | .-. || .-. :|  .--'    |     /| .-. : \  '  /  
//    |  |  \ '-'  || '-' '    |  .-'' '-' '|  |   \ `--.\   --.    | '-' '\   --.|  |       |  \  \\   --.  \   '   
//    `--'   `--`--'|  |-'     `--'   `---' `--'    `---' `----'    |  |-'  `----'`--'       `--'`--'`----'.-'  /    
//                  `--'                                            `--'                                   `---'     

bool get_tapping_force_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(_NAV, KC_SPC):
            return true;
        case LT(_SYM, KC_B):
            return true;
        default:
            return false;
    }
}


bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case SYM_B:
            return true;
        default:
            return false;
    }
}





// ,--.   ,--.                                    
// |   `.'   | ,--,--. ,---.,--.--. ,---.  ,---.  
// |  |'.'|  |' ,-.  || .--'|  .--'| .-. |(  .-'  
// |  |   |  |\ '-'  |\ `--.|  |   ' '-' '.-'  `) 
// `--'   `--' `--`--' `---'`--'    `---' `----'  
                                               

bool process_record_user(uint16_t keycode, keyrecord_t *record) {

  caps_word_process_user(keycode, record);


    
  switch (keycode) {

    case CAPSWRD:
      if (record->event.pressed) {
        caps_word_enable();
      }
      return false;

    case L_FRAG:
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LSFT) SS_TAP(X_MINS) SS_UP(X_LSFT));
      } else {
      }
      break;
          
    case L_CIT:
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LSFT) SS_DOWN(X_LALT) SS_TAP(X_2) SS_UP(X_LALT) SS_UP(X_LSFT));
      } else {
      }
      break;
          
    case L_CK:
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_C) SS_TAP(X_K));

      } else {
        layer_clear();
      }
      break;
          
    case L_KOL:
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LSFT) SS_TAP(X_DOT) SS_UP(X_LSFT));
      } else {
      }
      break;
          
    case L_SEM:
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LSFT) SS_TAP(X_COMM) SS_UP(X_LSFT));
      } else {
      }
      break;
          
    case L_TANK:
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_SLSH) SS_UP(X_LALT));
      } else {
      }
      break;
          
    case L_PAR1:
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LSFT) SS_TAP(X_8) SS_UP(X_LSFT));
      } else {
      }
      break;
          
    case L_PAR2:
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LSFT) SS_TAP(X_9) SS_UP(X_LSFT));
      } else {
      }
      break;
          
    case L_XDEL:
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LALT) SS_DOWN(X_BSPC));
      } else {
        SEND_STRING(SS_UP(X_BSPC) SS_UP(X_LALT));
      }
      break;
          
    case L_AP:
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LSFT) SS_DOWN(X_LALT) SS_TAP(X_NUHS) SS_UP(X_LALT) SS_UP(X_LSFT));
      } else {
      }
      break;
          
    case L_LIT:
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LGUI) SS_DOWN(X_LSFT) SS_TAP(X_F11) SS_UP(X_LSFT) SS_UP(X_LGUI)  SS_DELAY(380)    SS_TAP(X_ESC) SS_TAP(X_HOME) SS_DELAY(350) SS_DOWN(X_LGUI) SS_DOWN(X_C) SS_DELAY(50) SS_UP(X_C) SS_UP(X_LGUI) SS_DOWN(X_LALT) SS_TAP(X_F12) SS_UP(X_LALT) SS_DELAY(500) SS_DOWN(X_LGUI) SS_TAP(X_2) SS_TAP(X_L) SS_DELAY(100) SS_TAP(X_V)  SS_UP(X_LGUI) SS_TAP(X_ENT) SS_DOWN(X_LCTL) SS_TAP(X_TAB) SS_UP(X_LCTL) SS_DOWN(X_LGUI) SS_TAP(X_TAB) SS_DELAY(500) SS_UP(X_LGUI) SS_DELAY(500) SS_TAP(X_RIGHT) SS_DOWN(X_LGUI) SS_TAP(X_C) SS_UP(X_LGUI)  SS_TAP(X_RIGHT) SS_TAP(X_RIGHT) SS_TAP(X_RIGHT) SS_TAP(X_RIGHT) SS_TAP(X_RIGHT) SS_TAP(X_RIGHT) SS_TAP(X_RIGHT) SS_TAP(X_RIGHT) SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_DOWN(X_LGUI) SS_TAP(X_TAB) SS_DELAY(350) SS_UP(X_LGUI) SS_DELAY(450) SS_DOWN(X_LGUI) SS_TAP(X_L) SS_TAP(X_V)  SS_UP(X_LGUI) SS_TAP(X_ENT) SS_DOWN(X_LCTL) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_UP(X_LCTL));
      } else {
      }
      break;
          
    case L_IMP1:
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_ENT) SS_DELAY(350) SS_DOWN(X_LCTL) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_UP(X_LCTL) SS_DOWN(X_LSFT) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_UP(X_LSFT) SS_TAP(X_SPACE) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_SPACE) SS_DOWN(X_LGUI) SS_TAP(X_DOWN) SS_UP(X_LGUI) SS_TAP(X_UP) SS_TAP(X_UP) SS_TAP(X_UP) SS_TAP(X_UP) SS_TAP(X_UP) SS_TAP(X_UP) SS_TAP(X_UP) SS_TAP(X_SPACE) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_SPACE) SS_DELAY(150) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_SPACE) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_SPACE) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_SPACE) SS_DELAY(100) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_SPACE) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_SPACE) SS_DELAY(100) SS_TAP(X_ENTER) SS_DELAY(500) SS_DOWN(X_LCTL) SS_DOWN(X_LALT) SS_TAP(X_F2) SS_UP(X_LCTL) SS_UP(X_LALT) SS_DELAY(300) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_1) SS_TAP(X_7) SS_TAP(X_0) SS_DELAY(100) SS_TAP(X_ENTER) SS_DELAY(100) SS_TAP(X_DOWN));
      } else {
      }
      break;
          
    case L_IMP2:
        if (record->event.pressed) {
            SEND_STRING(SS_DOWN(X_LGUI) SS_DOWN(X_LSFT) SS_TAP(X_F11) SS_UP(X_LSFT) SS_UP(X_LGUI) SS_DELAY(500) SS_DOWN(X_LGUI) SS_TAP(X_N) SS_UP(X_LGUI) SS_DELAY(500) SS_DOWN(X_LALT) SS_DOWN(X_LCTL) SS_TAP(X_F1) SS_UP(X_LCTL) SS_UP(X_LALT) SS_DELAY(400) SS_TAP(X_ENT) SS_DELAY(500) SS_TAP(X_DOWN) SS_TAP(X_DOWN) SS_TAP(X_DOWN) SS_TAP(X_DOWN) SS_TAP(X_DOWN) SS_TAP(X_DOWN) SS_DOWN(X_LALT) SS_TAP(X_DOWN) SS_TAP(X_DOWN) SS_TAP(X_DOWN) SS_UP(X_LALT));
        } else {
        }
        break;

    case L_TYPE:
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_HOME) SS_TAP(X_RIGHT) SS_TAP(X_RIGHT) SS_TAP(X_RIGHT) SS_TAP(X_RIGHT));
      } else {
      }
      break;

    case L_TITLE:
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_HOME) SS_TAP(X_RIGHT) SS_TAP(X_RIGHT) SS_TAP(X_RIGHT) SS_TAP(X_RIGHT) SS_TAP(X_RIGHT) SS_TAP(X_RIGHT) SS_TAP(X_RIGHT) SS_TAP(X_RIGHT) SS_TAP(X_RIGHT) SS_TAP(X_RIGHT) SS_TAP(X_RIGHT) SS_TAP(X_RIGHT) SS_TAP(X_RIGHT));
      } else {
      }
      break;

    case L_PG:
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_HOME) SS_TAP(X_RIGHT) SS_TAP(X_RIGHT) SS_TAP(X_RIGHT) SS_TAP(X_RIGHT) SS_TAP(X_RIGHT) SS_TAP(X_RIGHT) SS_TAP(X_RIGHT) SS_TAP(X_RIGHT) SS_TAP(X_RIGHT) SS_TAP(X_RIGHT) SS_TAP(X_RIGHT) SS_TAP(X_RIGHT) SS_TAP(X_RIGHT) SS_TAP(X_RIGHT) SS_TAP(X_RIGHT) SS_TAP(X_RIGHT) SS_TAP(X_RIGHT) SS_TAP(X_RIGHT));
      } else {
      }
      break;

    case L_KONT:
        if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_HOME) SS_DELAY(350) SS_DOWN(X_LGUI) SS_DOWN(X_C) SS_DELAY(50) SS_UP(X_C) SS_UP(X_LGUI) SS_DOWN(X_LALT) SS_TAP(X_F12) SS_UP(X_LALT) SS_DELAY(700)  SS_DOWN(X_LGUI) SS_TAP(X_L) SS_DELAY(200) SS_TAP(X_V)  SS_UP(X_LGUI) SS_TAP(X_ENT) SS_DOWN(X_LGUI) SS_TAP(X_T) SS_UP(X_LGUI) SS_DELAY(200) SS_DOWN(X_LGUI) SS_TAP(X_TAB) SS_DELAY(100) SS_UP(X_LGUI) SS_DELAY(300) SS_TAP(X_DOWN) 
                        SS_DOWN(X_LGUI) SS_DOWN(X_C) SS_DELAY(50) SS_UP(X_C) SS_UP(X_LGUI) SS_DOWN(X_LGUI) SS_TAP(X_TAB) SS_UP(X_LGUI) SS_DELAY(500)  SS_DOWN(X_LGUI) SS_TAP(X_L) SS_DELAY(280) SS_TAP(X_V)  SS_UP(X_LGUI) SS_TAP(X_ENT) SS_DOWN(X_LGUI) SS_TAP(X_T) SS_DELAY(120)  SS_TAP(X_TAB) SS_DELAY(100) SS_UP(X_LGUI) SS_DELAY(400) SS_TAP(X_DOWN)
                        SS_DOWN(X_LGUI) SS_DOWN(X_C) SS_DELAY(50) SS_UP(X_C) SS_UP(X_LGUI) SS_DOWN(X_LGUI) SS_TAP(X_TAB) SS_UP(X_LGUI) SS_DELAY(500)  SS_DOWN(X_LGUI) SS_TAP(X_L) SS_DELAY(280) SS_TAP(X_V)  SS_UP(X_LGUI) SS_TAP(X_ENT) SS_DOWN(X_LGUI) SS_TAP(X_T) SS_DELAY(120)  SS_TAP(X_TAB) SS_DELAY(100) SS_UP(X_LGUI) SS_DELAY(400) SS_TAP(X_DOWN)
                        SS_DOWN(X_LGUI) SS_DOWN(X_C) SS_DELAY(50) SS_UP(X_C) SS_UP(X_LGUI) SS_DOWN(X_LGUI) SS_TAP(X_TAB) SS_UP(X_LGUI) SS_DELAY(500)  SS_DOWN(X_LGUI) SS_TAP(X_L) SS_DELAY(280) SS_TAP(X_V)  SS_UP(X_LGUI) SS_TAP(X_ENT) SS_DOWN(X_LGUI) SS_TAP(X_T) SS_DELAY(120)  SS_TAP(X_TAB) SS_DELAY(100) SS_UP(X_LGUI) SS_DELAY(400) SS_TAP(X_DOWN)
                        SS_DOWN(X_LGUI) SS_DOWN(X_C) SS_DELAY(50) SS_UP(X_C) SS_UP(X_LGUI) SS_DOWN(X_LGUI) SS_TAP(X_TAB) SS_UP(X_LGUI) SS_DELAY(500)  SS_DOWN(X_LGUI) SS_TAP(X_L) SS_DELAY(280) SS_TAP(X_V)  SS_UP(X_LGUI) SS_TAP(X_ENT) SS_DOWN(X_LGUI) SS_TAP(X_T) SS_DELAY(120)  SS_TAP(X_TAB) SS_DELAY(100) SS_UP(X_LGUI) SS_DELAY(400) SS_TAP(X_DOWN)
                        SS_DOWN(X_LGUI) SS_DOWN(X_C) SS_DELAY(50) SS_UP(X_C) SS_UP(X_LGUI) SS_DOWN(X_LGUI) SS_TAP(X_TAB) SS_UP(X_LGUI) SS_DELAY(500)  SS_DOWN(X_LGUI) SS_TAP(X_L) SS_DELAY(280) SS_TAP(X_V)  SS_UP(X_LGUI) SS_TAP(X_ENT) SS_DOWN(X_LGUI) SS_TAP(X_T) SS_DELAY(120)  SS_TAP(X_TAB) SS_DELAY(100) SS_UP(X_LGUI) SS_DELAY(400) SS_TAP(X_DOWN)
                        SS_DOWN(X_LGUI) SS_DOWN(X_C) SS_DELAY(50) SS_UP(X_C) SS_UP(X_LGUI) SS_DOWN(X_LGUI) SS_TAP(X_TAB) SS_UP(X_LGUI) SS_DELAY(500)  SS_DOWN(X_LGUI) SS_TAP(X_L) SS_DELAY(280) SS_TAP(X_V)  SS_UP(X_LGUI) SS_TAP(X_ENT) SS_DOWN(X_LGUI) SS_TAP(X_T) SS_DELAY(120)  SS_TAP(X_TAB) SS_DELAY(100) SS_UP(X_LGUI) SS_DELAY(400) SS_TAP(X_DOWN)
                        SS_DOWN(X_LGUI) SS_DOWN(X_C) SS_DELAY(50) SS_UP(X_C) SS_UP(X_LGUI) SS_DOWN(X_LGUI) SS_TAP(X_TAB) SS_UP(X_LGUI) SS_DELAY(500)  SS_DOWN(X_LGUI) SS_TAP(X_L) SS_DELAY(280) SS_TAP(X_V)  SS_UP(X_LGUI) SS_TAP(X_ENT) SS_DOWN(X_LGUI) SS_TAP(X_T) SS_DELAY(120)  SS_TAP(X_TAB) SS_DELAY(100) SS_UP(X_LGUI) SS_DELAY(400) SS_TAP(X_DOWN)
                        SS_DOWN(X_LGUI) SS_DOWN(X_C) SS_DELAY(50) SS_UP(X_C) SS_UP(X_LGUI) SS_DOWN(X_LGUI) SS_TAP(X_TAB) SS_UP(X_LGUI) SS_DELAY(500)  SS_DOWN(X_LGUI) SS_TAP(X_L) SS_DELAY(280) SS_TAP(X_V)  SS_UP(X_LGUI) SS_TAP(X_ENT) SS_DOWN(X_LGUI) SS_TAP(X_T) SS_DELAY(120)  SS_TAP(X_TAB) SS_DELAY(100) SS_UP(X_LGUI) SS_DELAY(400) SS_TAP(X_DOWN)
                        SS_DOWN(X_LGUI) SS_DOWN(X_C) SS_DELAY(50) SS_UP(X_C) SS_UP(X_LGUI) SS_DOWN(X_LGUI) SS_TAP(X_TAB) SS_UP(X_LGUI) SS_DELAY(500)  SS_DOWN(X_LGUI) SS_TAP(X_L) SS_DELAY(280) SS_TAP(X_V)  SS_UP(X_LGUI) SS_TAP(X_ENT) SS_DOWN(X_LGUI) SS_TAP(X_T) SS_DELAY(120)  SS_TAP(X_TAB) SS_DELAY(100) SS_UP(X_LGUI) SS_DELAY(400) SS_TAP(X_DOWN)
                        SS_DOWN(X_LGUI) SS_DOWN(X_C) SS_DELAY(50) SS_UP(X_C) SS_UP(X_LGUI) SS_DOWN(X_LGUI) SS_TAP(X_TAB) SS_UP(X_LGUI) SS_DELAY(500)  SS_DOWN(X_LGUI) SS_TAP(X_L) SS_DELAY(280) SS_TAP(X_V)  SS_UP(X_LGUI) SS_TAP(X_ENT) SS_DOWN(X_LGUI) SS_TAP(X_T) SS_DELAY(120)  SS_TAP(X_TAB) SS_DELAY(100) SS_UP(X_LGUI) SS_DELAY(400) SS_TAP(X_DOWN)
                        SS_DOWN(X_LGUI) SS_DOWN(X_C) SS_DELAY(50) SS_UP(X_C) SS_UP(X_LGUI) SS_DOWN(X_LGUI) SS_TAP(X_TAB) SS_UP(X_LGUI) SS_DELAY(500)  SS_DOWN(X_LGUI) SS_TAP(X_L) SS_DELAY(280) SS_TAP(X_V)  SS_UP(X_LGUI) SS_TAP(X_ENT) SS_DOWN(X_LGUI) SS_TAP(X_T) SS_DELAY(120)  SS_TAP(X_TAB) SS_DELAY(100) SS_UP(X_LGUI) SS_DELAY(400) SS_TAP(X_DOWN)
                        SS_DOWN(X_LGUI) SS_DOWN(X_C) SS_DELAY(50) SS_UP(X_C) SS_UP(X_LGUI) SS_DOWN(X_LGUI) SS_TAP(X_TAB) SS_UP(X_LGUI) SS_DELAY(500)  SS_DOWN(X_LGUI) SS_TAP(X_L) SS_DELAY(280) SS_TAP(X_V)  SS_UP(X_LGUI) SS_TAP(X_ENT) SS_DOWN(X_LGUI) SS_TAP(X_T) SS_DELAY(120)  SS_TAP(X_TAB) SS_DELAY(100) SS_UP(X_LGUI) SS_DELAY(400) SS_TAP(X_DOWN)
                        SS_DOWN(X_LGUI) SS_DOWN(X_C) SS_DELAY(50) SS_UP(X_C) SS_UP(X_LGUI) SS_DOWN(X_LGUI) SS_TAP(X_TAB) SS_UP(X_LGUI) SS_DELAY(500)  SS_DOWN(X_LGUI) SS_TAP(X_L) SS_DELAY(280) SS_TAP(X_V)  SS_UP(X_LGUI) SS_TAP(X_ENT) SS_DOWN(X_LGUI) SS_TAP(X_T) SS_DELAY(120)  SS_TAP(X_TAB) SS_DELAY(100) SS_UP(X_LGUI) SS_DELAY(400) SS_TAP(X_DOWN)
                        SS_DOWN(X_LGUI) SS_DOWN(X_C) SS_DELAY(50) SS_UP(X_C) SS_UP(X_LGUI) SS_DOWN(X_LGUI) SS_TAP(X_TAB) SS_UP(X_LGUI) SS_DELAY(500)  SS_DOWN(X_LGUI) SS_TAP(X_L) SS_DELAY(280) SS_TAP(X_V)  SS_UP(X_LGUI) SS_TAP(X_ENT) SS_DOWN(X_LGUI) SS_TAP(X_T) SS_DELAY(120)  SS_TAP(X_TAB) SS_DELAY(100) SS_UP(X_LGUI) SS_DELAY(400) SS_TAP(X_DOWN)
                        SS_DOWN(X_LGUI) SS_DOWN(X_C) SS_DELAY(50) SS_UP(X_C) SS_UP(X_LGUI) SS_DOWN(X_LGUI) SS_TAP(X_TAB) SS_UP(X_LGUI) SS_DELAY(500)  SS_DOWN(X_LGUI) SS_TAP(X_L) SS_DELAY(280) SS_TAP(X_V)  SS_UP(X_LGUI) SS_TAP(X_ENT) SS_DOWN(X_LGUI) SS_TAP(X_T) SS_DELAY(120)  SS_TAP(X_TAB) SS_DELAY(100) SS_UP(X_LGUI) SS_DELAY(400) SS_TAP(X_DOWN)
                        SS_DOWN(X_LGUI) SS_DOWN(X_C) SS_DELAY(50) SS_UP(X_C) SS_UP(X_LGUI) SS_DOWN(X_LGUI) SS_TAP(X_TAB) SS_UP(X_LGUI) SS_DELAY(500)  SS_DOWN(X_LGUI) SS_TAP(X_L) SS_DELAY(280) SS_TAP(X_V)  SS_UP(X_LGUI) SS_TAP(X_ENT) SS_DOWN(X_LGUI) SS_TAP(X_T) SS_DELAY(120)  SS_TAP(X_TAB) SS_DELAY(100) SS_UP(X_LGUI) SS_DELAY(400) SS_TAP(X_DOWN)
                        SS_DOWN(X_LGUI) SS_DOWN(X_C) SS_DELAY(50) SS_UP(X_C) SS_UP(X_LGUI) SS_DOWN(X_LGUI) SS_TAP(X_TAB) SS_UP(X_LGUI) SS_DELAY(500)  SS_DOWN(X_LGUI) SS_TAP(X_L) SS_DELAY(280) SS_TAP(X_V)  SS_UP(X_LGUI) SS_TAP(X_ENT) SS_DOWN(X_LGUI) SS_TAP(X_T) SS_DELAY(120)  SS_TAP(X_TAB) SS_DELAY(100) SS_UP(X_LGUI) SS_DELAY(400) SS_TAP(X_DOWN)
                        SS_DOWN(X_LGUI) SS_DOWN(X_C) SS_DELAY(50) SS_UP(X_C) SS_UP(X_LGUI) SS_DOWN(X_LGUI) SS_TAP(X_TAB) SS_UP(X_LGUI) SS_DELAY(500)  SS_DOWN(X_LGUI) SS_TAP(X_L) SS_DELAY(280) SS_TAP(X_V)  SS_UP(X_LGUI) SS_TAP(X_ENT) SS_DOWN(X_LGUI) SS_TAP(X_T) SS_DELAY(120)  SS_TAP(X_TAB) SS_DELAY(100) SS_UP(X_LGUI) SS_DELAY(400) SS_TAP(X_DOWN)
                        SS_DOWN(X_LGUI) SS_DOWN(X_C) SS_DELAY(50) SS_UP(X_C) SS_UP(X_LGUI) SS_DOWN(X_LGUI) SS_TAP(X_TAB) SS_UP(X_LGUI) SS_DELAY(500)  SS_DOWN(X_LGUI) SS_TAP(X_L) SS_DELAY(280) SS_TAP(X_V)  SS_UP(X_LGUI) SS_TAP(X_ENT) SS_DOWN(X_LGUI) SS_TAP(X_T) SS_DELAY(120)  SS_TAP(X_TAB) SS_DELAY(100) SS_UP(X_LGUI) SS_DELAY(400) SS_TAP(X_DOWN)
                        SS_DOWN(X_LGUI) SS_DOWN(X_C) SS_DELAY(50) SS_UP(X_C) SS_UP(X_LGUI) SS_DOWN(X_LGUI) SS_TAP(X_TAB) SS_UP(X_LGUI) SS_DELAY(500)  SS_DOWN(X_LGUI) SS_TAP(X_L) SS_DELAY(280) SS_TAP(X_V)  SS_UP(X_LGUI) SS_TAP(X_ENT) SS_DOWN(X_LGUI) SS_TAP(X_T) SS_DELAY(120)  SS_TAP(X_TAB) SS_DELAY(100) SS_UP(X_LGUI) SS_DELAY(400) SS_TAP(X_DOWN)
                        SS_DOWN(X_LGUI) SS_DOWN(X_C) SS_DELAY(50) SS_UP(X_C) SS_UP(X_LGUI) SS_DOWN(X_LGUI) SS_TAP(X_TAB) SS_UP(X_LGUI) SS_DELAY(500)  SS_DOWN(X_LGUI) SS_TAP(X_L) SS_DELAY(280) SS_TAP(X_V)  SS_UP(X_LGUI) SS_TAP(X_ENT) SS_DOWN(X_LGUI) SS_TAP(X_T) SS_DELAY(120)  SS_TAP(X_TAB) SS_DELAY(100) SS_UP(X_LGUI) SS_DELAY(400) SS_TAP(X_DOWN)
                        SS_DOWN(X_LGUI) SS_DOWN(X_C) SS_DELAY(50) SS_UP(X_C) SS_UP(X_LGUI) SS_DOWN(X_LGUI) SS_TAP(X_TAB) SS_UP(X_LGUI) SS_DELAY(500)  SS_DOWN(X_LGUI) SS_TAP(X_L) SS_DELAY(280) SS_TAP(X_V)  SS_UP(X_LGUI) SS_TAP(X_ENT) SS_DOWN(X_LGUI) SS_TAP(X_T) SS_DELAY(120)  SS_TAP(X_TAB) SS_DELAY(100) SS_UP(X_LGUI) SS_DELAY(400) SS_TAP(X_DOWN)
                        SS_DOWN(X_LGUI) SS_DOWN(X_C) SS_DELAY(50) SS_UP(X_C) SS_UP(X_LGUI) SS_DOWN(X_LGUI) SS_TAP(X_TAB) SS_UP(X_LGUI) SS_DELAY(500)  SS_DOWN(X_LGUI) SS_TAP(X_L) SS_DELAY(280) SS_TAP(X_V)  SS_UP(X_LGUI) SS_TAP(X_ENT) SS_DOWN(X_LGUI) SS_TAP(X_T) SS_DELAY(120)  SS_TAP(X_TAB) SS_DELAY(100) SS_UP(X_LGUI) SS_DELAY(400) SS_TAP(X_DOWN)
                        SS_DOWN(X_LGUI) SS_DOWN(X_C) SS_DELAY(50) SS_UP(X_C) SS_UP(X_LGUI) SS_DOWN(X_LGUI) SS_TAP(X_TAB) SS_UP(X_LGUI) SS_DELAY(500)  SS_DOWN(X_LGUI) SS_TAP(X_L) SS_DELAY(280) SS_TAP(X_V)  SS_UP(X_LGUI) SS_TAP(X_ENT) SS_DOWN(X_LGUI) SS_TAP(X_T) SS_DELAY(120)  SS_TAP(X_TAB) SS_DELAY(100) SS_UP(X_LGUI) SS_DELAY(400) SS_TAP(X_DOWN)
                        
                            
            ); 
        } else {
        }
        break;         

          
  }
  return true;
}