#include "OperationFactory.h"

#include "OperationAdd.h"
#include "OperationSub.h"
#include "OperationMul.h"
#include "OperationDiv.h"

OperationFactory::~OperationFactory()
{
  if (m_vOperationContainer.size())
  {
    for (auto it = m_vOperationContainer.begin(); it != m_vOperationContainer.end(); ++it)
    {
      if (*it != nullptr)
        delete *it;
    }
  }
  m_vOperationContainer.clear();
}

Operation* OperationFactory::CreateOperation(const std::string& operate)
{
  char input_operator = operate[0];
  Operation* operation = nullptr;
  switch (input_operator)
  {
  case '+':
    operation = new OperationAdd();
    break;
  case '-':
    operation = new OperationSub();
    break;
  case '*':
    operation = new OperationMul();
    break;
  case '/':
    operation = new OperationDiv();
    break;
  }
  if (operation != nullptr)
    m_vOperationContainer.push_back(operation);
  return operation;
}