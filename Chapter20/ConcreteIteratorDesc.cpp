#include "ConcreteIteratorDesc.h"
#include "ConcreteAggregate.h"

ConcreteIteratorDesc::ConcreteIteratorDesc(ConcreteAggregate* aggregate)
  :m_pAggregate(aggregate),
  m_Current(m_pAggregate->Count() - 1)
{}

std::string ConcreteIteratorDesc::First()
{
  if (m_pAggregate != nullptr)
    return (*m_pAggregate)[m_pAggregate->Count() - 1];
  else
    return std::string("");
}

std::string ConcreteIteratorDesc::Next()
{
  --m_Current;
  if (m_pAggregate == nullptr)
    return std::string("");

  if (m_Current >= 0)
    return (*m_pAggregate)[m_Current];
  else
    return std::string("");
}

bool ConcreteIteratorDesc::IsDone()
{
  if (m_pAggregate == nullptr)
    return true;

  return m_Current < 0? true : false;
}

std::string ConcreteIteratorDesc::CurrentItem()
{
  if (m_pAggregate == nullptr)
    return std::string("");

  return (*m_pAggregate)[m_Current];
}