#pragma once

#include "IFactory.h"

class Operation;

class AddFactory : public IFactory
{
public:
  virtual Operation* CreateOperation();
};