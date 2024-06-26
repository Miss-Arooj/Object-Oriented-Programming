#include<iostream>
using namespace std;

int main() {

	int rows, cols,count=0;
	cout << "Enter rows:";
	cin >> rows;
	cout << "Enter columns:";
	cin >> cols;
	cout << endl;

	//Creating array of pointers arr1,arr2,arr3,arr4 respectively.
	int** arr1 = new int* [rows];  //dynamic memory allocation
    int** arr2 = new int* [rows];  //dynamic memory allocation
    int** arr3 = new int* [rows];  //dynamic memory allocation
    int** arr4 = new int* [rows];  //dynamic memory allocation

	//Creation of 2D array
	for (int i = 0;i < rows;i++) {
		arr1[i] = new int[cols];
		arr2[i] = new int[cols];
		arr3[i] = new int[cols];
		arr4[i] = new int[cols];
	}

	//Input values of arr1
	cout << "Input Elements of the Array: " << endl;
	for (int i = 0;i < rows;i++) {
		for (int j = 0;j < cols;j++) {
			cin >> arr1[i][j];
		}
	}

	//Display arr2 (compresses array) with 1st column as counts of 1's and second column as 1.
	cout << endl << "Elements of Compresed array: " << endl;
	for (int i = 0,one=1;i < rows;i++) {
		for (int j = 0;j < cols;j++) {
				arr2[i][j] = arr1[i][j];
				if (arr1[i][j] !=0) {
				count++;
			}
		}
		cout << count << "  "<<one<<endl;
		count = 0;
	}

	//Storing location of 1's in arr3 through arr2 
	for (int i = 0;i < rows;i++) {
		for (int j = 0;j < cols;j++) {
			if (arr2[i][j] == 1) {
				arr3[i][j]=i;
			}
		}
	}

	//Transformation of arr2 (compressed array) in arr4 through arr3 (location of 1's)
	for (int i = 0;i < rows;i++) {
		for (int j = 0;j < cols;j++) {
			if (i == arr3[i][j]) {
				arr4[i][j] = 1;
			}
			else {
				arr4[i][j] = 0;
			}
		}
	}

	//Displaying the Transformed array (arr4)
	cout << endl << "Transformed array:"<<endl;
	for (int i = 0;i < rows;i++) {
		for (int j = 0;j < cols;j++) {
			cout << arr4[i][j] << "  ";
		}
		cout << endl;
	}

	//Deallocation of dynamic memories.
	for (int i = 0;i < rows;i++) {
		for (int j = 0;j < cols;j++) {
			delete[] arr1[i];  //Deallocation of memory through arr1.
			arr1[i] = nullptr;
			delete[] arr2[i];  //Deallocation of memory through arr2. 
			arr2[i] = nullptr;
			delete[] arr3[i];  //Deallocation of memory through arr3
			arr3[i] = nullptr;
			delete[] arr4[i];  //Deallocation of memory through arr4.
			arr4[i] = nullptr;
		}
	}

	delete[] arr1; //Deallocation of arr1 memory
	arr1 = nullptr;
	delete[] arr2; //Deallocation of arr2 memory
	arr2 = nullptr;
	delete[] arr3; //Deallocation of arr3 memory
	arr3 = nullptr;
	delete[] arr4; //Deallocation of arr4 memory
	arr4 = nullptr;

	return 0;
}