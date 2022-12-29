#include "ConcreteCompany.h"
#include <iostream>

ConcreteCompany::ConcreteCompany(const std::string& name)
  :Company(name),
  m_vChildren()
{}

void ConcreteCompany::Add(Company* c)
{
  m_vChildren.push_back(c);
}

void ConcreteCompany::Remove(Company* c)
{
  auto iter = find(m_vChildren.begin(), m_vChildren.end(), c);
  if (iter != m_vChildren.end())
    m_vChildren.erase(iter);
}

void ConcreteCompany::Display(int depth)
{
  std::cout << std::string(depth, '-') << m_Name << std::endl;

  for (auto iter = m_vChildren.begin(); iter != m_vChildren.end(); ++iter)
  {
    if (*iter != nullptr)
      (*iter)->Display(depth + 2);
  }
}

void ConcreteCompany::LineOfDuty()
{
  for (auto iter = m_vChildren.begin(); iter != m_vChildren.end(); ++iter)
  {
    if (*iter != nullptr)
      (*iter)->LineOfDuty();
  }
}