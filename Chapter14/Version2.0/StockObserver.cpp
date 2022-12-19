#include "StockObserver.h"
#include "Subject.h"

#include <iostream>

StockObserver::StockObserver(const std::string& name, Subject* subject)
  :Observer(name, subject)
{}

void StockObserver::Update()
{
  if (m_pSubject == nullptr)
    return;
  std::cout << m_pSubject->GetSubjectState() << " " << m_Name
    << " " << "�رչ�Ʊ���飬����������" << std::endl;
}