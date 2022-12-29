#pragma once

#include <string>

class Component
{
public:
  Component(const std::string& name);

  virtual ~Component();

  virtual void Add(Component* c) = 0;
  virtual void Remove(Component* c) = 0;
  virtual void Display(int depth) = 0;

protected:
  std::string m_Name;
};