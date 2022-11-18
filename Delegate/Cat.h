#pragma once

#include <string>
#include <vector>

// class ICatShout0;

class ICatShout2;
class CatShoutEventArgs;

class Cat
{
public:
  Cat(const std::string& name);
  ~Cat();

  void Shout();

  std::vector<ICatShout2*>& GetEventHandler();

private:
  std::vector<ICatShout2*> m_vEventHandler;

  std::string m_Name;
  CatShoutEventArgs* m_pArgs;
};
