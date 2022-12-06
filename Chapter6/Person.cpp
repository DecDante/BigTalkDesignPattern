#include "Person.h"

#include <iostream>

Person::Person(const std::string& name)
  :m_Name(name)
{}

Person::~Person()
{}

void Person::Show()
{
  std::cout << "װ���" << m_Name << std::endl;
}