//created by IT21214752
#include "JobSeeker.h"
#include <cstring>

JobSeeker::JobSeeker()
{
  strcpy(jobSeekerID," ");
  age = 0;
  strcpy(qualifications, " ");
}


JobSeeker::JobSeeker(char ID[10], int jAge, char qual[50])
{
  strcpy(jobSeekerID, ID);
  age = jAge;
  strcpy(qualifications, qual);
}

