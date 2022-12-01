#include "CashRebate.h"

CashRebate::CashRebate(double money_rebate)
  :m_MoneyRebate(money_rebate)
{
}

double CashRebate::AcceptCash(double money)
{
  return money * m_MoneyRebate;
}