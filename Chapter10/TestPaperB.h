#pragma once

#include "TestPaper.h"
#include <string>

class TestPaperB : public TestPaper
{
protected:
  virtual std::string Answer1() override { return "c"; }
  virtual std::string Answer2() override { return "a"; }
  virtual std::string Answer3() override { return "a"; }
};