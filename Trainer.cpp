//Created by IT21216114
#include "Trainer.h"
#include <cstring>

Trainer::Trainer()
{
  trainerID = 0;
  strcpy(trainerName , " ");
}


Trainer::Trainer(int ID, char name[20])
{
  trainerID = ID;
  strcpy(trainerName , name);
}