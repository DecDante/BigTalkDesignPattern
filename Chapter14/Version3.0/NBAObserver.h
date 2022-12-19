#pragma once

#include <string>

class Subject;

class NBAObserver
{
public:
  NBAObserver(const std::string& name, Subject* subject);
  void CloseNBADirectSeeding();

private:
  std::string m_Name;
  Subject* m_pSubject;
};
