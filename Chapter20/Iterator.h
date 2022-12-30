#pragma once

#include <string>

class Iterator
{
public:
  virtual ~Iterator() {}

  virtual std::string First() = 0;
  virtual std::string Next() = 0;
  virtual bool IsDone() = 0;
  virtual std::string CurrentItem() = 0;
};