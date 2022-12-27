#include "Player.h"
#include "Forwards.h"
#include "Center.h"
#include "Guards.h"
#include "Translator.h"

int main()
{
  Player* b = new Forwards("�͵ٶ�");
  b->Attach();

  Player* m = new Guards("��˸��׵�");
  m->Attach();

  Player* ym = new Translator("Ҧ��");
  ym->Attach();
  ym->Defense();

  delete b;
  delete m;
  return 0;
}