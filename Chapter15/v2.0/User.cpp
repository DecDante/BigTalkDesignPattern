#include "User.h"

void User::SetID(int id)
{
  m_ID = id;
}

int User::GetID() const
{
  return m_ID;
}

void User::SetName(const std::string& name)
{
  m_Name = name;
}

std::string User::GetName() const
{
  return m_Name;
}