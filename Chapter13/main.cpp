#include "Builder.h"
#include "ConcreteBuilder1.h"
#include "ConcreteBuilder2.h"
#include "Product.h"
#include "Director.h"

int main()
{
  ConcreteBuilder1 b1;
  ConcreteBuilder2 b2;
  Builder* p_b1 = &b1;
  Builder* p_b2 = &b2;
  Director director;

  director.Construct(p_b1);
  Product* p_p1 = b1.GetResult();
  p_p1->Show();

  director.Construct(p_b2);
  Product* p_p2 = b2.GetResult();
  p_p2->Show();

  return 0;
}