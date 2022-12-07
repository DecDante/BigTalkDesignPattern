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
  std::cout << m_pMM->GetName() << " ����������" << std::endl;
}

void Pursuit::GiveFlowers()
{
  if (m_pMM == nullptr)
    return;
  std::cout << m_pMM->GetName() << " �����ʻ�" << std::endl;
}

void Pursuit::GiveChocolate()
{
  if (m_pMM == nullptr)
    return;
  std::cout << m_pMM->GetName() << " �����ɿ���" << std::endl;
}