#pragma once

#include <iostream> 
#include <string> 

using namespace std;

class Team {

public:
	

	Team(string);
	Team(int);
	
	
	string getTeam();
	int getPoints();
	

private:
	string teamName;
	int teamPoints;
};

