
#include "checker.h"

void IsTempatureOK(float temprature){
  checkValueRange(temperature, TempMAX, TempMIN);
}

void isStateOfChargeOK(float soc)
{
  checkValueRange(soc, SOCMAX, SOCMIN);
}

void isChargeRateOK(float chargeRate)
{
  checkChargeRate( chargeRate);
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
  IsTempatureOK(temperature) && IsSOCOK(soc) && IsChangeRateOK(chargeRate);
}

void Tester();
{
  assert(batteryIsOk(25, 70, 0.7));
  assert((batteryIsOk(50, 85, 0))==FALSE);
}

void main()
{
  Tester();
}
