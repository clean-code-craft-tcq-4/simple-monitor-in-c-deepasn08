#include "checker.h"

void Tester()
{
  assert(batteryIsOk(25, D, 70, 0.7));
  assert(batteryIsOk(35, F, 70, 0.7));
  assert((batteryIsOk(50, D, 85, 0))==FALSE);
  assert(batteryIsOk(2.5, F, 85, 0.7)==FALSE);
  assert(batteryIsOk(10, D, 55, 0.9)==FALSE);
}
