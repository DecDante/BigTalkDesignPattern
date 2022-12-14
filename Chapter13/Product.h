#pragma once

#include <vector>
#include <string>

class Product
{
public:
  void Add(const std::string& part);
  void Show() const;

private:
  std::vector<std::string> m_Parts;
};