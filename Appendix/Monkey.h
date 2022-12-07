#pragma once

#include "Animal.h"

class Monkey : public Animal
{
public:
  Monkey();
  Monkey(const QString& name);

  virtual const QString GetShoutSound() const override;
};