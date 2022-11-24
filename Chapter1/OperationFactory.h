#pragma once

#include <string>
#include <vector>

class Operation;

class OperationFactory
{
public:
  ~OperationFactory();

  Operation* CreateOperation(const std::string& operate);

private:
  std::vector<Operation*> m_vOperationContainer;
};