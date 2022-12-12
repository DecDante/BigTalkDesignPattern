#include "Resume.h"

#include <iostream>

int main()
{
  Resume a("大鸟");
  a.SetPersonalInfo("男", "29");
  a.SetWorkExperience("1998-2000", "XX公司");
  a.Display();

  Resume* b = a.Clone();
  b->SetWorkExperience("1998-2006", "YY企业");
  b->Display();
  delete b;

  Resume* c = a.Clone();
  c->SetWorkExperience("1998-2003", "ZZ企业");
  c->Display();  
  delete c;

  return 0;
}