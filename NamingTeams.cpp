#include <iostream>
#include <string>
#include"Header.h"

using namespace std;



Team::Team(string teamName1) {
	teamName = teamName1;
}

Team::Team(int teampoints) {
	teamPoints = teampoints;

}

string Team::getTeam() {
	return teamName;
}

int Team::getPoints() {
	return teamPoints;
}

