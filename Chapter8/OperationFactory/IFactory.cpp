#include "IFactory.h"
#include "Operation.h"

IFactory::IFactory() : m_pOperation(nullptr)
{
}

IFactory::~IFactory()
{
  if (m_pOperation != nullptr)
    delete m_pOperation;
  m_pOperation = nullptr;
}