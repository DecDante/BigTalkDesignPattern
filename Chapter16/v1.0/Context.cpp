#include "Context.h"
#include "State.h"

Context::Context(State* state)
  :m_pState(state)
{}

Context::~Context()
{
  if (m_pState != nullptr)
    delete m_pState;
  m_pState = nullptr;
}

void Context::SetState(State* state)
{
  if (m_pState != nullptr)
    delete m_pState;
  m_pState = state;
}

State* Context::GetState() const
{
  return m_pState;
}

void Context::Request()
{
  if (m_pState != nullptr)
    m_pState->Handle(this);
}