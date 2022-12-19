#include "Observer.h"
#include "Subject.h"

Observer::Observer(const std::string& name, Subject* subject)
  :m_Name(name),
  m_pSubject(subject)
{
}
Observer::~Observer()
{
}