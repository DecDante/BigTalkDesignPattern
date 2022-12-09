#include "OperationSub.h"

double OperationSub::GetResult() const
{
  double result = 0;
  result = Operation::GetNumberA() - Operation::GetNumberB();
  return result;
}