#include "ConcreteIterator.h"
#include "ConcreteAggregate.h"

ConcreteIterator::ConcreteIterator(ConcreteAggregate* aggregate)
  :m_pAggregate(aggregate),
  m_Current(0)
{}

std::string ConcreteIterator::First()
{
  if (m_pAggregate != nullptr)
    return (*m_pAggregate)[0];
  else
    return std::string("");
}

std::string ConcreteIterator::Next()
{
  ++m_Current;
  if (m_pAggregate == nullptr)
    return std::string("");

  if (m_Current < m_pAggregate->Count())
    return (*m_pAggregate)[m_Current];
  else
    return std::string("");
}

bool ConcreteIterator::IsDone()
{
  if (m_pAggregate == nullptr)
    return true;

  return m_Current >= m_pAggregate->Count() ? true: false;
}

std::string ConcreteIterator::CurrentItem()
{
  if (m_pAggregate == nullptr)
    return std::string("");

  return (*m_pAggregate)[m_Current];
}