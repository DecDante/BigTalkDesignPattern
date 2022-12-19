#include "Subject.h"
#include "Observer.h"

Subject::~Subject()
{
}

void Subject::Attach(Observer* observer)
{
  m_vObservers.push_back(observer);
}

void Subject::Detach(Observer* observer)
{
  auto iter = find(m_vObservers.begin(), m_vObservers.end(), observer);
  m_vObservers.erase(iter);
}

void Subject::Notify()
{
  for (auto iter = m_vObservers.begin(); iter != m_vObservers.end(); ++iter)
  {
    if (*iter != nullptr)
      (*iter)->Update();
  }
}

void Subject::SetSubjectState(const std::string& subjectState)
{
  m_SubjectState = subjectState;
}
std::string Subject::GetSubjectState() const
{
  return m_SubjectState;
}