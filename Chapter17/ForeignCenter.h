#pragma once

#include <string>

class ForeignCenter
{
public:
  ForeignCenter();

  void SetName(const std::string& name);
  std::string GetName() const;

  void AttachInChinese();
  void DefenseInChinese();

private:
  std::string m_Name;
};