#include "Department.h"

void Department::SetID(int id)
{
  m_ID = id;
}

int Department::GetID() const
{
  return m_ID;
}

void Department::SetName(const std::string& name)
{
  m_Name = name;
}

std::string Department::GetName() const
{
  return m_Name;
}