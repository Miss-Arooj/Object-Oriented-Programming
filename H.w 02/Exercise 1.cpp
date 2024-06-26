#include<iostream>
#include<string.h>
using namespace std;

int main() {

	int size;  //Size of array
	cout << "Enter size of an array:";
	cin >> size;

	char* array = new char[size]; //Dynamic Allocate Memory

	cout << "Enter c-string: ";
	for (int i = 0;i < size;i++) {
		cin >> *(array + i);  //Input content of array
	}

	cout << "Backward c-string: ";
	for (int i = size - 1;i >= 0;i--) {
		cout << array[i];  //Display backward content of array 
	}

	delete[] array;  //delete array
	array = nullptr;
	return 0;
}