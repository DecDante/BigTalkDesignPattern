#pragma once

#include <vector>
#include <string>

class IUpdate;

class Subject
{
public:
  virtual ~Subject();

  std::vector<IUpdate*>& GetEventHandler();

  virtual void Notify();

  void SetSubjectState(const std::string& subjectState);
  std::string GetSubjectState() const;

protected:
  std::string m_SubjectState;
  std::vector<IUpdate*> m_vEventHandler;
};