//created by IT21216428
#ifndef ADMIN_H
#define ADMIN_H
#include "Report.h"
#include "Payment.h"

class Admin 
{
private : 
  char adminID[15];
  char adminName[20];
  char adminPw[30];
  Report *reports[4];

public : 
    Admin();
		Admin(int rno1, int rno2, int rno3, int rno4);

		void checkPayments(Payments *pay);
    void setAdmindetails(char ID[15], char name[20], char pw[20]);
  void displayAdmin();
  ~Admin();
};

#endif