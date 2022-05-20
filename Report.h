//Created by IT21212536
#ifndef REPORT_H
#define REPORT_H
#include "Client.h"

class Client;

class Report {
private:
  char reportID[10];
  char reportName[30];
  char reportType[30];
  char reportDescription[50];
  Client *client;


public : 
  Report();
  Report(char vrID[10], char vrName[20], char vrpw[30], char vrdes[50]);
  void accessClient(char ID[10], char type[10]);
  void setReportdetails(char vrID[15], char vrName[20], char vrpw[20],char vrdes[50]);
  void editreport(char newvrName[20], char vrdes[50]);
  void viewReport();
  ~Report();
};

#endif