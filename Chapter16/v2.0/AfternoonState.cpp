#include "AfternoonState.h"
#include "Work.h"
#include "EveningState.h"
#include <iostream>

void AfternoonState::WriteProgram(Work* work)
{
  if (work == nullptr)
    return;

  if (work->GetHour() < 17)
    std::cout << "��ǰʱ�䣺" << work->GetHour() << "�� ����״̬��������Ŭ����" << std::endl;
  else
  {
    work->SetState(new EveningState());
    work->WriteProgram();
  }
}