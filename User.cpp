//created by IT21214752
#include "User.h"
#include <cstring>

User::User()
{
  strcpy(userName," ");
  telNum = 0;
  strcpy(address," ");
  strcpy(userType, " ");
}


User::User(char name[30], int telNo, char add[30], char type[10])
{
  strcpy(userName, name);
  telNum = telNo;
  strcpy(address,add);
  strcpy(userType, type);
}
