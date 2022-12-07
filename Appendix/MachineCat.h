#pragma once

#include "Cat.h"
#include "IChange.h"

class MachineCat : public Cat, public IChange
{
public:
  MachineCat();
  MachineCat(const QString& name);

  virtual const QString ChangeThing(const QString& thing) override;
};