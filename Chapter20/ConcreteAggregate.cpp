#include "ConcreteAggregate.h"
#include "ConcreteIterator.h"

ConcreteAggregate::ConcreteAggregate()
  :m_pIterator(nullptr),
  m_vItems()
{}

ConcreteAggregate::~ConcreteAggregate()
{
  if (m_pIterator != nullptr)
    delete m_pIterator;
  m_pIterator = nullptr;
}

Iterator* ConcreteAggregate::CreateIterator()
{
  if (m_pIterator == nullptr)
    m_pIterator = new ConcreteIterator(this);
  return m_pIterator;
}

int ConcreteAggregate::Count()
{
  return m_vItems.size();
}

void ConcreteAggregate::Insert(const std::string& item)
{
  m_vItems.push_back(std::string(item));
}

std::string& ConcreteAggregate::operator[](int index)
{
  return m_vItems[index];
}