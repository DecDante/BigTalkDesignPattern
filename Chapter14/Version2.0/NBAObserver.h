#pragma once

#include <string>
#include "Observer.h"

class Subject;

class NBAObserver : public Observer
{
public:
  NBAObserver(const std::string& name, Subject* subject);
  void Update();
};
