#include <iostream>
#include<string>
using namespace std;

class Ship
{
protected:
	//Data members
	string name, year;
public:
	Ship() {

	}
	//Overloaded Constructor
	Ship(string n, string y) {
		name = n;
		year = y;
	}
	
	//Mutator that gets info from user
	virtual void setInfo() {
		string n, y;
		cout << "Enter ship name: ";
		cin >> n;
		cout << "Enter year the ship was built: ";
		cin >> y;
		name = n;
		year = y;
	}

	//Accessors
	string getName() {
		return name;
	}
	string getyear() {
		return year;
	}

	//Print info for this function
	virtual void print() {
		cout << "Ship" << endl;
		cout << "Name: " << name << endl << "Year Built: " << year << endl;
	}
};

class CruiseShip : public Ship
{
private:
	//Data member
	int passengers;
public:
	CruiseShip(){

	}
	//Overloaded constructor that has inherited variables
	CruiseShip(string n, string y, int p) : Ship(n, y) {
		passengers = p;
	}

	//Mutator that gets info from user
	virtual void setInfo() {
		int p;
		cout << "Enter number of passengers: ";
		cin >> p;
		passengers = p;
	}

	//print function
	virtual void print() {
		cout << "Cruise Ship" << endl;
		cout << "Name: " << Ship::getName() << endl << "Maximum Passanger: " << passengers << endl;
	}
};// end of CruiseShip

class CargoShip : public Ship
{
private:
	//Data member
	int capacity;

public:
	CargoShip() {

	}
	//Overloaded constructor that has inherited variables
	CargoShip(string n, string y, int t) : Ship(n, y) {
		capacity = t;
	}

	//Mutator that gets info  from user
    void setInfo() {
		int t;
		cout << "Please enter the cargo capacity: ";
		cin >> t;
		capacity = t;
	}

	//Print function
	void print() {
		cout << "Cargo Ship" << endl;
		cout << "Name: " << getName() << endl << "Cargo Capacity: " << capacity << endl;
	}
}; //end of CargoShip

int main() {
	const int SIZE = 3;
	Ship* ships[SIZE] = { new Ship(), new CruiseShip(), new CargoShip() };
	int index; //Used with For loops
	for (index = 0; index < SIZE; index++)
	{
		ships[index]->setInfo();
		cout << endl;
	}

	for (index = 0; index < SIZE; index++)
	{
		ships[index]->print();
		cout << endl;
	}
	return 0;
}