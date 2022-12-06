#pragma once

#include "Person.h"

class Finery : public Person
{
public:
  Finery();
  void Decorate(Person* component);

  virtual void Show() override;

protected:
  Person* m_pComponent;
};