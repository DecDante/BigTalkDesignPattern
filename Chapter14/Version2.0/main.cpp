#include "Subject.h"
#include "Observer.h"
#include "Boss.h"
#include "Secretary.h"
#include "StockObserver.h"
#include "NBAObserver.h"

int main()
{
  Boss huhansan;

  StockObserver tongshi1("魏关姹", &huhansan);
  NBAObserver tongshi2("易管查", &huhansan);

  huhansan.Attach(&tongshi1);
  huhansan.Attach(&tongshi2);

  huhansan.Detach(&tongshi1);

  huhansan.SetSubjectState("我胡汉三回来啦！");
  huhansan.Notify();

  return 0;
}