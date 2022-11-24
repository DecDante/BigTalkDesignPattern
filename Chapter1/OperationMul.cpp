#include "OperationMul.h"

double OperationMul::GetResult() const
{
  double result = 0;
  result = Operation::GetNumberA() * Operation::GetNumberB();
  return result;
}