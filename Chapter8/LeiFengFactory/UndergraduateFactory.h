#pragma once

#include "IFactory.h"

class LeiFeng;

class UndergraduateFactory : public IFactory
{
public:
  virtual LeiFeng* CreateLeiFeng();
};