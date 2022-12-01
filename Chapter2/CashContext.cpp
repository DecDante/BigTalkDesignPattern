#include "CashContext.h"
#include "CashSuper.h"
#include "CashNormal.h"
#include "CashRebate.h"
#include "CashReturn.h"

CashContext::CashContext(const QString& strategy)
  :m_pCashSuper(nullptr)
{
  if (strategy == "正常收费")
    m_pCashSuper = new CashNormal();
  else if (strategy == "满300返100")
    m_pCashSuper = new CashReturn(300, 100);
  else if (strategy == "打8折")
    m_pCashSuper = new CashRebate(0.8);
  else
    m_pCashSuper = nullptr;
}

CashContext::~CashContext()
{
  if (m_pCashSuper != nullptr)
    delete m_pCashSuper;
  m_pCashSuper = nullptr;
}

double CashContext::GetResult(double money)
{
  if (m_pCashSuper != nullptr)
    return m_pCashSuper->AcceptCash(money);
  else
    return 0;
}