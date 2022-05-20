//Created by IT21216114
#include "Course.h"
#include <cstring>

Course::Course()
{
  courseID = 0;
  strcpy(courseName," ");
  strcpy(courseDescription, " ");
}

Course::Course(int cID, char cName[10], char cDescription[50])
{
  courseID = cID;
  strcpy(courseName, cName);
  strcpy(courseDescription, cDescription);  
}