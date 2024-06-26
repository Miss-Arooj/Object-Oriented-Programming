#include<iostream>
using namespace std;

//PART(a)
int** AllocateMemory(int rows, int cols) {
	int** arr1 = new int*[rows];
	for (int i = 0;i < rows;i++) {
		arr1[i] = new int[cols];
	}
	return arr1;
}

//PART(b)
void InputMatrix(int** matrix, const int rows, const int cols) {
	for (int i = 0;i < rows;i++) {
		cout << "Address of " << i << "th of the array: " << *(matrix + i)<<endl;
		for (int j = 0;j < cols;j++) {
			cin >> *((*(matrix + i)) + j);
		}
	}

}

//PART(c)
void DisplayMatrix(int** matrix, const int& rows, const int& cols) {
	cout << endl<<"Elements of Matrix:"<<endl;
	for (int i = 0;i < rows;i++) {
		
		for (int j = 0;j < cols;j++) {
			cout << "arr[" << i << "][" << j << "]:" << *((*(matrix + i)) + j)<< endl;
			//cin >> *((*(matrix + i)) + j);
		}
		cout << endl;
	}

}

//PART(d)
int* maxCol(int** matrix, const int rows, const int cols) {
	int maximum = 0;
	int* cols1 = new int[rows];
	for (int j = 0;j < cols;j++) {
		for (int i = 0;i < rows;i++) {
			if (maximum < matrix[i][j])
				maximum = matrix[i][j];
		}
		cols1[j] = maximum;
		maximum = 0;
	}
	return cols1;
}

//Part(e)
void DeallocateMemory(int** matrix, const int& rows) {
	for (int i = 0;i < rows;i++) {
		delete[] matrix[i];
		matrix[i] = nullptr;
	}
	delete[] matrix;
	matrix = nullptr;
}

int main()
{
	//take input from user for rows and cols
	int rows, cols;
	cout << "Enter Rows:";
	cin >> rows;
	cout << "Enter Columns:";
	cin >> cols;
	cout << endl;
	

	int** matrix = AllocateMemory(rows, cols); //Function call to allocate memory
	InputMatrix(matrix, rows, cols);  //Function call to input array elements
	DisplayMatrix(matrix, rows, cols); //Function call to display message

	int* maxColValues = maxCol(matrix, rows, cols); //Function call to store maximum column elements into a pointer
	cout << "Maximum Elements of all Columns: "<<endl;
	for (int i = 0; i<cols; i++)   //Printing maximum column elements
		cout<<*(maxColValues + i)<<"  ";
	cout<<endl;

	DeallocateMemory(matrix, rows);  //Function call to deallocate matrix
	delete[] maxColValues;  //Function call to deallocate memory
		return 0;
}