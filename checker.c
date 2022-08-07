
#include "checker.h"

int batteryIsOk(float temp, enum TEMP_UNIT units, float soc, float cr)
{
  temp = ConvertToCelcius(temp, units);
  temperatureWarnInd();
  stateOfChargeWarnInd();
  chargeRateinLimitWarnInd();
  return  ( IsTempatureOK() &&  isStateOfChargeOK() && isChargeRateinLimit());
}

int main()
{
  Tester();
  return 0;
}
