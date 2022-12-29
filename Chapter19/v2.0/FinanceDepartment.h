#pragma once

#include "Company.h"

class FinanceDepartment : public Company
{
public:
  FinanceDepartment(const std::string& name);

  virtual void Add(Company* c) override;
  virtual void Remove(Company* c) override;
  virtual void Display(int depth) override;
  virtual void LineOfDuty() override;
};