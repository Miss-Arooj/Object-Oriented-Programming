#include<iostream>
#include<fstream>
using namespace std;

class MyFirstClass {
	int r, c;
	int** ptr;
public:
	//Setter
		void setR(int val1) {
			r = val1;
		}
		void setC(int val1) {
			c = val1;
		}
	//Getter
		int getR() {
			return r;
		}
		int getC() {
			return c;
		}

int** AllocateMemory(int r, int c) {
	 ptr = new int*[r];
	for (int i = 0;i < r;i++) {
		ptr[i] = new int[c];
	}
	return ptr;
}

int** input(int r, int c) {
	for (int i = 0;i < r ;i++) {
		for (int j = 0;j < c ;j++) {
			cin >> ptr[i][j];
		}
	}
	return ptr;
}

void rotate(int **mat,int r,int c) {
	for (int x = 0;x < c / 2;x++) {
		for (int y = x;y < c - x - 1;y++) {
			int temp = mat[x][y];
			mat[x][y] = mat[y][c - 1 - x];
			mat[y][c - 1 - x] = mat[c - 1 - x][c - 1 - y];
			mat[c - 1 - x][c - 1 - y] = mat[c - 1 - y][x];
			mat[c - 1 - y][x] = temp;
		}
	}
}

void displaymatrix(int **mat,int r,int c) {
	for (int i = 0;i < r;i++) {
		for (int j = 0;j < c;j++) {
			cout << mat[i][j] << endl;
		}
	}
}
};


int main() {
	int rows, cols;
	int** arr = nullptr;
	cout << "Enter Rows:";
	cin >> rows;
	cout << "Enter Columns:";
    cin >> cols;
	MyFirstClass a;
	a.setR(rows);
	a.setC(cols);
	a.AllocateMemory(rows,cols);
	a.input(rows,cols);
	a.rotate(arr,rows,cols);
	a.displaymatrix(arr,rows, cols);

	return 0;
}