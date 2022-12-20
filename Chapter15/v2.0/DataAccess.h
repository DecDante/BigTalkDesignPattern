#pragma once

#include <string>

class IUser;
class IDepartment;

class DataAccess
{
public:
  static IUser* CreateUser();
  static IDepartment* CreateDepartment();

private:
  static std::string m_DB;
};