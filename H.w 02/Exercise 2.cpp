#include<iostream>
using namespace std;

int* (max_and_minAverage(int* arr, int size)) {

	int i, max,min,Min_MaxAverage;
	max = arr[0];  //assume that first element is max
	min = arr[0];  // assuming first element as minimum

	for (i = 1;i < size;i++)
	{
		if (arr[i] > max) {  //if current element is greater than max
			max = arr[i];    //assign that number as max now
		}
		if (arr[i] < min) {  // If current element is smaller than min  
			min = arr[i];    //assigning the smaller number to min
		}
	}

	cout << "Maximum Element of Array: "<<max<<endl;
	cout << "Minimum Element of Array: " <<min;

	Min_MaxAverage= (max + min) / 2; //Finding Average
	int* Average = &Min_MaxAverage;  //Storing adress of min and max average in a pointer
	return Average;   //Return Average to main function

}

int main() {

	int s; //Size of array
	cout << "Input number of elements in array: ";
	cin >> s;

	int* array = new int[s]; //Dynamic Memory Allocation
	cout << "Enter " << s << " integers" << endl;

	for (int i = 0;i < s;i++) {
		cin >> array[i];  //Input Array Elements
	}

	int j = *(max_and_minAverage(array, s));  //Calling max_and_minAverage function.
	cout << endl << "MIN AND MAX AVERAGE=" << j;  //Dislay Average
	delete[] array;  //delete array
	array = nullptr;

	return 0;
}