#include "ConcreteStateB.h"
#include "ConcreteStateA.h"
#include "Context.h"
#include <iostream>

void ConcreteStateB::Handle(Context* context)
{
  std::cout << "Current State is ConcreteStateB. Now turn to ConcreteStateA." << std::endl;
  context->SetState(new ConcreteStateA());
}