#include "OperationAdd.h"

double OperationAdd::GetResult() const 
{
  double result = 0;
  result = Operation::GetNumberA() + Operation::GetNumberB();
  return result;
}