#include "Cat.h"
#include <iostream>

#include "CatShout.h"
#include "CatShoutEventArgs.h"

Cat::Cat(const std::string& name)
  :m_Name(name),
  m_pArgs(nullptr)
{}

Cat::~Cat()
{
  m_vEventHandler.clear();
  if (m_pArgs != nullptr)
    delete m_pArgs;
  m_pArgs = nullptr;
}

std::vector<ICatShout2*>& Cat::GetEventHandler()
{
  return m_vEventHandler;
}

void Cat::Shout()
{
  std::cout << "喵，我是" << m_Name << "。" << std::endl;

  if (m_pArgs == nullptr)
    m_pArgs = new CatShoutEventArgs();

  m_pArgs->SetName(m_Name);

  for (auto iter = m_vEventHandler.begin(); iter != m_vEventHandler.end(); ++iter)
  {
    (*iter)->Invoke(this, m_pArgs);
  }
}
