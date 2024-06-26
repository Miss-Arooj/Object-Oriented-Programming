#include<iostream>
using namespace std;

template<class Operation>
Operation performOperation(Operation x, Operation y, char o) {
	if (o == '+') {
		x + y;
		return x + y;
	}
	else if (o == '-') {
		x - y;
		return x - y;
	}
	else if (o == '*') {
		x* y;
		return x * y;
	}
	else {
		x / y;
		return x / y;
	}
}

int main()
{
	int a, b;  // this can be float, int or double too
	float c, d;
	double e, f;
    char op;

	// For integer Value
	cout << "-------------------For Integer-------------------\n";
	cout << "Enter first operand: ";
	cin >> a;
	cout << "Enter second operand: ";
	cin >> b;
	cout << "Enter operation: ";
	cin >> op;   // op can be +, -, * or /

	if (op == '*' || op == '+' || op == '-' || op == '/')
	{
		cout << "Output: " << performOperation(a, b, op) << endl <<endl;
	}
	else
	{
		cout << "Wrong operation.\n";
	}

	//For Float value
	cout << "-------------------For Float-------------------\n";
	cout << "Enter first operand: ";
	cin >> c;
	cout << "Enter second operand: ";
	cin >> d;
	cout << "Enter operation: ";
	cin >> op;   // op can be +, -, * or /

	if (op == '*' || op == '+' || op == '-' || op == '/')
	{
		cout << "Output: " << performOperation(c, d, op)<<endl<<endl;
	}
	else
	{
		cout << "Wrong operation.\n";
	}

	//For Double Value
	cout << "-------------------For Double-------------------\n";
 	cout << "Enter first operand: ";
	cin >> e;
	cout << "Enter second operand: ";
	cin >> f;
	cout << "Enter operation: ";
	cin >> op;   // op can be +, -, * or /

	if (op == '*' || op == '+' || op == '-' || op == '/')
	{
		cout << "Output: " << performOperation(e, f, op) << endl;
	}
	else
	{
		cout << "Wrong operation.\n";
	}

	return 0;
}
