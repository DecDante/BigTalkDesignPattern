#pragma once

#include "Finery.h"
#include <iostream>

class TShirts : public Finery
{
public:
  virtual void Show() override
  {
    std::cout << "��T�� ";
    Finery::Show();
  }
};

class BigTrouser : public Finery
{
public:
  virtual void Show() override
  {
    std::cout << "��� ";
    Finery::Show();
  }
};

class Sneakers : public Finery
{
public:
  virtual void Show() override
  {
    std::cout << "����Ь ";
    Finery::Show();
  }
};

class Suit : public Finery
{
public:
  virtual void Show() override
  {
    std::cout << "��װ ";
    Finery::Show();
  }
};

class Tie : public Finery
{
public:
  virtual void Show() override
  {
    std::cout << "��� ";
    Finery::Show();
  }
};

class LeatherShoes : public Finery
{
public:
  virtual void Show() override
  {
    std::cout << "ƤЬ ";
    Finery::Show();
  }
};