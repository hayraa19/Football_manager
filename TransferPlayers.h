#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Transfers {

public:
	//default constructor 
	Transfers();

	//overload constructor 
	Transfers(string, string, int);

	//destructor 
	~Transfers();

	//accessor functions 
	string getName() const;
	string getTeam() const;
	int getFee() const;

	//mutator functions 
	void setName(string);
	void setTeam(string);
	void setFee(int);
private:
	//member variables
	string playerName;
	string teamName;
	int transferFee;
};
void fillVector(vector<Transfers>&);
//fillVector
//@param - passes vector in by reference and fills information in the vector 

void printVector(const vector<Transfers>&);
// printVector() 
//@param const vector<Transfers>& - passes the vector by referene as a constnt since it won't be changed and prints the vector 


