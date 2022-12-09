#include "UndergraduateFactory.h"
#include "Undergraduate.h"

LeiFeng* UndergraduateFactory::CreateLeiFeng()
{
  m_pLeiFeng = new Undergraduate();
  return m_pLeiFeng;
}