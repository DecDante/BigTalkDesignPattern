#pragma once

#include <string>

class Department
{
public:
  void SetID(int id);
  int GetID() const;

  void SetName(const std::string& name);
  std::string GetName() const;

private:
  int m_ID;
  std::string m_Name;
};