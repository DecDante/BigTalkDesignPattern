#pragma once

#include <string>

class Player
{
public:
  Player(const std::string& name): m_Name(name) {}
  virtual ~Player() {}

  virtual void Attach() = 0;
  virtual void Defense() = 0;

protected:
  std::string m_Name;
};