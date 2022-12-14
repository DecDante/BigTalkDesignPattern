#pragma once

#include <iostream>
#include <string>

class IStock
{
public:
  virtual ~IStock() {}

  virtual void Buy()
  {
    std::cout << GetName() << "����" << std::endl;
  }

  virtual void Sell()
  {
    std::cout << GetName() << "����" << std::endl;
  }

protected:
  virtual std::string GetName() const = 0;
};

class Stock1 : public IStock
{
protected:
  virtual std::string GetName() const override
  {
    return "��Ʊ1";
  }
};

class Stock2 : public IStock
{
protected:
  virtual std::string GetName() const override
  {
    return "��Ʊ2";
  }
};

class Stock3 : public IStock
{
protected:
  virtual std::string GetName() const override
  {
    return "��Ʊ3";
  }
};

class NationalDebt1 : public IStock
{
protected:
  virtual std::string GetName() const override
  {
    return "��ծ1";
  }
};

class Realty1 : public IStock
{
protected:
  virtual std::string GetName() const override
  {
    return "���ز�1";
  }
};