#pragma once

class Work;

class State
{
public:
  virtual ~State() {}

  virtual void WriteProgram(Work* work) = 0;
};