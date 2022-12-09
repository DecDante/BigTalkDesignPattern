#include "AddFactory.h"
#include "OperationAdd.h"

Operation* AddFactory::CreateOperation()
{
  m_pOperation = new OperationAdd();
  return m_pOperation;
}