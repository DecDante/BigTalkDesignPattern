#pragma once

#include <string>

class WorkExperience;

class Resume
{
public:
  Resume(const std::string &name);
  ~Resume();

  void SetPersonalInfo(const std::string& sex, const std::string& age);
  void SetWorkExperience(const std::string &workDate, const std::string &company);
  void Display() const;

  Resume* Clone() const;

private:
  std::string m_Name;
  std::string m_Sex;
  std::string m_Age;

  WorkExperience* m_pWorkExperience;

  Resume::Resume(const Resume& resume);
};