#include "Subject.h"
#include "Observer.h"
#include "Boss.h"
#include "Secretary.h"
#include "StockObserver.h"
#include "NBAObserver.h"

int main()
{
  Boss huhansan;

  StockObserver tongshi1("κ���", &huhansan);
  NBAObserver tongshi2("�׹ܲ�", &huhansan);

  huhansan.Attach(&tongshi1);
  huhansan.Attach(&tongshi2);

  huhansan.Detach(&tongshi1);

  huhansan.SetSubjectState("�Һ�������������");
  huhansan.Notify();

  return 0;
}