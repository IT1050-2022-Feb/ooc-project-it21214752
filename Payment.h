//Created by IT21216114
#ifndef PAYMENT_H
#define PAYMENT_H
#include "Course.h"

class Payments
{
	private:
		int paymentID;
		char paymentType[10];
		char paymentDescription[50];
		float paymentAmount;
    Course *course;
		
	public:
		Payments();
    Payments(int payID, char payType[10], char payDesc[50], int amount);
		void setPaymentDetails(int payID, char payType[10], char payDescription[50]);
		void setPaymentAmount(int payID, float payAmount);
    void setAdmindetails(char ID[15], char name[20], char pw[20]);
		void getPaymentdetails();
		float getAmount();
		void displayPaymentDetails();
		~Payments();			
};

#endif