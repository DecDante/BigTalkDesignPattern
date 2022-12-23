#include "SleepingState.h"
#include "Work.h"
#include <iostream>

void SleepingState::WriteProgram(Work* work)
{
  if (work == nullptr)
    return;

  std::cout << "当前时间：" << work->GetHour() << "点 不行了，睡着了。" << std::endl;
}