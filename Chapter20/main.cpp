#include "Iterator.h"
#include "ConcreteAggregate.h"
#include "ConcreteIterator.h"
#include "ConcreteIteratorDesc.h"

#include <string>
#include <iostream>

int main()
{
  ConcreteAggregate a;
  a.Insert("����");
  a.Insert("С��");
  a.Insert("����");
  a.Insert("����");
  a.Insert("�����ڲ�Ա��");
  a.Insert("С͵");

  // Iterator* i = new ConcreteIterator(&a);
  Iterator* i = new ConcreteIteratorDesc(&a);


  std::string item = i->First();

  while (!i->IsDone())
  {
    std::cout << i->CurrentItem() << " ����Ʊ" << std::endl;
    i->Next();
  }

  delete i;

  return 0;
}