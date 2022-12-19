#include "Subject.h"
#include "Boss.h"
#include "Secretary.h"
#include "StockObserver.h"
#include "NBAObserver.h"
#include "IUpdate.h"

int main()
{
  Boss huhansan;

  StockObserver tongshi1("魏关姹", &huhansan);
  NBAObserver tongshi2("易管查", &huhansan);

  Update<StockObserver> close_stock(&tongshi1, &StockObserver::CloseStockMarket);
  Update<NBAObserver> close_nba(&tongshi2, &NBAObserver::CloseNBADirectSeeding);

  huhansan.GetEventHandler().push_back(&close_stock);
  huhansan.GetEventHandler().push_back(&close_nba);

  huhansan.SetSubjectState("我胡汉三回来啦！");
  huhansan.Notify();

  return 0;
}