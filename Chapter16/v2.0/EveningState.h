#pragma once

class Work;

#include "State.h"

class EveningState : public State
{
public:
  virtual void WriteProgram(Work* work) override;
};