#pragma once

#include "CashSuper.h"

class CashNormal : public CashSuper
{
public:
  virtual double AcceptCash(double money) override;
};