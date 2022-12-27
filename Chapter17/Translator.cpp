#include "Translator.h"
#include "ForeignCenter.h"
#include <iostream>

Translator::Translator(const std::string& name)
  :Player(name),
  m_pForeignCenter(new ForeignCenter())
{
  m_pForeignCenter->SetName(name);
}

Translator::~Translator()
{
  if (m_pForeignCenter != nullptr)
    delete m_pForeignCenter;
  m_pForeignCenter = nullptr;
}

void Translator::Attach()
{
  if (m_pForeignCenter != nullptr)
    m_pForeignCenter->AttachInChinese();
}

void Translator::Defense()
{
  if (m_pForeignCenter != nullptr)
    m_pForeignCenter->DefenseInChinese();
}