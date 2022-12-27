#include "Center.h"
#include <iostream>

Center::Center(const std::string& name)
  :Player(name)
{}

void Center::Attach()
{
  std::cout << "ÖĞ·æ " << m_Name << " ½ø¹¥" << std::endl;
}

void Center::Defense()
{
  std::cout << "ÖĞ·æ " << m_Name << " ·ÀÊØ" << std::endl;
}