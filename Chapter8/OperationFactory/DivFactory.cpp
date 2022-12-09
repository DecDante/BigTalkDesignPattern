#include "DivFactory.h"
#include "OperationDiv.h"

Operation* DivFactory::CreateOperation()
{
  m_pOperation = new OperationDiv();
  return m_pOperation;
}