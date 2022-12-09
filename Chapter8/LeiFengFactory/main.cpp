#include "IFactory.h"
#include "LeiFeng.h"
#include "UndergraduateFactory.h"
#include "VolunteerFactory.h"

int main()
{
  IFactory* factory = new VolunteerFactory();
  LeiFeng* student = factory->CreateLeiFeng();

  student->Sweep();
  student->Wash();
  student->BuyRice();

  return 0;
}