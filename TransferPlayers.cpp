#include <iostream>
#include"TransferPlayers.h"
#include <vector>
#include <string>

using namespace std;

Transfers::Transfers() {
	transferFee = 0;
}
Transfers::Transfers(string name, string team, int fee) {
	playerName = name;
	teamName = team;
	transferFee = fee;
}
Transfers::~Transfers() {

}

string Transfers::getName() const {
	return playerName;
}
string Transfers::getTeam() const {
	return teamName;
}
int Transfers::getFee() const {
	return transferFee;
}

void Transfers::setName(string name) {
	playerName = name;
}
void Transfers::setTeam(string team) {
	teamName = team;
}
void Transfers::setFee(int fee) {
	transferFee = fee;
}
void fillVector(vector<Transfers>& newmyTransfers) {

	string name;
	string team;
	int fee;

	cout << "How mmany players are to be transfered: " << endl;
	int transferSize;
	cin >> transferSize;
	

	for (int i = 0; i < transferSize; i++) {
		cout << "Enter player name to be transfered: " << endl;
		cin >> name;
		cout << "Enter player's team: " << endl;
		cin >> team;
		cout << "Enter the fee for that player: " << endl;
		cin >> fee;
		system("Pause");

		Transfers newTransfers(name, team, fee);
		newmyTransfers.push_back(newTransfers);
		cout << endl;
	}
	cout << endl;
} 

void printVector(const vector<Transfers>& newmyTransfers) {
	unsigned int size = newmyTransfers.size();

	for (unsigned int i = 0; i < size; i++) {
		cout << "Player name: " << newmyTransfers[i].getName() << endl;
		cout << "PLayer team: " << newmyTransfers[i].getTeam() << endl;
		cout << "Fee for player: " << newmyTransfers[i].getFee() << endl;
		cout << endl;
	}

}

int main() {
	

	vector<Transfers> myTransfers;
	fillVector(myTransfers);
	printVector(myTransfers);

	return 0;
}

