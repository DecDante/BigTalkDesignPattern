#include "Company.h"
#include "ConcreteCompany.h"
#include "HRDepartment.h"
#include "FinanceDepartment.h"
#include <iostream>

int main()
{
  ConcreteCompany root("�����ܹ�˾");
  HRDepartment rootHR("�ܹ�˾������Դ��");
  FinanceDepartment rootFinance("�ܹ�˾����");
  root.Add(&rootHR);
  root.Add(&rootFinance);

  ConcreteCompany comp("�Ϻ������ֹ�˾");
  HRDepartment compHR("�����ֹ�˾������Դ��");
  FinanceDepartment compFinance("�����ֹ�˾����");
  comp.Add(&compHR);
  comp.Add(&compFinance);

  root.Add(&comp);

  ConcreteCompany comp1("�Ͼ����´�");
  HRDepartment comp1HR("�Ͼ����´�������Դ��");
  FinanceDepartment comp1Finance("�Ͼ����´�����");
  comp1.Add(&comp1HR);
  comp1.Add(&comp1Finance);

  comp.Add(&comp1);

  ConcreteCompany comp2("���ݰ��´�");
  HRDepartment comp2HR("���ݰ��´�������Դ��");
  FinanceDepartment comp2Finance("���ݰ��´�����");
  comp2.Add(&comp2HR);
  comp2.Add(&comp2Finance);

  comp.Add(&comp2);

  std::cout << "�ṹͼ��" << std::endl;
  root.Display(1);

  std::cout << std::endl << "ְ��" << std::endl;
  root.LineOfDuty();

  return 0;
}