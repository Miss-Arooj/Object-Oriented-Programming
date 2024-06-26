#include<iostream>
using namespace std;

template<class type>
type surprise(type x, type y) {
	return x + y;
}

int main() {
	cout << surprise(5, 7) << endl;  //Output: 12
	string str1 = "Sunny";
	string str2 = "Day";
	cout << surprise(str1, str2) << endl; //Output: SunnyDay

	return 0;
}