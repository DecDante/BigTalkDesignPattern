#pragma once

#include "Aggregate.h"
#include <vector>
#include <string>

class ConcreteIterator;

class ConcreteAggregate : public Aggregate
{
public:
  ConcreteAggregate();
  ~ConcreteAggregate();

  Iterator* CreateIterator();

  int Count();

  void Insert(const std::string& item);

  std::string& operator[](int index);

private:
  ConcreteIterator* m_pIterator;
  std::vector<std::string> m_vItems;
};
