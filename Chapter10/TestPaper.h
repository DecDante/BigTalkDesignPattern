#pragma once

#include <string>

class TestPaper
{
public:
  virtual ~TestPaper();

  void TestQuestion1();
  void TestQuestion2();
  void TestQuestion3();
   
protected:
  virtual std::string Answer1();
  virtual std::string Answer2();
  virtual std::string Answer3();
};