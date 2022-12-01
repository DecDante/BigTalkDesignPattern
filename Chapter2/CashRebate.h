#pragma once

#include "CashSuper.h"

class CashRebate : public CashSuper
{
public:
  CashRebate(double money_rebate);

  virtual double AcceptCash(double money) override;

protected:
  double m_MoneyRebate;
}; 
