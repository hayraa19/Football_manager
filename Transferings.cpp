#include <iostream>
#include"Transferings.h"
#include <string>
#include <vector> 

using namespace std;



void fillVector1(vector<string>& liverpoolTeam) {

	liverpoolTeam.push_back("player1");
	liverpoolTeam.push_back("player2");
	liverpoolTeam.push_back("player3");
	liverpoolTeam.push_back("player4");
}

void fillVector2(vector<string>& chelseaTeam) {

	chelseaTeam.push_back("player1");
	chelseaTeam.push_back("player2");
	chelseaTeam.push_back("player3");
	chelseaTeam.push_back("player4");


}


void printVector1(const vector<string>& liverpoolTeam) {

	cout << "Liverpool Team" << endl;

	for (unsigned int i = 0; i < liverpoolTeam.size(); i++) {
		cout << liverpoolTeam[i] << " " << endl;

	}


}

void printVector2(const vector<string>& chelseaTeam) {

	cout << "Chelsea Team" << endl;

	for (unsigned int j = 0; j < chelseaTeam.size(); j++) {
		cout << chelseaTeam[j] << " " << endl;
	}

}

void choosePlayer(vector<string>& liverpoolTeam, vector<string>& chelseaTeam) {
	int input;
	cout << "choose player number to be transfered from liverpool team" << endl;
	cin >> input;

	if (input == 1) {
		liverpoolTeam.erase(liverpoolTeam.begin() + 1);
		chelseaTeam.push_back(liverpoolTeam[0]);
		
	}
	else if (input == 2) {
		liverpoolTeam.erase(liverpoolTeam.begin() + 2);
	}
	else if (input == 3) {
		liverpoolTeam.erase(liverpoolTeam.begin() + 3);
	}
	else if (input == 4) {
		liverpoolTeam.erase(liverpoolTeam.begin() + 4);
	}
}
int main() {

	

	fillVector1(liverpoolTeam);
	fillVector2(chelseaTeam);

	printVector1(liverpoolTeam);
	printVector2(chelseaTeam);

	choosePlayer(liverpoolTeam, chelseaTeam);

	return 0;
}
