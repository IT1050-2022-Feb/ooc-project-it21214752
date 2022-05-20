//created by IT21214752
#include "ForeignJobSeeker.h"
#include <cstring>

ForeignJobSeeker::ForeignJobSeeker()
{
  passportNo = 0;
  strcpy(country , " ");
}

ForeignJobSeeker::ForeignJobSeeker(int passport, char fCountry[10])
{
  passportNo = passport;
  strcpy(country , fCountry);
}


