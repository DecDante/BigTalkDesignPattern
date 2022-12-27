#include "Guards.h"
#include <iostream>

Guards::Guards(const std::string& name)
  :Player(name)
{}

void Guards::Attach()
{
  std::cout << "后卫 " << m_Name << " 进攻" << std::endl;
}

void Guards::Defense()
{
  std::cout << "后卫 " << m_Name << " 防守" << std::endl;
}
