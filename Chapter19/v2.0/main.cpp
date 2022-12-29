#include "Company.h"
#include "ConcreteCompany.h"
#include "HRDepartment.h"
#include "FinanceDepartment.h"
#include <iostream>

int main()
{
  ConcreteCompany root("北京总公司");
  HRDepartment rootHR("总公司人力资源部");
  FinanceDepartment rootFinance("总公司财务部");
  root.Add(&rootHR);
  root.Add(&rootFinance);

  ConcreteCompany comp("上海华东分公司");
  HRDepartment compHR("华东分公司人力资源部");
  FinanceDepartment compFinance("华东分公司财务部");
  comp.Add(&compHR);
  comp.Add(&compFinance);

  root.Add(&comp);

  ConcreteCompany comp1("南京办事处");
  HRDepartment comp1HR("南京办事处人力资源部");
  FinanceDepartment comp1Finance("南京办事处财务部");
  comp1.Add(&comp1HR);
  comp1.Add(&comp1Finance);

  comp.Add(&comp1);

  ConcreteCompany comp2("杭州办事处");
  HRDepartment comp2HR("杭州办事处人力资源部");
  FinanceDepartment comp2Finance("杭州办事处财务部");
  comp2.Add(&comp2HR);
  comp2.Add(&comp2Finance);

  comp.Add(&comp2);

  std::cout << "结构图：" << std::endl;
  root.Display(1);

  std::cout << std::endl << "职责：" << std::endl;
  root.LineOfDuty();

  return 0;
}