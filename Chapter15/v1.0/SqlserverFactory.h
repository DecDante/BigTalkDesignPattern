#pragma once

#include "IFactory.h"

class IUser;
class IDepartment;

class SqlserverFactory : public IFactory
{
public:
  virtual IUser* CreateUser();
  virtual IDepartment* CreateDepartment();
};