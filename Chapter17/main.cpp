#include "Player.h"
#include "Forwards.h"
#include "Center.h"
#include "Guards.h"
#include "Translator.h"

int main()
{
  Player* b = new Forwards("°ÍµÙ¶û");
  b->Attach();

  Player* m = new Guards("Âó¿Ë¸ñÀ×µÏ");
  m->Attach();

  Player* ym = new Translator("Ò¦Ã÷");
  ym->Attach();
  ym->Defense();

  delete b;
  delete m;
  return 0;
}