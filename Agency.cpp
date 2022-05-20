//Created by IT21212536
#include "Agency.h"
#include <cstring>

Agency :: Agency()
{
  strcpy(agencyID, " ");   strcpy(agencyName," ");
  strcpy(agencyType," ");
  strcpy(agencyDescription, " ");
}


Agency::Agency(char ID[10], char name[20], char type[30], char des[50])
{
  strcpy(agencyID,ID);
  strcpy(agencyName, name);
 strcpy(agencyType,type);
  strcpy(agencyDescription, des);
}