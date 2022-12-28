#include "RoleStateMemento.h"

RoleStateMemento::RoleStateMemento(int vit, int attack, int defense)
  :m_Vitality(vit),
  m_Attack(attack),
  m_Defense(defense)
{}

void RoleStateMemento::SetVitality(int vit)
{
  m_Vitality = vit;
}

int RoleStateMemento::GetVitality() const
{
  return m_Vitality;
}

void RoleStateMemento::SetAttack(int attack)
{
  m_Attack = attack;
}

int RoleStateMemento::GetAttack() const
{
  return m_Attack;
}

void RoleStateMemento::SetDefense(int defense)
{
  m_Defense = defense;
}

int RoleStateMemento::GetDefense() const
{
  return m_Defense;
}