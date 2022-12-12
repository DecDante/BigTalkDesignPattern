#pragma once

#include "TestPaper.h"
#include <string>

class TestPaperA : public TestPaper
{
protected:
  virtual std::string Answer1() override { return "b"; }
  virtual std::string Answer2() override { return "c"; }
  virtual std::string Answer3() override { return "a"; }
};