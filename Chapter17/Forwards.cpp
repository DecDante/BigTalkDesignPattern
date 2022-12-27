#include "Forwards.h"
#include <iostream>

Forwards::Forwards(const std::string& name)
  :Player(name)
{}

void Forwards::Attach()
{
  std::cout << "前锋 " << m_Name << " 进攻" << std::endl;
}

void Forwards::Defense()
{
  std::cout << "前锋 " << m_Name << " 防守" << std::endl;
}
