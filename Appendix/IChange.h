#pragma once

#include <QString>

class IChange
{
public:
  virtual const QString ChangeThing(const QString& thing) = 0;
  virtual ~IChange() {};
};