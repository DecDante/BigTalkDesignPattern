#pragma once

class Work;

#include "State.h"

class ForenoonState : public State
{
public:
  virtual void WriteProgram(Work* work) override;
};