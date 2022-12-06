#include "Finery.h"

Finery::Finery()
  :m_pComponent(nullptr)
{
}

void Finery::Decorate(Person* component)
{
  m_pComponent = component;
}

void Finery::Show()
{
  if (m_pComponent != nullptr)
  {
    m_pComponent->Show();
  }
}
