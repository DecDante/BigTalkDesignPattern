#include "SchoolGirl.h"
#include "Proxy.h"

int main()
{
  SchoolGirl lijiaojiao;
  lijiaojiao.SetName("李娇娇");
  Proxy daili(&lijiaojiao);

  daili.GiveDolls();
  daili.GiveFlowers();
  daili.GiveChocolate();
}
