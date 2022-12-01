#include "CashReturn.h"

#include <cmath>

CashReturn::CashReturn(double money_condition, double money_return)
  :m_MoneyCondition(money_condition),
  m_MoneyReturn(money_return)
{
}

double CashReturn::AcceptCash(double money)
{
  double result = 0;
  if (money >= m_MoneyCondition)
    result = money - std::floor(money / m_MoneyCondition) * m_MoneyReturn;
  return result;
}