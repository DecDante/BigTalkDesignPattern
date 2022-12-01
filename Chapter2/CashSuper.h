#pragma once

class CashSuper
{
public:
  CashSuper() {}
  virtual ~CashSuper() {}

  virtual double AcceptCash(double money) = 0;

protected:
  CashSuper::CashSuper(const CashSuper&);
  const CashSuper& operator=(const CashSuper&);
};