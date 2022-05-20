//created by IT21214752
#ifndef JOBSEEKER_H
#define JOBSEEKER_H
#define size 10
#include "User.h"
#include "Job.h"
#include "feedback.h"
#include "certificate.h"
#include "medicalService.h"
#include "Course.h"


class Course;

class JobSeeker : public User
{
protected:
	char jobSeekerID[10];
  int age;
	char qualifications[50];
  Certificate *certificates;
  Feedback *feedbacks;
  MedicalService *med[size];
  Course *courses[size];

public:
	JobSeeker();
	JobSeeker(char ID[10], int jAge, char qual[50]);
  void CourseDet(int cID, char cName[10], char cDescription[50]);
  void medDetails(char cID[10], char cName[20], char cType[20],char cdes[50]);
	void displayDetails();
	~JobSeeker();
};

#endif