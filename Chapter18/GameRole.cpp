#include "GameRole.h"
#include <iostream>
#include "RoleStateMemento.h"

void GameRole::SetVitality(int vit)
{
  m_Vitality = vit;
}

int GameRole::GetVitality() const
{
  return m_Vitality;
}

void GameRole::SetAttack(int attack)
{
  m_Attack = attack;
}

int GameRole::GetAttack() const
{
  return m_Attack;
}

void GameRole::SetDefense(int defense)
{
  m_Defense = defense;
}

int GameRole::GetDefense() const
{
  return m_Defense;
}

void GameRole::StateDisplay()
{
  std::cout << "角色当前状态：" << std::endl;
  std::cout << "体力：" << m_Vitality << std::endl;
  std::cout << "攻击力：" << m_Attack << std::endl;
  std::cout << "防御力：" << m_Defense << std::endl;
  std::cout << std::endl;
}

void GameRole::GetInitState()
{
  m_Vitality = 100;
  m_Attack = 100;
  m_Defense = 100;
}

void GameRole::Fight()
{
  m_Vitality = 0;
  m_Attack = 0;
  m_Defense = 0;
}

RoleStateMemento* GameRole::SaveState()
{
  return new RoleStateMemento(m_Vitality, m_Attack, m_Defense);
}

void GameRole::RecoverState(RoleStateMemento* memento)
{
  if (memento != nullptr)
  {
    m_Vitality = memento->GetVitality();
    m_Attack = memento->GetAttack();
    m_Defense = memento->GetDefense();
  }
}