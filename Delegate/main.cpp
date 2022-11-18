#include "Cat.h"
#include "Mouse.h"

#include "CatShout.h"

int main()
{
  Cat cat("Tom");
  Mouse mouse1("Jerry");
  Mouse mouse2("Jack");

  //CatShout0<Mouse> ob1(&mouse1, &Mouse::Run);
  //CatShout0<Mouse> ob2(&mouse2, &Mouse::Run);

  CatShout2<Mouse> ob1(&mouse1, &Mouse::Run);
  CatShout2<Mouse> ob2(&mouse2, &Mouse::Run);

  cat.GetEventHandler().push_back(&ob1);
  cat.GetEventHandler().push_back(&ob2);

  cat.Shout();

  return 0;
}
