#include "Resume.h"

#include <iostream>

int main()
{
  Resume a("����");
  a.SetPersonalInfo("��", "29");
  a.SetWorkExperience("1998-2000", "XX��˾");
  a.Display();

  Resume* b = a.Clone();
  b->SetWorkExperience("1998-2006", "YY��ҵ");
  b->Display();
  delete b;

  Resume* c = a.Clone();
  c->SetWorkExperience("1998-2003", "ZZ��ҵ");
  c->Display();  
  delete c;

  return 0;
}