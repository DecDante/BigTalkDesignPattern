#include "Mouse.h"
#include <iostream>

#include "CatShoutEventArgs.h"

Mouse::Mouse(const std::string& name)
  :m_Name(name)
{}

void Mouse::Run(Cat* cat, CatShoutEventArgs* args)
{
  std::cout << "老猫" << args->GetName() << "来了，" << m_Name << "快跑！" << std::endl;
}
