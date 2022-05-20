//created by IT21215674

#include "medicalService.h"
#include <cstring>

MedicalService::MedicalService()
{
  strcpy(medicalID, " ");
  strcpy(medicalName," ");
  strcpy(medicalType, " ");
  strcpy(medicalDescription," ");
}

MedicalService:: MedicalService(char msID[10], char msName[20], char msType[20],char msdes[50])
{
  strcpy(medicalID, msID);
  strcpy(medicalName, msName);
  strcpy(medicalType, msType);
  strcpy(medicalDescription,msdes);
}