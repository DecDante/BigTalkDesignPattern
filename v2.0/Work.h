#pragma once

class State;

class Work
{
public:
  Work();
  ~Work();

  void SetHour(double hour);
  double GetHour() const;

  void SetFinished(bool finished);
  bool GetFinished() const;

  void SetState(State* state);

  void WriteProgram();

private:
  State* m_pState;
  double m_Hour;
  bool m_bFinished;
};