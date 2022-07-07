
#include "checker.h"

int IsTempatureOK(float temprature){
  checkValueRange(temprature, TempMAX, TempMIN);
}

int isStateOfChargeOK(float soc)
{
  checkValueRange(soc, SOCMAX, SOCMIN);
}

int isChargeRateOK(float chargeRate)
{
  checkChargeRateLimit( chargeRate);
}

int checkValueRange(float value, float MAX, float MIN)
{
  if (value < MIN || value > MAX)
  {
    printf("Temperature out of range!\n");
    return FALSE;
  }
  else
    return TRUE;
}

int checkChargeRateLimit(float value)
{
  if (value > ChangeRate)
  {
    printf("Charge Rate out of range!\n");
    return FALSE;
  }
  else return TRUE;
}

int batteryIsOk(float temperature, float soc, float chargeRate)
{
return  ( IsTempatureOK(temperature)) && ( isStateOfChargeOK(soc)) && (isChargeRateOK(chargeRate));
}

void Tester()
{
  assert(batteryIsOk(25, 70, 0.7));
  assert((batteryIsOk(50, 85, 0))==FALSE);
}

int main()
{
  Tester();
  return 0;
}
