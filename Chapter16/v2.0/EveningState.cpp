#include "EveningState.h"
#include "Work.h"
#include "RestState.h"
#include "SleepingState.h"
#include <iostream>

void EveningState::WriteProgram(Work* work)
{
  if (work == nullptr)
    return;

  if (work->GetFinished())
  {
    work->SetState(new RestState());
    work->WriteProgram();
  }
  else
  {
    if (work->GetHour() < 21)
      std::cout << "当前时间：" << work->GetHour() << "点 加班哦，疲累之极。" << std::endl;
    else
    {
      work->SetState(new SleepingState());
      work->WriteProgram();
    }
  }
}