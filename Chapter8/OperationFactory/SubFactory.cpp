#include "SubFactory.h"
#include "OperationSub.h"

Operation* SubFactory::CreateOperation()
{
  m_pOperation = new OperationSub();
  return m_pOperation;
}