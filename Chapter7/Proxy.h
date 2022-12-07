#pragma once

#include "GiveGifts.h"

class Pursuit;
class SchoolGirl;

class Proxy : public GiveGifts
{
public:
  Proxy(SchoolGirl* mm);

  ~Proxy();

  virtual void GiveDolls();
  virtual void GiveFlowers();
  virtual void GiveChocolate();

private:
  Pursuit *m_pGG;
};