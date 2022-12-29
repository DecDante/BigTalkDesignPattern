#include "FinanceDepartment.h"
#include <iostream>

FinanceDepartment::FinanceDepartment(const std::string& name)
  :Company(name)
{}

void FinanceDepartment::Add(Company* c)
{
}

void FinanceDepartment::Remove(Company* c)
{
}

void FinanceDepartment::Display(int depth)
{
  std::cout << std::string(depth, '-') << m_Name << std::endl;
}

void FinanceDepartment::LineOfDuty()
{
  std::cout << m_Name << " 公司财务收支管理" << std::endl;
}
