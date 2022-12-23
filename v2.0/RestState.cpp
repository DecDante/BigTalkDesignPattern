#include "RestState.h"
#include "Work.h"
#include <iostream>

void RestState::WriteProgram(Work* work)
{
  if (work == nullptr)
    return;

  std::cout << "当前时间：" << work->GetHour() << "点 下班回家了。" << std::endl;
}