#pragma once

#include "Finery.h"
#include <iostream>

class TShirts : public Finery
{
public:
  virtual void Show() override
  {
    std::cout << "´óTÐô ";
    Finery::Show();
  }
};

class BigTrouser : public Finery
{
public:
  virtual void Show() override
  {
    std::cout << "¿å¿ã ";
    Finery::Show();
  }
};

class Sneakers : public Finery
{
public:
  virtual void Show() override
  {
    std::cout << "ÆÆÇòÐ¬ ";
    Finery::Show();
  }
};

class Suit : public Finery
{
public:
  virtual void Show() override
  {
    std::cout << "Î÷×° ";
    Finery::Show();
  }
};

class Tie : public Finery
{
public:
  virtual void Show() override
  {
    std::cout << "Áì´ø ";
    Finery::Show();
  }
};

class LeatherShoes : public Finery
{
public:
  virtual void Show() override
  {
    std::cout << "Æ¤Ð¬ ";
    Finery::Show();
  }
};