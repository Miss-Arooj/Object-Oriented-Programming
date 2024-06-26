#include<iostream>
using namespace std;

int main() {

	int rows, cols;
	cout << "Enter rows:";
	cin >> rows;
	cout << "Enter columns:";
	cin >> cols;
	cout << endl;

	//Creating array of pointers
	int** arr1 = new int* [rows];  //dynamic memory allocation
    int** arr2 = new int* [rows];  //dynamic memory allocation

	//Creation of 2D array
	for (int i = 0;i < rows;i++) {
		arr1[i] = new int[cols];
		arr2[i] = new int[cols];
	}

	//Input values
	cout << "Input Elements of the Array: " << endl;
	for (int i = 0;i < rows;i++) {
		for (int j = 0;j < cols;j++) {
			cin >> arr1[i][j];
		}
	}

	//Display non-zero elements of arr1 through arr2
	cout << endl << "Non-Zero Elements of 2D Array: " << endl;
	for (int i = 0;i < rows;i++) {
		for (int j = 0;j < cols;j++) {
			if (arr1[i][j] != 0) {
				arr2[i][j] = arr1[i][j];   //storing non-zero elements of arr1 in arr2.
				cout << arr2[i][j] << " ";  //printing non-zero elements of arr1 through arr2.
			}
		}
		cout << endl;
	}

	//Deallocation of dynamic memories.
	for (int i = 0;i < rows;i++) {
		delete[] arr1[i];  //Deallocation of dynamic memory through arr1.
		arr1[i] = nullptr;
		delete[] arr2[i];  //Deallocation of dynamic memory through arr2.
		arr2[i] = nullptr;
	}
	delete[] arr1; //Deallocation of arr1 memory
	arr1 = nullptr;
	delete[] arr2; ////Deallocation of arr2 memory
	arr2 = nullptr;

	return 0;
}