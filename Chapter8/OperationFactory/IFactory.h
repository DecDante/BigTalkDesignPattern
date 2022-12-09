#pragma once

class Operation;

class IFactory
{
public:
  IFactory();
  virtual ~IFactory();

  virtual Operation* CreateOperation() = 0;

protected:
  Operation* m_pOperation;
};