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
      std::cout << "��ǰʱ�䣺" << work->GetHour() << "�� �Ӱ�Ŷ��ƣ��֮����" << std::endl;
    else
    {
      work->SetState(new SleepingState());
      work->WriteProgram();
    }
  }
}