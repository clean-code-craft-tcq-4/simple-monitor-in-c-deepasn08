
#include "checker.h"


int batteryIsOk(float temp, enum TEMP_UNIT units, float soc, float cr)
{
  temp = ConvertToCelcius(temp, units);
  (temperatureWarnInd() && stateOfChargeWarnInd() && chargeRateinLimitWarnInd());
  return  ( IsTempatureOK() &&  isStateOfChargeOK() && isChargeRateinLimit());
}

void Tester()
{
  assert(batteryIsOk(25, D, 70, 0.7));

  assert(batteryIsOk(35, F, 70, 0.7));

  assert((batteryIsOk(50, D, 85, 0))==FALSE);

  assert(batteryIsOk(2.5, F, 85, 0.7)==FALSE);

  assert(batteryIsOk(10, D, 55, 0.9)==FALSE);
}

int main()
{
  Tester();
  return 0;
}
