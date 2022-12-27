#include "Player.h"
#include "Forwards.h"
#include "Center.h"
#include "Guards.h"
#include "Translator.h"

int main()
{
  Player* b = new Forwards("巴蒂尔");
  b->Attach();

  Player* m = new Guards("麦克格雷迪");
  m->Attach();

  Player* ym = new Translator("姚明");
  ym->Attach();
  ym->Defense();

  delete b;
  delete m;
  delete ym;
  return 0;
}
