#include "Pursuit.h"
#include "SchoolGirl.h"
#include <iostream>

Pursuit::Pursuit(SchoolGirl* mm)
  :m_pMM(mm)
{}

void Pursuit::GiveDolls()
{
  if (m_pMM == nullptr)
    return;
  std::cout << m_pMM->GetName() << " 送你洋娃娃" << std::endl;
}

void Pursuit::GiveFlowers()
{
  if (m_pMM == nullptr)
    return;
  std::cout << m_pMM->GetName() << " 送你鲜花" << std::endl;
}

void Pursuit::GiveChocolate()
{
  if (m_pMM == nullptr)
    return;
  std::cout << m_pMM->GetName() << " 送你巧克力" << std::endl;
}
