#pragma once

#include "IFactory.h"

class LeiFeng;

class VolunteerFactory : public IFactory
{
public:
  virtual LeiFeng* CreateLeiFeng();
};