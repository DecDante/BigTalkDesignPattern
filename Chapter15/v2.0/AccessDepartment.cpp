#include "AccessDepartment.h"
#include "Department.h"
#include <iostream>

void AccessDepartment::Insert(Department* user)
{
  std::cout << "在Access中给Department表增加一条记录" << std::endl;
}

Department* AccessDepartment::GetDepartment(int id)
{
  std::cout << "在Access中根据ID得到Department表一条记录" << std::endl;
  return nullptr;
}