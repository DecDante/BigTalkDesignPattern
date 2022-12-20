#pragma once

class User;

class IUser
{
public:
  virtual ~IUser() {}

  virtual void Insert(User* user) = 0;
  virtual User* GetUser(int id) = 0;
};