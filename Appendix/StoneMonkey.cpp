#include "StoneMonkey.h"

StoneMonkey::StoneMonkey() :
  Monkey()
{
}

StoneMonkey::StoneMonkey(const QString &name) :
  Monkey(name)
{
}

const QString StoneMonkey::ChangeThing(const QString& thing)
{
  return QString(Monkey::Shout()).append(" 我会七十二变，可变出：").append(thing);
}