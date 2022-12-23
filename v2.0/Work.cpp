#include "Work.h"
#include "State.h"
#include "ForenoonState.h"

Work::Work()
  :m_pState(new ForenoonState()),
  m_Hour(0),
  m_bFinished(false)
{
}

Work::~Work()
{
  if (m_pState != nullptr)
    delete m_pState;
  m_pState = nullptr;
}

void Work::SetHour(double hour)
{
  if (hour <= 0)
    hour = 1;
  if (hour > 24)
    hour = 24;

  m_Hour = hour;
}

double Work::GetHour() const
{
  return m_Hour;
}

void Work::SetFinished(bool finished)
{
  m_bFinished = finished;
}

bool Work::GetFinished() const
{
  return m_bFinished;
}

void Work::SetState(State* state)
{
  if (m_pState != nullptr)
    delete m_pState;
  m_pState = state;
}

void Work::WriteProgram()
{
  if (m_pState != nullptr)
    m_pState->WriteProgram(this);
}