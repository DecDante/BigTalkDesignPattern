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
  std::cout << "�⼮�з� " << m_Name << " ����" << std::endl;
}

void ForeignCenter::DefenseInChinese()
{
  std::cout << "�⼮�з� " << m_Name << " ����" << std::endl;
}