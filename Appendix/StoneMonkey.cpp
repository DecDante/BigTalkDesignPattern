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
  return QString(Monkey::Shout()).append(" �һ���ʮ���䣬�ɱ����").append(thing);
}