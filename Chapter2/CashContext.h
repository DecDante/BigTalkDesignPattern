#pragma once

#if _MSC_VER >= 1600 //对应的VS版本至少为VS2010
#pragma execution_character_set("utf-8")
#endif

#include <QString>

class CashSuper;

class CashContext
{
public:
  CashContext(const QString& strategy);
  ~CashContext();
  
  double GetResult(double money);

private:
  CashSuper* m_pCashSuper;
};