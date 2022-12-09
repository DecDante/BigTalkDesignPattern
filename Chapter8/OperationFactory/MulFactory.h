#pragma once

#include "IFactory.h"

class Operation;

class MulFactory : public IFactory
{
public:
  virtual Operation* CreateOperation();
};