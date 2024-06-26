#include<iostream>
using namespace std;

void Output(int * myptr, int size){
	for(int i=1;i<=size;i++){
		myptr[i+1]=myptr[i-1]+myptr[i];
	}
	for(int i=0;i<size;i++){
		cout<<myptr[i]<<" ";
	}
}

int main(){
	int n;
	cout<<"Enter size:";
	cin>>n;
	int* p=new int[n];
	p[0]=1,p[1]=1;
	//Part a
	/*for(int i=1;i<n;i++){
		p[i+1]=p[i-1]+p[i];
	}
	for(int i=0;i<n;i++){
		cout<<p[i]<<" ";
	}*/
	//Part b
	Output(p, n);
	system("pause");
}