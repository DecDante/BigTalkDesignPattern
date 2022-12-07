#include "Proxy.h"
#include "Pursuit.h"

Proxy::Proxy(SchoolGirl* mm)
  :m_pGG(new Pursuit(mm))
{}

Proxy::~Proxy()
{
  if (m_pGG != nullptr)
    delete m_pGG;
  m_pGG = nullptr;
}

void Proxy::GiveDolls()
{
  m_pGG->GiveDolls();
}

void Proxy::GiveFlowers()
{
  m_pGG->GiveFlowers();
}

void Proxy::GiveChocolate()
{
  m_pGG->GiveChocolate();
}