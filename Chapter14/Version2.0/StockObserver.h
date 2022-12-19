#pragma once

#include <string>
#include "Observer.h"

class Subject;

class StockObserver: public Observer
{
public:
  StockObserver(const std::string& name, Subject* subject);
  void Update();
};
