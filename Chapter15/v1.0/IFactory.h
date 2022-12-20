#pragma once

class IUser;
class IDepartment;

class IFactory
{
public:
  virtual ~IFactory() {}

  virtual IUser* CreateUser() = 0;
  virtual IDepartment* CreateDepartment() = 0;
};