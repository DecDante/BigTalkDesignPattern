#pragma once

#include "Builder.h"

class Product;

class ConcreteBuilder1 : public Builder
{
public:
  ConcreteBuilder1();
  ~ConcreteBuilder1();

  virtual void BuildPartA();
  virtual void BuildPartB();
  virtual Product* GetResult();

private:
  Product* m_pProduct;
};