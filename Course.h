//Created by IT21216114
#ifndef COURSE_H
#define COURSE_H
#define size 10
#include "JobSeeker.h"
#include "certificate.h"
#include "Trainer.h"
#include "Payment.h"

class Payments;

class Course
{
	private:
    int courseID;
		char courseName[20];
		char courseDescription[50];
    Certificate *certify[size];
    JobSeeker *jobseeker[size];
    Payments *payment;
    
	public:
		Course();
    Course(int cID, char cName[10], char cDescription[50]);
    void setTrainerDetails(int ID, char name[20]);  
		void setCourseDetails(int cID, char cName[10], char cDescription[50]);
    void payDetails(int payID, char payType[10], char payDescription[50]);
		void getCoursedetails();
    void getTrainerdetails();
    void displayCourseDetails();
		~Course();			
};

#endif