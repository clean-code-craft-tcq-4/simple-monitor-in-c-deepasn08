#include <stdio.h>
#include <assert.h>

#define TempMAX 45
#define TempMIN 0
#define SOCMAX 80
#define SOCMIN 20
#define ChangeRateMIN 0.0
#define ChangeRateMAX 0.8
#define TRUE 1
#define FALSE 0
#define TOLORENCELIMIT (5/100)
enum TEMP_UNIT {D ,F};

#define temperatureWarnInd() WarningIndicator(temp, TempMAX, TempMIN, "temperature")
#define stateOfChargeWarnInd() WarningIndicator(soc, SOCMAX, SOCMIN, "Stateofcharge")
#define chargeRateinLimitWarnInd() WarningIndicator(cr, ChangeRateMAX, ChangeRateMIN, "ChargeRate")


#define IsTempatureOK() checkValueRange(temp, TempMAX, TempMIN, "temperature")
#define isStateOfChargeOK() checkValueRange(soc, SOCMAX, SOCMIN, "Stateofcharge")
#define isChargeRateinLimit() checkValueRange(cr, ChangeRateMAX, ChangeRateMIN, "ChargeRate")

int WarningIndicator (float value,float Max, float Min, char* paramter);
int checkValueRange(float value, float Max, float Min, char* paramter);
int batteryIsOk(float temperature,enum TEMP_UNIT units, float soc, float chargeRate);

