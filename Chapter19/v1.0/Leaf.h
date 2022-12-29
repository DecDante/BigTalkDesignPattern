#pragma once

#include "Component.h"

class Leaf : public Component
{
public:
  Leaf(const std::string& name);

  virtual void Add(Component* c) override;
  virtual void Remove(Component* c) override;
  virtual void Display(int depth) override;
};