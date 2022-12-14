#pragma once

class Stock1;
class Stock2;
class Stock3;
class NationalDebt1;
class Realty1;

class Fund
{
public:
  Fund();
  ~Fund();
  void BuyFund();
  void SellFund();

private:
  Stock1* m_pGu1;
  Stock2* m_pGu2;
  Stock3* m_pGu3;
  NationalDebt1* m_pNd1;
  Realty1* m_pRt1;
};