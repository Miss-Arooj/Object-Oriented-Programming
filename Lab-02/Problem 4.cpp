#include<iostream>
using namespace std;

void copyArray(int* arr,int* &arr1,int size){
	for(int i=0;i<size;i++){
		arr1[i]=arr[i];
	}
	cout<<"Copied Array:";
	for(int i=0;i<size;i++){
		cout<<arr1[i]<<" ";
	}
}

int reduceArray(int* arr,int* &arr1,int size){
	
for(int i=0;i<size;i++){
		copyArray(arr,arr1,size);
	}
}
int main(){

	int size,size1;
	cout<<"Please Enter Size:";
	cin>>size;
	
	int* p=new int [size];
	int* p1=new int[size];
	cout<<"Please enter elements:";
	for(int i=0;i<size;i++)
	{
		cin>>p[i];
	}
	copyArray(p,p1,size);
	cout<<"Enter size of reduced array:";
cin>>size1;
size=size-size1;
	reduceArray(p,p1,size1);


	system("pause");
}