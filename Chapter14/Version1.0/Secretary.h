#pragma once

#include <vector>
#include <string>

class StockObserver;

class Secretary
{
public:
  void Attach(StockObserver* observer);
  void Notify();

  void SetSecretaryAction(const std::string& action);
  std::string GetSecretaryAction() const;

private:
  std::vector<StockObserver*> m_vObservers;
  std::string m_Action;
};