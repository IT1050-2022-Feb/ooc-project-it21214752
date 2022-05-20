//created by IT21214752
#ifndef FOREIGNJOBSEEKER_H
#define FOREIGNJOBSEEKER_H
#include "JobSeeker.h"


class ForeignJobSeeker : public JobSeeker
{
private:
	int passportNo;
	char country[20];

public :
	ForeignJobSeeker();
	ForeignJobSeeker(int passport, char fCountry[10]);
	void setDetails(int passport, char fCountry[10]);
	void displayDetails();
	~ForeignJobSeeker();
};

#endif