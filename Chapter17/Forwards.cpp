#include "Forwards.h"
#include <iostream>

Forwards::Forwards(const std::string& name)
  :Player(name)
{}

void Forwards::Attach()
{
  std::cout << "Ç°·æ " << m_Name << " ½ø¹¥" << std::endl;
}

void Forwards::Defense()
{
  std::cout << "Ç°·æ " << m_Name << " ·ÀÊØ" << std::endl;
}