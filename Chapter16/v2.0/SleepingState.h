#pragma once

class Work;

#include "State.h"

class SleepingState : public State
{
public:
  virtual void WriteProgram(Work* work) override;
};