#include "SqlserverFactory.h"
#include "SqlserverUser.h"
#include "SqlserverDepartment.h"

IUser* SqlserverFactory::CreateUser()
{
  return new SqlserverUser();
}

IDepartment* SqlserverFactory::CreateDepartment()
{
  return new SqlserverDepartment();
}