#include "Fund.h"
#include "Stocks.h"

Fund::Fund()
  :m_pGu1(new Stock1()),
  m_pGu2(new Stock2()),
  m_pGu3(new Stock3()),
  m_pNd1(new NationalDebt1()),
  m_pRt1(new Realty1())
{}

Fund::~Fund()
{
  delete m_pGu1;
  delete m_pGu2;
  delete m_pGu3;
  delete m_pNd1;
  delete m_pRt1;
}

void Fund::BuyFund()
{
  m_pGu1->Buy();
  m_pGu2->Buy();
  m_pGu3->Buy();
  m_pNd1->Buy();
  m_pRt1->Buy();
}

void Fund::SellFund()
{
  m_pGu1->Sell();
  m_pGu2->Sell();
  m_pGu3->Sell();
  m_pNd1->Sell();
  m_pRt1->Sell();
}