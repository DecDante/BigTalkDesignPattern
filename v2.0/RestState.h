#pragma once

class Work;

#include "State.h"

class RestState : public State
{
public:
  virtual void WriteProgram(Work* work) override;
};