#include "Forwards.h"
#include <iostream>

Forwards::Forwards(const std::string& name)
  :Player(name)
{}

void Forwards::Attach()
{
  std::cout << "ǰ�� " << m_Name << " ����" << std::endl;
}

void Forwards::Defense()
{
  std::cout << "ǰ�� " << m_Name << " ����" << std::endl;
}