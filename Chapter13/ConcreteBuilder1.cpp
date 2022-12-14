#include "ConcreteBuilder1.h"
#include "Product.h"

ConcreteBuilder1::ConcreteBuilder1() :m_pProduct(new Product())
{
}

ConcreteBuilder1::~ConcreteBuilder1()
{
  if (m_pProduct != nullptr)
    delete m_pProduct;
  m_pProduct = nullptr;
}

void ConcreteBuilder1::BuildPartA()
{
  m_pProduct->Add("����A");
}

void ConcreteBuilder1::BuildPartB()
{
  m_pProduct->Add("����B");
}

Product* ConcreteBuilder1::GetResult()
{
  return m_pProduct;
}