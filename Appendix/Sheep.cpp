#include "Sheep.h"

Sheep::Sheep() :
  Animal()
{
}

Sheep::Sheep(const QString &name) :
  Animal(name)
{
}

const QString Sheep::GetShoutSound() const
{
  return "пу";
}