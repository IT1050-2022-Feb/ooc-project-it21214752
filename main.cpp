#include <iostream>
#include <cstring>

#include "User.h"
#include "JobSeeker.h"
#include "Client.h"
#include "admin.h"
#include "Agency.h"
#include "Certificate.h"
#include "Course.h"
#include "feedback.h"
#include "ForeignJobSeeker.h"
#include "job.h"
#include "medicalService.h"
#include "JobSeeker.h"
#include "Payment.h"
#include "Report.h"
#include "Trainer.h"


int main()
{
  JobSeeker *jobSeeker1;
  jobSeeker1 = new JobSeeker();
  
  Client *client1;
  client1 = new Client();
  
  ForeignJobSeeker *foreignJobSeeker1;
  foreignJobSeeker1 = new  ForeignJobSeeker();
  
  Admin *admin1;
  admin1 = new Admin();
  
  Agency *agency1;
  agency1 = new Agency();
  
  Certificate *certificate1;
  certificate1 = new Certificate();
  
  Course *course1;
  course1 = new Course();
  
  Feedback *feedback1;
  feedback1 = new Feedback();
  
  MedicalService *medical1;
  medical1 = new MedicalService();
  
  Payments *payment1;
  payment1 = new Payments();
  
  Report *report1;
  report1 = new Report();
  
  Trainer *trainer1;
  trainer1 = new Trainer();
  
  VirtualAssistant *assistant1;
  assistant1 = new VirtualAssistant();

  delete jobSeeker1;
  delete client1;
  delete foreignJobSeeker1;
  delete admin1;
  delete agency1;
  delete certificate1;
  delete course1;
  delete feedback1;
  delete medical1;
  delete payment1;
  delete report1;
  delete trainer1;
  delete assistant1;

  return 0;
  }