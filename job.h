//Created bY IT21212536
#ifndef JOB_H
#define JOB_H

class Client;

class Job
{
private:
  char  jobID[10];
  char jobName[20];
  char jobType[30];
  char jobDescription[50];
  Client *clients;

public:
  Job();
  Job(char j_ID[15], char j_name[20], char j_type[20], char j_des[50]);
  void seteditJob(char j_newName[20], char newdes[50]);
  void setJobdetails(char j_ID[15], char j_name[20], char j_type[20], char j_des[50]);
  void setEditJob(char j_newName[20], char newdes[50]);
  void viewJob();
  char getJob();
  ~ Job();              
};

#endif