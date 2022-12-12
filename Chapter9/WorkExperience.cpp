#include "WorkExperience.h"

WorkExperience::WorkExperience()
  :m_WorkDate(""),
  m_Company("")
{}

void WorkExperience::SetWorkDate(const std::string& work_date)
{
  m_WorkDate = work_date;
}

std::string WorkExperience::GetWorkDate() const 
{
  return m_WorkDate;
}

void WorkExperience::SetCompany(const std::string& company)
{
  m_Company = company;
}

std::string WorkExperience::GetCompany() const
{
  return m_Company;
}

WorkExperience::WorkExperience(const WorkExperience& work_ex)
  :m_WorkDate(work_ex.m_WorkDate),
  m_Company(work_ex.m_Company)
{}

WorkExperience* WorkExperience::Clone() const
{
  return new WorkExperience(*this);
}