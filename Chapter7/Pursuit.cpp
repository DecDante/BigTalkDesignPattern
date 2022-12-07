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
  std::cout << m_pMM->GetName() << " ËÍÄãÑóÍÞÍÞ" << std::endl;
}

void Pursuit::GiveFlowers()
{
  if (m_pMM == nullptr)
    return;
  std::cout << m_pMM->GetName() << " ËÍÄãÏÊ»¨" << std::endl;
}

void Pursuit::GiveChocolate()
{
  if (m_pMM == nullptr)
    return;
  std::cout << m_pMM->GetName() << " ËÍÄãÇÉ¿ËÁ¦" << std::endl;
}