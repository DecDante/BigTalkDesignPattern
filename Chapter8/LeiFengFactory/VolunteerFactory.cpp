#include "VolunteerFactory.h"
#include "Volunteer.h"

LeiFeng* VolunteerFactory::CreateLeiFeng()
{
  m_pLeiFeng = new Volunteer();
  return m_pLeiFeng;
}