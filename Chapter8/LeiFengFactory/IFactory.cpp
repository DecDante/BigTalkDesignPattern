#include "IFactory.h"
#include "LeiFeng.h"

IFactory::IFactory() : m_pLeiFeng(nullptr)
{
}

IFactory::~IFactory()
{
  if (m_pLeiFeng != nullptr)
    delete m_pLeiFeng;
  m_pLeiFeng = nullptr;
}