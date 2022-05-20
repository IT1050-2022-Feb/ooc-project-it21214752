//Created by IT21212536
#include "Job.h"
#include <cstring>

Job::Job()
{
  strcpy(jobID, " ");
  strcpy(jobName," ");
  strcpy(jobType, " ");
  strcpy(jobDescription, " ");
}

Job::Job(char j_ID[10], char j_name[20], char j_type[20], char j_des[50])
{
  strcpy(jobID, j_ID);
  strcpy(jobName,j_name);
  strcpy(jobType, j_type );
  strcpy(jobDescription, j_des);
}