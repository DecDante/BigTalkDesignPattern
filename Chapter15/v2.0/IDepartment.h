#pragma once

class Department;

class IDepartment
{
public:
  virtual ~IDepartment() {}

  virtual void Insert(Department* department) = 0;
  virtual Department* GetDepartment(int id) = 0;
};