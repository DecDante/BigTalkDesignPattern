#pragma once

#include <string>

class Secretary;

class StockObserver
{
public:
  StockObserver(const std::string& name, Secretary* secretary);
  void Update();

private:
  std::string m_Name;
  Secretary* m_pSecretary;
};
