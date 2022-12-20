#include "DataAccess.h"
#include "IUser.h"
#include "IDepartment.h"
#include "SqlserverUser.h"
#include "SqlserverDepartment.h"
#include "AccessUser.h"
#include "AccessDepartment.h"

// std::string DataAccess::m_DB = "Sqlserver";
std::string DataAccess::m_DB = "Access";

IUser* DataAccess::CreateUser()
{
  IUser* result = nullptr;

  if (m_DB == "Sqlserver")
  {
    return new SqlserverUser();
  }
  else if (m_DB == "Access")
  {
    return new AccessUser();
  }
  else
    return nullptr;
}

IDepartment* DataAccess::CreateDepartment()
{
  IDepartment* result = nullptr;

  if (m_DB == "Sqlserver")
  {
    return new SqlserverDepartment();
  }
  else if (m_DB == "Access")
  {
    return new AccessDepartment();
  }
  else
    return nullptr;
}