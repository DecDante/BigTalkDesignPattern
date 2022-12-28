#pragma once

class RoleStateMemento;

class GameRole
{
public:
  void SetVitality(int vit);
  int GetVitality() const;

  void SetAttack(int attack);
  int GetAttack() const;

  void SetDefense(int defense);
  int GetDefense() const;

  void StateDisplay();

  void GetInitState();

  void Fight();

  RoleStateMemento* SaveState();

  void RecoverState(RoleStateMemento* memento);

private:
  int m_Vitality;
  int m_Attack;
  int m_Defense;
};