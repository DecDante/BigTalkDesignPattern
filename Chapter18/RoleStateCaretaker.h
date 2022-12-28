#pragma once

class RoleStateMemento;

class RoleStateCaretaker
{
public:
  ~RoleStateCaretaker();

  void SetMemento(RoleStateMemento* memento);
  RoleStateMemento* GetMemento() const;

private:
  RoleStateMemento* m_pMemento;
};