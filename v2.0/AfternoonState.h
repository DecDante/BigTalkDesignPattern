#pragma once

class Work;

#include "State.h"

class AfternoonState : public State
{
public:
  virtual void WriteProgram(Work* work) override;
};