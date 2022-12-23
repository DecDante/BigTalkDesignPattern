#pragma once

class Work;

#include "State.h"

class NoonState : public State
{
public:
  virtual void WriteProgram(Work* work) override;
};