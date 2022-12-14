#pragma once

class Product;

class Builder
{
public:
  virtual ~Builder() {}

  virtual void BuildPartA() = 0;
  virtual void BuildPartB() = 0;
  virtual Product* GetResult() = 0;
};