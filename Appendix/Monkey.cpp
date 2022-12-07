#include "Monkey.h"

Monkey::Monkey() :
  Animal()
{
}

Monkey::Monkey(const QString &name) :
  Animal(name)
{
}

const QString Monkey::GetShoutSound() const
{
  return "֨吱";
}
