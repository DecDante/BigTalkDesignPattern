#pragma once

#include "IFactory.h"

class IUser;
class IDepartment;

class AccessFactory : public IFactory
{
public:
  virtual IUser* CreateUser();
  virtual IDepartment* CreateDepartment();
};