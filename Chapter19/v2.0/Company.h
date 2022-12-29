#pragma once

#include <string>

class Company
{
public:
  Company(const std::string& name);

  virtual ~Company();

  virtual void Add(Company* c) = 0;
  virtual void Remove(Company* c) = 0;
  virtual void Display(int depth) = 0;
  virtual void LineOfDuty() = 0;

protected:
  std::string m_Name;
};