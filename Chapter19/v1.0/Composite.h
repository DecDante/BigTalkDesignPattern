#pragma once

#include "Component.h"
#include <vector>

class Composite : public Component
{
public:
  Composite(const std::string& name);

  virtual void Add(Component* c) override;
  virtual void Remove(Component* c) override;
  virtual void Display(int depth) override;

protected:
  std::vector<Component*> m_vChildren;
};