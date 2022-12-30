#pragma once

class Iterator;

class Aggregate
{
public:
  virtual ~Aggregate() {}

  virtual Iterator* CreateIterator() = 0;
};