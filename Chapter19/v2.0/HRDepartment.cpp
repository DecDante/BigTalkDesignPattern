#include "HRDepartment.h"
#include <iostream>

HRDepartment::HRDepartment(const std::string& name)
  :Company(name)
{}

void HRDepartment::Add(Company* c)
{
}

void HRDepartment::Remove(Company* c)
{
}

void HRDepartment::Display(int depth)
{
  std::cout << std::string(depth, '-') << m_Name << std::endl;
}

void HRDepartment::LineOfDuty()
{
  std::cout << m_Name << " 员工招聘培训管理" << std::endl;
}
