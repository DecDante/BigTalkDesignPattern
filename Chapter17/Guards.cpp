#include "Guards.h"
#include <iostream>

Guards::Guards(const std::string& name)
  :Player(name)
{}

void Guards::Attach()
{
  std::cout << "���� " << m_Name << " ����" << std::endl;
}

void Guards::Defense()
{
  std::cout << "���� " << m_Name << " ����" << std::endl;
}