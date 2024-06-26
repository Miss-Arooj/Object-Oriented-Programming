#include<iostream>
using namespace std;

class A {
	int n1, n2, n3;  //Data members
public:
	//Non-Parameterized Constructor
	A() {
		n1 = 5;
		n2 = 6;
		n3 = 7;
		cout << "Non-Parameterized Programmer defined constructor\n";
	}
	//Setters
	void setN1(int val1) {
		n1 = val1;
	}
	void setN2(int val2) {
		n2 = val2;
	}
	void setN3(int val3) {
		n3 = val3;
	}
	//Getters
	int getN1() {
		return n1;
	}
	int getN2() {
		return n2;
	}
	int getN3() {
		return n3;
	}
	//Parameterized Constructor
	A(int val1, int val2, int val3) {     //Constructor Overloading
		n1 = val1;
		n2 = val2;
		n3 = val3;
		cout << "Parameterized Constructor\n";
	}
};   //end of class

int main() {
	int v1, v2, v3;
	cout << "Enter three values: ";
	cin >> v1 >> v2 >> v3;
	A obj1(v1, v2,v3);   //Calling Parameterized Constructor
	//A obj2;   //Calling Non-Parameterized Programmer Define Constructor
	A obj();   //Calling Default Constructor
	return 0;
}   //end of main