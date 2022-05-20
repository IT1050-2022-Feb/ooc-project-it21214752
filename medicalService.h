//created by IT21215674

#ifndef MEDICALSERVICES_H
#define MEDICALSERVICES_H
#include "JobSeeker.h"

class JobSeeker;

class MedicalService 
{
private : 
  char medicalID[10];
  char medicalName[20];
  char medicalType[20];
  char medicalDescription[50];
  JobSeeker *jobseekers;

public : 
  MedicalService();
  MedicalService(char msID[10], char msName[20], char msType[20],char msdes[50]);
  void setMedicalServicedetails(char cID[10], char cName[20], char cType[20],char cdes[50]);
  void displayMedicalServiceDetails();
  ~MedicalService();
};

#endif