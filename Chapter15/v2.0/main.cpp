#include "User.h"
#include "Department.h"
#include "DataAccess.h"
#include "IUser.h"
#include "IDepartment.h"

int main()
{
  User user;
  Department dept;

  IUser* iu = DataAccess::CreateUser();
  iu->Insert(&user);
  iu->GetUser(1);

  IDepartment* id = DataAccess::CreateDepartment();
  id->Insert(&dept);
  id->GetDepartment(1);

  delete iu;
  delete id;

  return 0;
}