#pragma once

#include <string>

class Cat;
class CatShoutEventArgs;

class Mouse
{
public:
  Mouse(const std::string& name);

  void Run(Cat* cat, CatShoutEventArgs* args);

private:
  std::string m_Name;
};
