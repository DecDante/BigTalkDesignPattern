#pragma once

#include <string>

class Subject;

class Observer
{
public:
  Observer(const std::string& name, Subject* subject);
  virtual ~Observer();
  virtual void Update() = 0;

protected:
  std::string m_Name;
  Subject* m_pSubject;
};