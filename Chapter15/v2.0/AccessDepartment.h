#pragma once

#include "IDepartment.h"

class Department;

class AccessDepartment : public IDepartment
{
public:
  virtual void Insert(Department* department);
  virtual Department* GetDepartment(int id);
};