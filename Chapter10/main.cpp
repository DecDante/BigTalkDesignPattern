#include "TestPaper.h"
#include "TestPaperA.h"
#include "TestPaperB.h"
#include <iostream>

int main()
{
  std::cout << "ѧ���׳����Ծ�" << std::endl;
  TestPaper* studentA = new TestPaperA();
  studentA->TestQuestion1();
  studentA->TestQuestion2();
  studentA->TestQuestion3();

  std::cout << "ѧ���ҳ����Ծ�" << std::endl;
  TestPaper* studentB = new TestPaperB();
  studentB->TestQuestion1();
  studentB->TestQuestion2();
  studentB->TestQuestion3();

  return 0;
}