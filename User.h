//created by IT21214752
#ifndef USER_H
#define USER_H
#include "Payment.h"
#include "virtualAssistant.h"

class User
{
protected:
	char userName[30];
	int telNum;
	char address[30];
	char userType[10];
  VirtualAssistant *VA;
 
public:
	User();
	User(char name[30], int telNo, char add[30], char type[10]);
	void setDetails(char name[30], int telNo, char add[30], char type[10]);
  Payments *pay;
  void displayDetails();
	~User();
};

#endif
