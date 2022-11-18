#pragma once

#include <string>

class CatShoutEventArgs
{
public:
  void SetName(const std::string& name);
  const std::string GetName() const;
private:
  std::string m_ArgsName;
};
