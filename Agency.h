//Created by IT21212536
#ifndef AGENCY_H
#define AGENCY_H

class Agency 
{
private : 
  char agencyID[10];
  char agencyName[30];
  char agencyType[30];
  char agencyDescription[50];


public : 
  Agency();
  Agency(char agID[10], char agname[30], char agtype[30], char agdes[50]);
  void setAgency (char agID[10], char agname[30], char agtype[30], char agdes[50]);
  void editAgency(char newagnewName[20], char newagdes[50]);
  void viewAgency();
   ~Agency();
};

#endif