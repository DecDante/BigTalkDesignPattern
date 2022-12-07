#pragma once

#include "Monkey.h"
#include "IChange.h"

class StoneMonkey : public Monkey, public IChange
{
public:
  StoneMonkey();
  StoneMonkey(const QString& name);

  virtual const QString ChangeThing(const QString& thing) override;
};