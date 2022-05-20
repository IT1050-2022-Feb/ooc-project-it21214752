//created by IT21216428
#include "admin.h"
#include <cstring>

Admin::Admin()
{
      reports[0] = new Report(100);
			reports[1] = new Report(98);
			reports[2] = new Report(102);
			reports[3] = new Report(140);
}

void Admin::setAdmindetails(char ID[15], char name[20], char pw[20])
{
  strcpy(adminID, ID);
  strcpy(adminName,name);
  strcpy(adminPw, pw);
}
Admin::Admin(int rno1, int rno2, int rno3, int rno4){
			reports[0] = new Report(rno1);
			reports[1] = new Report(rno2);
			reports[2] = new Report(rno3);
			reports[3] = new Report(rno4);
}
