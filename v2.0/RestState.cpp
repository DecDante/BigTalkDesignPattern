#include "RestState.h"
#include "Work.h"
#include <iostream>

void RestState::WriteProgram(Work* work)
{
  if (work == nullptr)
    return;

  std::cout << "��ǰʱ�䣺" << work->GetHour() << "�� �°�ؼ��ˡ�" << std::endl;
}