#define Kp 0.04
#define Kd 0.3
#define rightMaxSpeed  200
#define leftMaxSpeed   200
#define rightBaseSpeed 150
#define leftBaseSpeed  150
#define NUM_SENSORS      8
#define TIMEOUT       2500
int error = 0;

int box = 0;

Button button(52);

#define R 43
#define G 44
#define B 45

#define PWM0A   11
#define PWM0B   12
#define DIRA    23
#define DIRB    22

int lastError = 0;
int x, y = 0;

QTRSensorsRC qtrrc((unsigned char[]) {
  3, 4, 5, 6, 7, 8, 9, 10
} , NUM_SENSORS, TIMEOUT, QTR_NO_EMITTER_PIN);

#define psa 44
#define psb 45
unsigned int a = 0;
unsigned int b = 0;

unsigned int sensorValues[NUM_SENSORS];
unsigned int ps[NUM_SENSORS];
unsigned int s[NUM_SENSORS];

unsigned long sTime = 0;
unsigned long l, r, u;

unsigned char found_Left = 0;
unsigned char found_Straight = 0;
unsigned char found_Right = 0;
unsigned char found_Back = 0;

