#pragma once

#include "CashSuper.h"

class CashReturn : public CashSuper
{
public:
  CashReturn(double money_condition, double money_return);

  virtual double AcceptCash(double money) override;

protected:
  double m_MoneyCondition;
  double m_MoneyReturn;
};
