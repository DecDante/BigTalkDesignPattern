#include "Secretary.h"
#include "StockObserver.h"

int main()
{
  Secretary tongzizhe;
  StockObserver tongshi1("魏关姹", &tongzizhe);
  StockObserver tongshi2("易管查", &tongzizhe);

  tongzizhe.Attach(&tongshi1);
  tongzizhe.Attach(&tongshi2);

  tongzizhe.SetSecretaryAction("老板回来了！");
  tongzizhe.Notify();

  return 0;
}