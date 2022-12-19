#include "StockObserver.h"
#include "Secretary.h"

#include <iostream>

StockObserver::StockObserver(const std::string& name, Secretary* secretary)
  :m_Name(name),
  m_pSecretary(secretary)
{}

void StockObserver::Update()
{
  if (m_pSecretary == nullptr)
    return;
  std::cout << m_pSecretary->GetSecretaryAction() << " " << m_Name 
    << " " << "关闭股票行情，继续工作！" << std::endl;
}