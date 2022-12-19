#include "Secretary.h"
#include "StockObserver.h"

void Secretary::Attach(StockObserver* observer)
{
  m_vObservers.push_back(observer);
}

void Secretary::Notify()
{
  for (auto iter = m_vObservers.begin(); iter != m_vObservers.end(); ++iter)
  {
    if (*iter != nullptr)
      (*iter)->Update();
  }
}

void Secretary::SetSecretaryAction(const std::string& action)
{
  m_Action = action;
}

std::string Secretary::GetSecretaryAction() const
{
  return m_Action;
}