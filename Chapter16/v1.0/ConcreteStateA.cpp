#include "ConcreteStateA.h"
#include "ConcreteStateB.h"
#include "Context.h"
#include <iostream>

void ConcreteStateA::Handle(Context* context)
{
  std::cout << "Current State is ConcreteStateA. Now turn to ConcreteStateB." << std::endl;
  context->SetState(new ConcreteStateB());
}