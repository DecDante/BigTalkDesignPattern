#pragma once

#include <vector>
#include <string>

class Observer;

class Subject
{
public:
  virtual ~Subject();
  virtual void Attach(Observer* observer);
  virtual void Detach(Observer* observer);

  virtual void Notify();

  void SetSubjectState(const std::string& subjectState);
  std::string GetSubjectState() const;

protected:
  std::vector<Observer*> m_vObservers;
  std::string m_SubjectState;
};