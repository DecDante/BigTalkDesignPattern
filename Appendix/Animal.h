#pragma once

#include <QString>

#if _MSC_VER >= 1600 //对应的VS版本至少为VS2010
#pragma execution_character_set("utf-8")
#endif

class Animal
{
public:
  Animal();
  Animal(const QString &name);

  virtual ~Animal();

  void SetShoutNum(int value);
  int GetShoutNum() const;

  const QString Shout() const;

protected:
  virtual const QString GetShoutSound() const = 0;

protected:
  QString m_Name;
  int m_ShoutNum;
};