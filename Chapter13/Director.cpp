#include "Director.h"
#include "Builder.h"

void Director::Construct(Builder* builder)
{
  if (builder != nullptr)
  {
    builder->BuildPartA();
    builder->BuildPartB();
  }
}