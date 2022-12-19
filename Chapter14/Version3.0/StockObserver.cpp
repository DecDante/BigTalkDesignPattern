#include "StockObserver.h"
#include "Subject.h"

#include <iostream>

StockObserver::StockObserver(const std::string& name, Subject* subject)
  :m_Name(name),
  m_pSubject(subject)
{}

void StockObserver::CloseStockMarket()
{
  if (m_pSubject == nullptr)
    return;
  std::cout << m_pSubject->GetSubjectState() << " " << m_Name
    << " " << "�رչ�Ʊ���飬����������" << std::endl;
}