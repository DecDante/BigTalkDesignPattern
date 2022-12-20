#pragma once

#include "IDepartment.h"

class Department;

class SqlserverDepartment : public IDepartment
{
public:
  virtual void Insert(Department* department);
  virtual Department* GetDepartment(int id);
};