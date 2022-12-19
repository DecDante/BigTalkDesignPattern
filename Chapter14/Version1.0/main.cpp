#include "Secretary.h"
#include "StockObserver.h"

int main()
{
  Secretary tongzizhe;
  StockObserver tongshi1("κ���", &tongzizhe);
  StockObserver tongshi2("�׹ܲ�", &tongzizhe);

  tongzizhe.Attach(&tongshi1);
  tongzizhe.Attach(&tongshi2);

  tongzizhe.SetSecretaryAction("�ϰ�����ˣ�");
  tongzizhe.Notify();

  return 0;
}