#pragma once

#include "Animal.h"

class Cattle : public Animal
{
public:
  Cattle();
  Cattle(const QString& name);

  virtual const QString GetShoutSound() const override;
};