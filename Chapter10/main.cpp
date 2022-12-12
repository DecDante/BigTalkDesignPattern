#include "TestPaper.h"
#include "TestPaperA.h"
#include "TestPaperB.h"
#include <iostream>

int main()
{
  std::cout << "学生甲抄的试卷：" << std::endl;
  TestPaper* studentA = new TestPaperA();
  studentA->TestQuestion1();
  studentA->TestQuestion2();
  studentA->TestQuestion3();

  std::cout << "学生乙抄的试卷：" << std::endl;
  TestPaper* studentB = new TestPaperB();
  studentB->TestQuestion1();
  studentB->TestQuestion2();
  studentB->TestQuestion3();

  return 0;
}