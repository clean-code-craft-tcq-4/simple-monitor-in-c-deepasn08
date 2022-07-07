#include <stdio.h>
#include <assert.h>

#define TempMAX 45
#define TempMIN 0
#define SOCMAX 80
#define SOCMIN 20
#define ChangeRate 0.8
#define TRUE 1
#define FALSE 0

int IsTempatureOK(float temprature);
int isStateOfChargeOK(float soc);
int checkValueRange(float value,float tempMax, float tempMin);
int checkChargeRateLimit(float value);
int batteryIsOk(float temperature, float soc, float chargeRate);

