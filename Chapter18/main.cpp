#include "GameRole.h"
#include "RoleStateCaretaker.h"

int main()
{
  GameRole lixiaoyao;
  lixiaoyao.GetInitState();
  lixiaoyao.StateDisplay();

  RoleStateCaretaker statAdmin;
  statAdmin.SetMemento(lixiaoyao.SaveState());

  lixiaoyao.Fight();
  lixiaoyao.StateDisplay();

  lixiaoyao.RecoverState(statAdmin.GetMemento());
  lixiaoyao.StateDisplay();

  return 0;
}