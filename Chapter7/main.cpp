#include "SchoolGirl.h"
#include "Proxy.h"

int main()
{
  SchoolGirl lijiaojiao;
  lijiaojiao.SetName("¿ÓΩøΩø");
  Proxy daili(&lijiaojiao);

  daili.GiveDolls();
  daili.GiveFlowers();
  daili.GiveChocolate();
}