#include <iostream>
using namespace std;

void func(int a) {
	a = 10;
}
void main() {
	int a = 5;
	cout << a << endl;
	func(a);
	cout << a << endl;
}