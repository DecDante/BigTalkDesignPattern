#pragma once

#include "Player.h"

class ForeignCenter;

class Translator : public Player
{
public:
  Translator(const std::string& name);
  ~Translator();

  virtual void Attach() override;
  virtual void Defense() override;

private:
  ForeignCenter* m_pForeignCenter;
};