#include <iostream>
using namespace std;

int* doubleArraySize(int array[], int s){

    int new_size = s * 2;  //Size of new array
    int* newArray = new int[new_size];  //Dynamic memory allocation

    for (int i = 0; i < new_size; i++){
        if (i >= s) {   //if current element is greater than or equal to size
            *(newArray + i) = 0;  //assign current element of new array to 0 
        }
        else {     //if current element is neither greater nor equal to size
            *(newArray + i) = array[i]; //assign current element of new array to 1
        }
    }

    return newArray;  //return new array to main function
}


int main()
{
    int size;  //size of array
    cout << "Enter size of an array: ";
    cin >> size;

    int* Array1 = new int[size];  //dynamic memory allocation
    cout << "------Array Before passing to the function------"<<endl;
    cout << "Array1:" << endl;
    cout << "Enter " << size << " integers: "<<endl;
    for (int i = 0; i < size; i++) {
        cin >> *(Array1 + i); // Input array elements i.e Array[i]
    }

    int* Array2 = doubleArraySize(Array1, size); //calling function and storing it in Array2

    cout << "------Array After passing to the function------"<<endl;
    cout << "Array2:" << endl;
    for (int i = 0; i < (size*2); i++) {
        cout << *(Array2 + i)<<" ";  //Display elements of Array2
    }

    delete[] Array1;
    Array1 = nullptr;
    return 0;
}