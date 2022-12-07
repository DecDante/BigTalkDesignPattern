#pragma once

#include "Animal.h"

class Sheep : public Animal
{
public:
  Sheep();
  Sheep(const QString& name);

  virtual const QString GetShoutSound() const override;
};