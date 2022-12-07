#include "Dog.h"

Dog::Dog():
  Animal()
{
}

Dog::Dog(const QString &name):
  Animal(name)
{
}

const QString Dog::GetShoutSound() const
{
  return "Íô";
}