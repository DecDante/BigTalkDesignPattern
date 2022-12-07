#pragma once

class GiveGifts
{
public:
  virtual ~GiveGifts() {}
  
  virtual void GiveDolls() = 0;
  virtual void GiveFlowers() = 0;
  virtual void GiveChocolate() = 0;
};