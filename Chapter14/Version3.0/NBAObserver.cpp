#include "NBAObserver.h"
#include "Subject.h"

#include <iostream>

NBAObserver::NBAObserver(const std::string& name, Subject* subject)
  :m_Name(name),
  m_pSubject(subject)
{}

void NBAObserver::CloseNBADirectSeeding()
{
  if (m_pSubject == nullptr)
    return;
  std::cout << m_pSubject->GetSubjectState() << " " << m_Name
    << " " << "�ر�NBAֱ��������������" << std::endl;
}