//created by IT21214752
#include "Client.h"
#include <cstring>

Client::Client()
{
  strcpy(clientID, " ");
  strcpy(clientType," ");
}


Client::Client(char ID[10], char type[10])
{
  strcpy(clientID, ID);
  strcpy(clientType,type); 
}
