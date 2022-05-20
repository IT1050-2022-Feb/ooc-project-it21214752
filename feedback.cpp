//created by IT21216428
#include "virtualAssistant.h"
#include <cstring>

VirtualAssistant::VirtualAssistant()
{
  strcpy(assistantID, " ");
  strcpy(assistantName," ");
  strcpy(assistantType," ");
}

VirtualAssistant::VirtualAssistant(char ID[15], char name[20], char type[20])
{
  strcpy(assistantID, ID);
  strcpy(assistantName,name);
  strcpy(assistantType,type);
}