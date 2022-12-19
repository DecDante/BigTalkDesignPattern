#include "Subject.h"
#include "IUpdate.h"

Subject::~Subject()
{
}

std::vector<IUpdate*>& Subject::GetEventHandler()
{
  return m_vEventHandler;
}

void Subject::Notify()
{
  for (auto iter = m_vEventHandler.begin(); iter != m_vEventHandler.end(); ++iter)
  {
    if (*iter != nullptr)
      (*iter)->Invoke();
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