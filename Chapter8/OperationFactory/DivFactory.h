#pragma once

#include "IFactory.h"

class Operation;

class DivFactory : public IFactory
{
public:
  virtual Operation* CreateOperation();
};