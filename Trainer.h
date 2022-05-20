//Created by IT21216114
#ifndef TRAINER_H
#define TRAINER_H
#include "Course.h"

class Trainer
{
	private:
		int trainerID;
		char trainerName[20];
		
	public:
		Trainer();
    Trainer(int ID, char name[20]);
    void trainerDetails(int ID, char name[20]);
    void addCourse( int cID, char cName[20]);
		void getTrainerdetails();
		void displayTrainerDetails();
		~Trainer();			
};

#endif