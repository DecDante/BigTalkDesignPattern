#include "MulFactory.h"
#include "OperationMul.h"

Operation* MulFactory::CreateOperation()
{
  m_pOperation = new OperationMul();
  return m_pOperation;
}