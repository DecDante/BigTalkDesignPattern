#pragma once

class Operation
{
public:
  virtual ~Operation();

  void SetNumberA(double number);
  double GetNumberA() const;

  void SetNumberB(double number);
  double GetNumberB() const;

  virtual double GetResult() const;

private:
  double m_NumberA;
  double m_NumberB;
};