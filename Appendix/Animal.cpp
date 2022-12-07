#include "Animal.h"

Animal::Animal()
  :m_Name("无名"),
  m_ShoutNum(3)
{
}

Animal::Animal(const QString &name)
  : m_Name(name),
  m_ShoutNum(3)
{
}

Animal::~Animal()
{
}

void Animal::SetShoutNum(int value)
{
  if (value <= 0)
    return;

  if (value > 10)
    value = 10;
  else
    m_ShoutNum = value;
}

int Animal::GetShoutNum() const
{
  return m_ShoutNum;
}

const QString Animal::Shout() const
{
  QString shoutResult("");
  for (int i = 0; i < m_ShoutNum; ++i)
  {
    shoutResult.append("，").append(GetShoutSound());
  }
  return QString("我的名字叫").append(m_Name).append(shoutResult);
}

const QString Animal::GetShoutSound() const
{
  return "";
}
