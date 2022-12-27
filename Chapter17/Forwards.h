#pragma once

#include "Player.h"

class Forwards : public Player
{
public:
  Forwards(const std::string& name);

  virtual void Attach() override;
  virtual void Defense() override;
};