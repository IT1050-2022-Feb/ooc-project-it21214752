//created by IT21215674
#include "Certificate.h" 
#include <cstring>

Certificate::Certificate()
{
  strcpy(certificateID," ");
  strcpy(certificateName," ");
  strcpy(certificateType," ");
  strcpy(certificateDescription," ");
}

Certificate::Certificate(char ID[10],char name[20],char type[10], char des[50])
{
  strcpy(certificateID,ID);
  strcpy(certificateName,name);
  strcpy(certificateType,type); 
  strcpy(certificateDescription,des); 
}


  
