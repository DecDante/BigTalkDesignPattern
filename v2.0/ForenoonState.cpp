#include "ForenoonState.h"
#include "Work.h"
#include "NoonState.h"
#include <iostream>

void ForenoonState::WriteProgram(Work* work)
{
  if (work == nullptr)
    return;

  if (work->GetHour() < 12)
    std::cout << "当前时间：" << work->GetHour() << "点 上午工作，精神百倍！" << std::endl;
  else
  {
    work->SetState(new NoonState());
    work->WriteProgram();
  }
}