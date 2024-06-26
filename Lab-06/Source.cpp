#include<iostream>
using namespace std;

class MyBigInt{
	int* big_int;
	int int_len;
public:
	MyBigInt (int size){
		big_int=nullptr;
		int_len=size;
		big_int=new int[size];
		for(int i=0;i<int_len;i++){
			cin>>big_int[i];
	
		}
	}
	//copy constructor
	MyBigInt(const MyBigInt& obj){
		int_len=obj.int_len;
	big_int=new int[int_len];
	cout<<"Copy Constructor Called";
	/*for(int i=0;i<int_len;i++){
		big_int[i]=obj.big_int[i];
	}*/
	}//end of copy constructor
	void assign(const MyBigInt& obj){
		int_len=obj.int_len;
	big_int=new int[int_len];
	for(int i=0;i<int_len;i++){
		big_int[i]=obj.big_int[i];
	}
	}

	int compTo(const MyBigInt& obj){
		bool flag=0;
		if(int_len=obj.int_len){
			for(int i=0;i<int_len;i++){
				if(big_int[i]==obj.big_int[i]){
					flag=0;
				}
				else if(big_int[i]<obj.big_int[i]){
					flag=1;
				}
				else{
					flag= 2;
				}
			}
		}
	}
	void display(){
		for(int i=0;i<int_len;i++){
			if(big_int!=nullptr){
				cout<<big_int[i]<<" ";	
			}
			else{
				cout<<"No Value Assigned";
		}
	}
	}
		//Dstructor
		~MyBigInt (){
			if (big_int!=nullptr){
				delete [] big_int;
				big_int =nullptr;
			}

		}
};
int main(){
	int size;
	cout<<"Enter size: ";
	cin>>size;
	MyBigInt obj1(size);
	MyBigInt obj2=obj1;
	obj2.assign(obj1);
	obj2.compTo(obj1);
	obj2.display();

	system("Pause 0");
}