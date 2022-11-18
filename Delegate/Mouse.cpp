#include "Mouse.h"
#include <iostream>

#include "CatShoutEventArgs.h"

Mouse::Mouse(const std::string& name)
  :m_Name(name)
{}

void Mouse::Run(Cat* cat, CatShoutEventArgs* args)
{
  std::cout << "Old cat " << args->GetName() << " is coming! " << m_Name << "! Run!" << std::endl;
}
