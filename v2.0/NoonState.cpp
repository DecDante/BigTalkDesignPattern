#include "NoonState.h"
#include "Work.h"
#include "AfternoonState.h"
#include <iostream>

void NoonState::WriteProgram(Work* work)
{
  if (work == nullptr)
    return;

  if (work->GetHour() < 13)
    std::cout << "当前时间：" << work->GetHour() << "点 饿了，午饭：犯困，午休。" << std::endl;
  else
  {
    work->SetState(new AfternoonState());
    work->WriteProgram();
  }
}