#pragma once

#include <QString>

#include "Animal.h"

class Dog: public Animal
{
public:
  Dog();
  Dog(const QString &name);

  virtual const QString GetShoutSound() const override;
};