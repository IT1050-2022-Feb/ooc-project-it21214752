//created by IT21215674

#ifndef CERTIFICATE_H
#define CERTIFICATE_H

class Certificate
{
private
 char certificateID[10];
 char certificateName[20];
 char certificateType[10];
 char certificateDescription[50];

public
Certificate();
Certificate(char cID[10],char cName[20], char cType[10], char cDes[50]);
void setcertificatedetails(char cID[10],char cName[20], char cType[10], char cDes[50]);
void dispalyDetails();
~Certificate()
}