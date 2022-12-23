#include "ForenoonState.h"
#include "Work.h"
#include "NoonState.h"
#include <iostream>

void ForenoonState::WriteProgram(Work* work)
{
  if (work == nullptr)
    return;

  if (work->GetHour() < 12)
    std::cout << "��ǰʱ�䣺" << work->GetHour() << "�� ���繤��������ٱ���" << std::endl;
  else
  {
    work->SetState(new NoonState());
    work->WriteProgram();
  }
}