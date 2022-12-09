#pragma once

#include "IFactory.h"

class Operation;

class SubFactory : public IFactory
{
public:
  virtual Operation* CreateOperation();
};