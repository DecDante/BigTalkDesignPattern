#pragma once

#include <string>

class SchoolGirl
{
public:
  void SetName(const std::string& name)
  {
    m_Name = name;
  }

  std::string GetName() const { return m_Name; }

private:
  std::string m_Name;
};