#include "MachineCat.h"

MachineCat::MachineCat() :
  Cat()
{
}

MachineCat::MachineCat(const QString &name) :
  Cat(name)
{
}

const QString MachineCat::ChangeThing(const QString& thing)
{
  return QString(Cat::Shout()).append(" �������ܵĿڴ����ҿɱ����").append(thing);
}