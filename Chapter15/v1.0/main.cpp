#include "User.h"
#include "Department.h"
#include "IFactory.h"
#include "SqlserverFactory.h"
#include "AccessFactory.h"
#include "IUser.h"
#include "IDepartment.h"

int main()
{
  User user;
  Department dept;

  IFactory* factory = new AccessFactory();

  IUser* iu = factory->CreateUser();
  iu->Insert(&user);
  iu->GetUser(1);

  IDepartment* id = factory->CreateDepartment();
  id->Insert(&dept);
  id->GetDepartment(1);

  delete factory;
  delete iu;
  delete id;

  return 0;
}