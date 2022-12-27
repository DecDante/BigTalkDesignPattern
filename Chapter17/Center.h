#pragma once

#include "Player.h"

class Center : public Player
{
public:
  Center(const std::string& name);

  virtual void Attach() override;
  virtual void Defense() override;
};