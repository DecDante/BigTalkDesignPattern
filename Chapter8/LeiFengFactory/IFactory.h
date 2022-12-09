#pragma once

class LeiFeng;

class IFactory
{
public:
  IFactory();
  virtual ~IFactory();

  virtual LeiFeng* CreateLeiFeng() = 0;

protected:
  LeiFeng* m_pLeiFeng;
};