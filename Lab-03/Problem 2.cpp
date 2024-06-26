#include<iostream>
using namespace std;

void loadmatrix(int** &matrix, int &rows, int &cols) {
	cout << "The given matrix is: ";
	for (int i = 0;i < rows;i++) {
		for (int j = 0;j < cols;j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

void print(int** matrix, int rows) {
	int k = 0, z = 0, a = 0;
	int count = 0;
	int** ptr = new int* [rows];
	int* cols = new int[rows];
	for (int j = 0;j < rows;j++) {
		for (int i = 0;i < 7;i++) {
			if (matrix[j][i] != 0) {
				count++;
			}
		}
		cols[j] = (count * 2) + 1;
		count = 0;
	}
	for (int i = 0;i < rows;i++) {
		ptr[i] = new int[cols[i]];
	}
	for (int j = 0;j < rows;j++) {
		for (int i = 0;i < 7;i++) {
			if (matrix[i][j] != 0) {
				count = count + 1;
			}
		}
	}
}

int main() {
	int rows, cols;
	cout << "Enter rows";
	cin >> rows;
	cout << "Enter cols";
	cin >> cols;

	//Creating array of pointers
	int** arr1 = nullptr;
	arr1 = new int* [rows];

	//Creation of 2D array
	for (int i = 0;i < rows;i++) {
		arr1[i] = new int[cols];
	}

	//Input values
	for (int i = 0;i < rows;i++) {
		for (int j = 0;j < cols;j++) {
			cout << "Enter value at " << i << j << " index: ";
			cin >> arr1[i][j];
		}
	}

	return 0;
}