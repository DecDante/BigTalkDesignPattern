#include "TestPaper.h"
#include <iostream>

TestPaper::~TestPaper()
{}

void TestPaper::TestQuestion1()
{
  std::cout << "杨过得到，后来给了郭靖，炼成倚天剑、居龙刀的玄铁可能是[]" << std::endl;
  std::cout << "a．球磨铸铁 b.马口铁 c.高速合金钢 d.碳素纤维" << std::endl;
  std::cout << "答案：" << Answer1() << std::endl;
}

void TestPaper::TestQuestion2()
{
  std::cout << "杨过、程英、陆无双铲除了情花，造成[]" << std::endl;
  std::cout << "a.使这种植物不再害人 b.使一种珍稀物种灭绝 c.破坏了那个生物圈的生态平衡 d.造成该地区沙漠化" << std::endl;
  std::cout << "答案：" << Answer2() << std::endl;
}

void TestPaper::TestQuestion3()
{
  std::cout << "蓝凤凰致使华山师徒、桃谷六仙呕吐不止，如果你是大夫，会给他们开什么药[]" << std::endl;
  std::cout << "a.阿司匹林 b.牛黄解毒片 c.氟哌酸 d.让他们喝大量的生牛奶 e.以上全不对" << std::endl;
  std::cout << "答案：" << Answer3() << std::endl;
}

std::string TestPaper::Answer1()
{
  return "";
}

std::string TestPaper::Answer2()
{
  return "";
}

std::string TestPaper::Answer3()
{
  return "";
}