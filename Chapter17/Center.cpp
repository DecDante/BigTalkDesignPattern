#include "Center.h"
#include <iostream>

Center::Center(const std::string& name)
  :Player(name)
{}

void Center::Attach()
{
  std::cout << "�з� " << m_Name << " ����" << std::endl;
}

void Center::Defense()
{
  std::cout << "�з� " << m_Name << " ����" << std::endl;
}