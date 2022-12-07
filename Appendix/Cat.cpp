#include "Cat.h"

Cat::Cat():
  Animal()
{
}

Cat::Cat(const QString &name):
  Animal(name)
{
}

const QString Cat::GetShoutSound() const
{
  return "喵";
}
