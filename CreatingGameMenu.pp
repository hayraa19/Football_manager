#include <iostream>
#include <string>
#include"Header.h"


using namespace std;
//function definitions

void displayMenu() {

	cout << " ___________________" << endl;
	cout << "|1. Start New Game /" << endl;
	cout << "|_________________/    " << endl;
	cout << " ___________________" << endl;
 	cout << "|2. Resume Game    /" << endl;
	cout << "|_________________/    " << endl;
	cout << " ___________________" << endl;
	cout << "|3. Delete Game    /" << endl;
	cout << "|_________________/    " << endl;
	cout << " ___________________" << endl;
	cout << "|4. Quit Game      /" << endl;
	cout << "|_________________/    " << endl;
	cout << " ___________________" << endl;
	cout << "|5. Settings       /" << endl;
	cout << "|_________________/    " << endl;
}

void enterChoice() {
	int input;
	cout << "Pick an option: " << endl;
	cin >> input;

	switch (input) {
	case 1:
		cout << "Starting New Game..... " << endl;

		break;
	case 2:
		cout << "Resuming Saved Game....... " << endl;
		break;
	case 3:
		cout << "Deleting Saved game...... " << endl;
		break;
	case 4:
		cout << "Thank You For Playing " << endl;
		break;
	case 5:
		cout << "You've Entered The Game's Settings " << endl;
		break;


	}
}

int main() {
	
		displayMenu();
		enterChoice();
		

	return 0;

}

