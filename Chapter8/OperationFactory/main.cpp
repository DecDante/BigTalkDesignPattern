#include "Operation.h"
#include "IFactory.h"
#include "AddFactory.h"
#include "SubFactory.h"
#include "MulFactory.h"
#include "DivFactory.h"

#include <exception>
#include <iostream>

int main()
{
  IFactory* oper_factory = new DivFactory();
  Operation* operation = oper_factory->CreateOperation();

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

  delete oper_factory;
  return 0;
}