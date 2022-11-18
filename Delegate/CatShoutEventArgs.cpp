#include "CatShoutEventArgs.h"

void CatShoutEventArgs::SetName(const std::string& name)
{
  m_ArgsName = name;
}

const std::string CatShoutEventArgs::GetName() const
{
  return m_ArgsName;
}
