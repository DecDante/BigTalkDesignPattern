#pragma once

#include <QString>

#include "Animal.h"

class Cat: public Animal
{
public:
  Cat();
  Cat(const QString &name);

  virtual const QString GetShoutSound() const override;
};