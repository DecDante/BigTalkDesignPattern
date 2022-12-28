#include "RoleStateCaretaker.h"
#include "RoleStateMemento.h"

RoleStateCaretaker::~RoleStateCaretaker()
{
  if (m_pMemento != nullptr)
    delete m_pMemento;
  m_pMemento = nullptr;
}

void RoleStateCaretaker::SetMemento(RoleStateMemento* memento)
{
  m_pMemento = memento;
}

RoleStateMemento* RoleStateCaretaker::GetMemento() const
{
  return m_pMemento;
}