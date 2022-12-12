#include "Resume.h"
#include "WorkExperience.h"
#include <iostream>

Resume::Resume(const std::string &name)
  :m_Name(name),
  m_Sex(""),
  m_Age(""),
  m_pWorkExperience(new WorkExperience())
{}

Resume::~Resume()
{
  if (m_pWorkExperience != nullptr)
  {
    delete m_pWorkExperience;
  }   
  m_pWorkExperience = nullptr;
}

void Resume::SetPersonalInfo(const std::string& sex, const std::string& age)
{
  m_Sex = sex;
  m_Age = age;
}

void Resume::SetWorkExperience(const std::string &workDate, const std::string &company)
{
  m_pWorkExperience->SetWorkDate(workDate);
  m_pWorkExperience->SetCompany(company);
}

void Resume::Display() const 
{
  std::cout << m_Name << " " << m_Sex << " " << m_Age << std::endl;
  std::cout << m_pWorkExperience->GetWorkDate() << " " << m_pWorkExperience->GetCompany() << std::endl;
}

Resume::Resume(const Resume& resume)
  :m_Name(resume.m_Name),
  m_Sex(resume.m_Sex),
  m_Age(resume.m_Age),
  m_pWorkExperience(resume.m_pWorkExperience->Clone())
{
}

Resume* Resume::Clone() const
{
  return new Resume(*this);
}