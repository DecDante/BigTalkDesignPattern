#pragma once

class State;

class Context
{
public:
  Context(State* state);
  ~Context();

  void SetState(State* state);
  State* GetState() const;

  void Request();
private:
  State* m_pState;
};