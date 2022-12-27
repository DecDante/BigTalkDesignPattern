#include "ForeignCenter.h"
#include <iostream>

ForeignCenter::ForeignCenter() : m_Name("") 
{}

void ForeignCenter::SetName(const std::string& name)
{
  m_Name = name;
}

std::string ForeignCenter::GetName() const
{
  return m_Name;
}

void ForeignCenter::AttachInChinese()
{
  std::cout << "外籍中锋 " << m_Name << " 进攻" << std::endl;
}

void ForeignCenter::DefenseInChinese()
{
  std::cout << "外籍中锋 " << m_Name << " 防守" << std::endl;
}