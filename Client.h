//created by IT21214752
#ifndef CLIENT_H
#define CLIENT_H
#define size 10
#include "User.h"
#include "Job.h"
#include "Agency.h"
#include "Report.h"
#include "feedback.h"

class Client : public User
{
protected:
	char clientID[10];
  char clientType[10];
  Job *jobs;
  Report *report[size];
  Feedback *feedback[size];
   
public:
	Client();
	Client(char clID[10], char type[10]);
	void setDetails(char clID[10], char type[10]);
  void addAgency(char agID[10], char agname[30], char agtype[30], char agdes[50]);
	void getDetails();
  void setAgency (char agID[10], char agname[30], char agtype[30], char agdes[50]);
	void displayClient();
	~Client();
};

#endif