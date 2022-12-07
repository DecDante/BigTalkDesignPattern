#include "Cattle.h"

Cattle::Cattle() :
  Animal()
{
}

Cattle::Cattle(const QString &name) :
  Animal(name)
{
}

const QString Cattle::GetShoutSound() const
{
  return "哞";
}
