#include<iostream>
using namespace std;

int main(){

	int size;
	cout<<"Please Enter Size:";
	cin>>size;
	float* p=new float [size];
	cout<<"Please enter elements:";
	for(int i=0;i<size;i++)
	{
		cin>>p[i];
	}
	float max=p[size],secmax=p[size];
	int a=0;
	
		for(int i=0;i<size;i++)
		{
		if(max<p[i])
		{
			max=p[i];
	}
		}
		for(int i=0;i<size;i++){
			if(secmax<p[i] && secmax!=max){
			secmax=p[i];
			a=i;
	
	}
		}

		cout<<"2nd Largest number is:"<<secmax<<endl;
		cout<<"Index of 2nd largest element is:"<<a;
delete []p;
		p=nullptr;
	system("Pause");
}