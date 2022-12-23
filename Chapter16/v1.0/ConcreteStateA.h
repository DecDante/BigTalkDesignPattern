#pragma once

#include "State.h"

class ConcreteStateA : public State 
{
public:
  virtual void Handle(Context* context);
};