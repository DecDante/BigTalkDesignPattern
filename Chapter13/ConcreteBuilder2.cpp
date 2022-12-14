#include "ConcreteBuilder2.h"
#include "Product.h"

ConcreteBuilder2::ConcreteBuilder2() :m_pProduct(new Product())
{
}

ConcreteBuilder2::~ConcreteBuilder2()
{
  if (m_pProduct != nullptr)
    delete m_pProduct;
  m_pProduct = nullptr;
}

void ConcreteBuilder2::BuildPartA()
{
  m_pProduct->Add("部件X");
}

void ConcreteBuilder2::BuildPartB()
{
  m_pProduct->Add("部件Y");
}

Product* ConcreteBuilder2::GetResult()
{
  return m_pProduct;
}
