#include "Work.h"
#include "State.h"
#include "ForenoonState.h"
#include "NoonState.h"
#include "AfternoonState.h"
#include "EveningState.h"
#include "RestState.h"
#include "SleepingState.h"

int main()
{
  Work emergencyProjects;

  emergencyProjects.SetHour(9);
  emergencyProjects.WriteProgram();
  emergencyProjects.SetHour(10);
  emergencyProjects.WriteProgram();
  emergencyProjects.SetHour(12);
  emergencyProjects.WriteProgram();
  emergencyProjects.SetHour(13);
  emergencyProjects.WriteProgram();
  emergencyProjects.SetHour(14);
  emergencyProjects.WriteProgram();
  emergencyProjects.SetHour(17);

  emergencyProjects.SetFinished(false);

  emergencyProjects.WriteProgram();
  emergencyProjects.SetHour(19);
  emergencyProjects.WriteProgram();
  emergencyProjects.SetHour(22);
  emergencyProjects.WriteProgram();

  return 0;
}