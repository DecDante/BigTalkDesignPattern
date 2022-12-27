#include "Guards.h"
#include <iostream>

Guards::Guards(const std::string& name)
  :Player(name)
{}

void Guards::Attach()
{
  std::cout << "ºóÎÀ " << m_Name << " ½ø¹¥" << std::endl;
}

void Guards::Defense()
{
  std::cout << "ºóÎÀ " << m_Name << " ·ÀÊØ" << std::endl;
}