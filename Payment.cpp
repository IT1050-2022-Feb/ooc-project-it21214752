//Created by IT21216114
#include "Payment.h"
#include <cstring>

Payments::Payments()
{
  paymentID = 0;
  strcpy(paymentType, " ");
  strcpy(paymentDescription, " ");
  paymentAmount = 0;
}


Payments::Payments(int payID, char payType[10], char payDesc[50], int amount)
{
  paymentID = payID;
  strcpy(paymentType, payType);
  strcpy(paymentDescription, payDesc);
  paymentAmount = amount;
}