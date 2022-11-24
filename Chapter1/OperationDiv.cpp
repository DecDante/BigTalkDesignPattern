#include "OperationDiv.h"
#include <exception>

double OperationDiv::GetResult() const
{
  if (Operation::GetNumberB() == 0)
    throw std::exception("The divisor cannot be 0!");

  double result = 0;
  result = Operation::GetNumberA() / Operation::GetNumberB();
  return result;
}