#include "Person.h"
#include <iostream>
#include "Clothes.h"

int main()
{
  Person xc("小菜");

  std::cout << "第一种装扮：" << std::endl;
  Sneakers pqx;
  BigTrouser kk;
  TShirts dtx;

  pqx.Decorate(&xc);
  kk.Decorate(&pqx);
  dtx.Decorate(&kk);
  dtx.Show();

  std::cout << "\n第二种装扮：" << std::endl;
  LeatherShoes px;
  Tie ld;
  Suit xz;

  px.Decorate(&xc);
  ld.Decorate(&px);
  xz.Decorate(&ld);
  xz.Show();

  std::cout << "\n第三种装扮：" << std::endl;
  Sneakers pqx2;
  LeatherShoes px2;
  BigTrouser kk2;
  Tie ld2;

  pqx2.Decorate(&xc);
  px2.Decorate(&pqx2);
  kk2.Decorate(&px2);
  ld2.Decorate(&kk2);
  ld2.Show();

  return 0;
}