#pragma once

#include <string>

class Person
{
public:
  Person(const std::string& name = "");
  virtual ~Person();

  virtual void Show();

private:
  std::string m_Name;
};