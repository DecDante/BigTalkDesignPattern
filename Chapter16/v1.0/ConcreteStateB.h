#pragma once

#include "State.h"

class ConcreteStateB : public State
{
public:
  virtual void Handle(Context* context);
};