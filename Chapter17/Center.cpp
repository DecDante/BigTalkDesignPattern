#include "Center.h"
#include <iostream>

Center::Center(const std::string& name)
  :Player(name)
{}

void Center::Attach()
{
  std::cout << "中锋 " << m_Name << " 进攻" << std::endl;
}

void Center::Defense()
{
  std::cout << "中锋 " << m_Name << " 防守" << std::endl;
}
