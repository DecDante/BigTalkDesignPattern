#pragma once

#include "IUser.h"

class User;

class SqlserverUser : public IUser
{
public:
  virtual void Insert(User* user);
  virtual User* GetUser(int id);
};