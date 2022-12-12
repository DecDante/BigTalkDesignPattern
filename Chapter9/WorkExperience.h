#pragma once

#include <string>

class WorkExperience
{
public:
  WorkExperience();

  void SetWorkDate(const std::string& work_date);
  std::string GetWorkDate() const;

  void SetCompany(const std::string& company);
  std::string GetCompany() const;

  WorkExperience* Clone() const;
private:
  std::string m_WorkDate;
  std::string m_Company;

  WorkExperience(const WorkExperience& work_ex);
};