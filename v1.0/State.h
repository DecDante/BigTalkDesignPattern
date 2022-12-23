#pragma once

class Context;

class State
{
public:
  virtual ~State() {}

  virtual void Handle(Context* context) = 0;
};