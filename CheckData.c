#include "checker.h"

float ConvertToCelcius(float temp,  enum TEMP_UNIT units)
{
  if (units == 0)
  return temp;
  else
  return ((temp - 32) * 5 / 9);
}
  

int checkValueRange(float value, float MAX, float MIN, char* paramter)
{
  if (value < MIN || value > MAX)
  {
    printf("%f value %s out of range!\n", value,paramter);
    return OUTOFRANGE;
  }
  else
    return INRANGE;
}

int WarningIndicator (float value,float Max, float Min, char* paramter)
{
  float tolorace;
  tolorace = value * TOLORENCELIMIT;
  if (value <= Min+tolorace)
  printf ("%f value %s LOW warining\n",value,paramter);
  else if (value >= Max-tolorace)
  printf ("%f value %s HIGH warining\n",value,paramter);
  return 0;
}
