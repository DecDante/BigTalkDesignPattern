#include "NoonState.h"
#include "Work.h"
#include "AfternoonState.h"
#include <iostream>

void NoonState::WriteProgram(Work* work)
{
  if (work == nullptr)
    return;

  if (work->GetHour() < 13)
    std::cout << "��ǰʱ�䣺" << work->GetHour() << "�� ���ˣ��緹�����������ݡ�" << std::endl;
  else
  {
    work->SetState(new AfternoonState());
    work->WriteProgram();
  }
}