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


Team arsenal(" 1 Arsenal");
Team chelsea(" 2 Chelsea");
Team liverpool(" 3 Liverpool");
Team man_city(" 4 Man city");   
Team man_united(" 5 Man united");
Team tottenham(" 6 Tottenham");
Team leicester_city(" 7 Leicester city");
Team southampton(" 8 Southampton");
Team sheff_utd(" 9 Sheff Utd");
Team everton(" 10 Everton");

Team arsenalPoints(34);
Team chelseaPoints(44);
Team liverpoolPoints(76); 
Team man_cityPoints(57);
Team man_unitedPoints(41);
Team tottnenhamPoints(40);
Team leicester_cityPoints(50);
Team southhamptonPoints(31);
Team sheff_utdPoints(40);
Team evertonPoints(36);


int main() {

	cout << "               " << " " << "Club Points: " << " " << "Wins: " << " "<< "Draws: " << " "<< "Losses: "<< endl;
	cout << arsenal.getTeam() << "               " << arsenalPoints.getPoints() << "      " << "7" << "    " << "13" << "      " << "6" << endl;
	cout << chelsea.getTeam() << "               " << chelseaPoints.getPoints() << "     " << "13" << "     " << "5" << "      " << "9" << endl;
	cout << liverpool.getTeam() << "             " << liverpoolPoints.getPoints() << "     " << "25" << "     " << "1" << "      " << "0" << endl;
	cout << man_city.getTeam() << "              " << man_cityPoints.getPoints() << "     " << "18" << "     " << "3" << "      " << "6" << endl;
	cout << man_united.getTeam() << "            " << man_unitedPoints.getPoints() << "     " << "11" << "     " << "8" << "      " << "8" << endl;
	cout << tottenham.getTeam() << "             " << tottnenhamPoints.getPoints() << "     " << "11" << "     " << "7" << "      " << "9" << endl;
	cout << leicester_city.getTeam() << "        " << leicester_cityPoints.getPoints() << "     " << "15" << "     " << "5" << "      " << "7" << endl;
	cout << southampton.getTeam() << "           " << southhamptonPoints.getPoints() << "      " << "9" << "     " << "4" << "     " << "12" << endl;
	cout << sheff_utd.getTeam() << "             " << sheff_utdPoints.getPoints() << "     " << "10" << "     " << "7" << "      " << "7" << endl;
	cout << everton.getTeam() << "              " << evertonPoints.getPoints() << "     " << "10" << "    " << "10" << "      " << "7" << endl;

	int input;
	do
	{
		
		cout << "Choose team to see ranking in league table: " << endl;
		cin >> input;

		switch (input) {
		case 1:
			cout << "Coming at 8th place with 34 club points" << endl;
			break;
		case 2:
			cout << "Coming at 4th place with 44 club points" << endl;
			break;
		case 3:
			cout << "Coming at 1st place with 76 club points. WINNING CLUB OF THE PREMIER LEAGUE!!!" << endl;
			break;
		case 4:
			cout << "Coming in 2nd place with 57 club points" << endl;
			break;
		case 5:
			cout << "Coming at 5th place with 41 club points " << endl;
			break;
		case 6:
			cout << "Coming at 6th place with 40 club points" << endl;
			break;
		case 7:
			cout << "Coming at 3rd place with 50 points" << endl;
			break;
		case 8:
			cout << "Coming at last place with only 31 club points" << endl;
			break;
		case 9:
			cout << "Coming at 7th place with 40 club points" << endl;
			break;
		case 10:
			cout << "Coming at 9th place with 36 club points" << endl;
			break;
			
		}
     cout << "Press 0 to exit" << endl;
	} while (input != 0);
	
	return 0;
};
