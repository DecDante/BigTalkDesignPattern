#pragma once

#include "GiveGifts.h"

class SchoolGirl;

class Pursuit: public GiveGifts
{
public:
  Pursuit(SchoolGirl* mm);
  
  virtual void GiveDolls();
  virtual void GiveFlowers();
  virtual void GiveChocolate();

private:
  SchoolGirl *m_pMM;
};