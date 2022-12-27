#pragma once

#include "Player.h"

class Guards : public Player
{
public:
  Guards(const std::string& name);

  virtual void Attach() override;
  virtual void Defense() override;
};