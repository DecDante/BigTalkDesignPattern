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
  return QString(Cat::Shout()).append(" 我有万能的口袋，我可变出：").append(thing);
}