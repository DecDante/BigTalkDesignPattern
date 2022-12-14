#pragma once

#include <iostream>
#include <string>

class IStock
{
public:
  virtual ~IStock() {}

  virtual void Buy()
  {
    std::cout << GetName() << "买入" << std::endl;
  }

  virtual void Sell()
  {
    std::cout << GetName() << "卖出" << std::endl;
  }

protected:
  virtual std::string GetName() const = 0;
};

class Stock1 : public IStock
{
protected:
  virtual std::string GetName() const override
  {
    return "股票1";
  }
};

class Stock2 : public IStock
{
protected:
  virtual std::string GetName() const override
  {
    return "股票2";
  }
};

class Stock3 : public IStock
{
protected:
  virtual std::string GetName() const override
  {
    return "股票3";
  }
};

class NationalDebt1 : public IStock
{
protected:
  virtual std::string GetName() const override
  {
    return "国债1";
  }
};

class Realty1 : public IStock
{
protected:
  virtual std::string GetName() const override
  {
    return "房地产1";
  }
};