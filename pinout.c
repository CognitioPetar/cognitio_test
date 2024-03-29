
// Output definitions
// test
#define LED2        LATBbits.LATB10	
#define LED1        LATFbits.LATF7
#define BAT2_EN     LATDbits.LATD14
#define BAT1_EN     LATEbits.LATE15
#define CHARGE_OFF  LATAbits.LATA11
#define RCOIL_CTRL  LATDbits.LATD15
#define RIGHT_FRONT_LIGHTS_HIGH_BEAM    LATGbits.LATG11
#define LEFT_FRONT_LIGHTS_HIGH_BEAM     LATFbits.LATF13
#define RIGHT_FRONT_LIGHTS_DRIVING_BEAM LATFbits.LATF13
#define LEFT_FRONT_LIGHTS_DRIVING_BEAM  LATEbits.LATE12
#define RIGHT_FRONT_LIGHTS_LOW_BEAM LATEbits.LATE13
#define LEFT_FRONT_LIGHTS_LOW_BEAM  LATEbits.LATE14
#define SPARE2  LATAbits.LATA9
#define SPARE1  LATCbits.LATC3
#define HORN    LATEbits.LATE1
#define REGISTRATION    LATEbits.LATE1
#define RIGHT_REAR_LIGHT_POSITION_LAMP  LATCbits.LATC4
#define LEFT_REAR_LIGHT_POSITION_LAMP   LATCbits.LATC5
#define RIGHT_REAR_LIGHT_DIRECTION_INDICATOR    LATGbits.LATG2
#define LEFT_REAR_LIGHT_DIRECTION_INDICATOR     LATGbits.LATG3
#define RIGHT_REAR_LIGHT_STOP   LATFbits.LATF4
#define LEFT_REAR_LIGHT_STOP_LAMP   LATFbits.LATF5
#define TEST3 test3


// Input definitions

#define     DIMMER_SWITCH_1     PORTCbits.RC0
#define     DIMMER_SWITCH_2     PORTCbits.RC1
#define     EMERGENCY_SWITCH    PORTCbits.RC2
#define     LIGHTING_SWITCH_4   PORTCbits.RC11
#define     OVERTAKING_SWITCH   PORTAbits.RA12
#define     STEERING_SWITCH_2   PORTEbits.RE9
#define     STEERING_SWITCH_1   PORTEbits.RE8
#define     HORN_SWITCH         PORTGbits.RG10
#define     LIGHTING_SWITCH_3   PORTGbits.RG9
#define     TURN_ON_KEY_RED     PORTGbits.RG8
#define     LIGHTING_SWITCH_2   PORTGbits.RG7
#define     TURN_ON_KEY_BLACK   PORTGbits.RG6
#define     BRAKE               PORTGbits.RG15
#define     LIGHTING_SWITCH_1   PORTDbits.RD4
#define     THROTTLE_S          PORTDbits.RD3
#define     FLAMEOUT_SWITCH     PORTDbits.RD2
#define     THROTTLE_P          PORTDbits.RD1
#define     BRAKE_SWITCH        PORTAbits.RA10
#define     START_SWITCH        PORTAbits.RA7
#define     CLUTCH_SWITCH       PORTBbits.RB12
#define     THROTTLE_R          PORTBbits.RB13
