#pragma once

class RoleStateMemento
{
public:
  RoleStateMemento(int vit, int attack, int defense);

  void SetVitality(int vit);
  int GetVitality() const;

  void SetAttack(int attack);
  int GetAttack() const;

  void SetDefense(int defense);
  int GetDefense() const;

private:
  int m_Vitality;
  int m_Attack;
  int m_Defense;
};