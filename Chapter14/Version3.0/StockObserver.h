#pragma once

#include <string>

class Subject;

class StockObserver
{
public:
  StockObserver(const std::string& name, Subject* subject);
  void CloseStockMarket();

private:
  std::string m_Name;
  Subject* m_pSubject;
};
