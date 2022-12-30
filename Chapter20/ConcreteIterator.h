#pragma once

#include "Iterator.h"

class ConcreteAggregate;

class ConcreteIterator : public Iterator
{
public:
  ConcreteIterator(ConcreteAggregate* aggregate);

  std::string First();

  std::string Next();

  bool IsDone();

  std::string CurrentItem();

private:
  ConcreteAggregate* m_pAggregate;
  int m_Current;
};