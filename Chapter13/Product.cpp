#include "Product.h"
#include <iostream>

void Product::Add(const std::string& part)
{
  m_Parts.push_back(part);
}

void Product::Show() const 
{
  for (auto iter = m_Parts.begin(); iter != m_Parts.end(); ++iter)
  {
    std::cout << *iter << " ";
  }
  std::cout << std::endl;
}