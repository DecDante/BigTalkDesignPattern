#pragma once

#include "Builder.h"

class Product;

class ConcreteBuilder2 : public Builder
{
public:
  ConcreteBuilder2();
  ~ConcreteBuilder2();

  virtual void BuildPartA();
  virtual void BuildPartB();
  virtual Product* GetResult();

private:
  Product* m_pProduct;
};