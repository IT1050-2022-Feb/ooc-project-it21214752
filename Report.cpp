//Created by IT21212536
#include "Report.h"
#include <cstring>

Report::Report()
{
  strcpy(reportID, " ");
  strcpy(reportName," ");
  strcpy(reportType, " ");
  strcpy(reportDescription," ");
} 


Report::Report(char vrID[10], char vrName[20], char vrpw[30], char vrdes[50])
{
  strcpy(reportID, vrID);
  strcpy(reportName, vrName);
  strcpy(reportType, vrpw);
  strcpy(reportDescription,vrdes);
}