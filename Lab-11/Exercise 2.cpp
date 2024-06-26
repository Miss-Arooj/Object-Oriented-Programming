#include<iostream>
using namespace std;
 
template<class T1>
T1 GetMax(T1 x, T1 y) {
	if (x > y) {
		return x;
	}
	else {
		return y;
	}
}

template<class T2>
T2 GetMin(T2 x, T2 y) {
	if (x < y) {
		return x;
	}
	else {
		return y;
	}
}

int main()
	{
		int i = 5, j = 6, k;
		long l = 10, m = 5, n;
		//Function with <int> and <long>
		/*k = GetMax<int>(i, j);
		n = GetMin<long>(l, m);*/
		//Function without <int> and <long>
		k = GetMax(i, j);
		n = GetMin(l, m);
		cout << k << endl;
		cout << n << endl;
		cout << "Execute Successfully\n";
		return 0;
	}


