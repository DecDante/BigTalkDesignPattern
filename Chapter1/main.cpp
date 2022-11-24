#include "Operation.h"
#include "OperationFactory.h"

#include <exception>
#include <iostream>

int main()
{
  OperationFactory operation_factory;
  Operation* operation = operation_factory.CreateOperation("/");
  double result = 0;
  try
  {
    if (operation != nullptr)
    {
      operation->SetNumberA(12);
      operation->SetNumberB(0);
      result = operation->GetResult();
    }
  }
  catch (const std::exception& e)
  {
    std::cout << e.what() << std::endl;
    return 0;
  }

  std::cout << result << std::endl;
  return 0;
}