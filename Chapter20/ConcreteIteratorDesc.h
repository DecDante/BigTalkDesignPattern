#pragma once

#include "Iterator.h"

class ConcreteAggregate;

class ConcreteIteratorDesc : public Iterator
{
public:
  ConcreteIteratorDesc(ConcreteAggregate* aggregate);

  std::string First();

  std::string Next();

  bool IsDone();

  std::string CurrentItem();

private:
  ConcreteAggregate* m_pAggregate;
  int m_Current;
};