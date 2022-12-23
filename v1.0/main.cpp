#include "Context.h"
#include "State.h"
#include "ConcreteStateA.h"
#include "ConcreteStateB.h"

int main()
{
  Context c(new ConcreteStateA());

  c.Request();
  c.Request();
  c.Request();
  c.Request();

  return 0;
}