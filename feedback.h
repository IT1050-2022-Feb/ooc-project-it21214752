#ifndef VIRTUALASSISTANT_H
#define VIRTUALASSISTANT_H
#define size 10
#include "User.h"

class User;

class VirtualAssistant 
{
private : 
  char assistantID[15];
  char assistantName[20];
  char assistantType[30];
  User *user[size];

public : 
  VirtualAssistant();
  VirtualAssistant(char ID[15], char name[20], char type[20]);
  void accessUser( char userName[20]);
  void viewAssistant();
  ~VirtualAssistant();
};

#endif
