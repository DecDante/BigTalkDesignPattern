#include "SleepingState.h"
#include "Work.h"
#include <iostream>

void SleepingState::WriteProgram(Work* work)
{
  if (work == nullptr)
    return;

  std::cout << "��ǰʱ�䣺" << work->GetHour() << "�� �����ˣ�˯���ˡ�" << std::endl;
}