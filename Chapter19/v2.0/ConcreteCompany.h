#pragma once

#include "Company.h"
#include <vector>

class ConcreteCompany : public Company
{
public:
  ConcreteCompany(const std::string& name);

  virtual void Add(Company* c) override;
  virtual void Remove(Company* c) override;
  virtual void Display(int depth) override;
  virtual void LineOfDuty() override;

protected:
  std::vector<Company*> m_vChildren;
};