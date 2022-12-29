#include "Composite.h"
#include <iostream>

Composite::Composite(const std::string& name)
  :Component(name),
  m_vChildren()
{}

void Composite::Add(Component* c)
{
  m_vChildren.push_back(c);
}

void Composite::Remove(Component* c)
{
  auto iter = find(m_vChildren.begin(), m_vChildren.end(), c);
  if (iter != m_vChildren.end())
    m_vChildren.erase(iter);
}

void Composite::Display(int depth)
{
  std::cout << std::string(depth, '-') << m_Name << std::endl;

  for (auto iter = m_vChildren.begin(); iter != m_vChildren.end(); ++iter)
  {
    if (*iter != nullptr)
      (*iter)->Display(depth + 2);
  }
}