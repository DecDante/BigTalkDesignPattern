#include "Operation.h"

Operation::~Operation()
{
}

void Operation::SetNumberA(double number)
{
  m_NumberA = number;
}

double Operation::GetNumberA() const 
{
  return m_NumberA;
}

void Operation::SetNumberB(double number)
{
  m_NumberB = number;
}

double Operation::GetNumberB() const
{
  return m_NumberB;
}

double Operation::GetResult() const
{
  return 0;
}