#include "AfternoonState.h"
#include "Work.h"
#include "EveningState.h"
#include <iostream>

void AfternoonState::WriteProgram(Work* work)
{
  if (work == nullptr)
    return;

  if (work->GetHour() < 17)
    std::cout << "当前时间：" << work->GetHour() << "点 下午状态不错，继续努力！" << std::endl;
  else
  {
    work->SetState(new EveningState());
    work->WriteProgram();
  }
}