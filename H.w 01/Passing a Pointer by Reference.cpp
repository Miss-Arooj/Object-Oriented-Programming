#include <iostream>
using namespace std;

void func(int*& p)
{
    *p = 20;
   // p = 20;
}
void main()
{
    int a = 10;
    cout << a << endl;
    int* p1 = &a;
    func(p1);
    cout << *p1 << endl;
}