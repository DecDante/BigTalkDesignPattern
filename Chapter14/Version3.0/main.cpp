#include "Subject.h"
#include "Boss.h"
#include "Secretary.h"
#include "StockObserver.h"
#include "NBAObserver.h"
#include "IUpdate.h"

int main()
{
  Boss huhansan;

  StockObserver tongshi1("κ���", &huhansan);
  NBAObserver tongshi2("�׹ܲ�", &huhansan);

  Update<StockObserver> close_stock(&tongshi1, &StockObserver::CloseStockMarket);
  Update<NBAObserver> close_nba(&tongshi2, &NBAObserver::CloseNBADirectSeeding);

  huhansan.GetEventHandler().push_back(&close_stock);
  huhansan.GetEventHandler().push_back(&close_nba);

  huhansan.SetSubjectState("�Һ�������������");
  huhansan.Notify();

  return 0;
}