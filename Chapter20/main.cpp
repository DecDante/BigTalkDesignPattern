#include "Iterator.h"
#include "ConcreteAggregate.h"
#include "ConcreteIterator.h"
#include "ConcreteIteratorDesc.h"

#include <string>
#include <iostream>

int main()
{
  ConcreteAggregate a;
  a.Insert("大鸟");
  a.Insert("小菜");
  a.Insert("行李");
  a.Insert("老外");
  a.Insert("公交内部员工");
  a.Insert("小偷");

  // Iterator* i = new ConcreteIterator(&a);
  Iterator* i = new ConcreteIteratorDesc(&a);


  std::string item = i->First();

  while (!i->IsDone())
  {
    std::cout << i->CurrentItem() << " 请买车票" << std::endl;
    i->Next();
  }

  delete i;

  return 0;
}