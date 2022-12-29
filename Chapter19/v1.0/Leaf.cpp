#include "Leaf.h"
#include <iostream>

Leaf::Leaf(const std::string& name)
  :Component(name)
{}

void Leaf::Add(Component* c)
{
  std::cout << "Cannot add to a leaf." << std::endl;
}

void Leaf::Remove(Component* c)
{
  std::cout << "Cannot remove from a leaf." << std::endl;
}

void Leaf::Display(int depth)
{
  std::cout << std::string(depth, '-') << m_Name << std::endl;
}