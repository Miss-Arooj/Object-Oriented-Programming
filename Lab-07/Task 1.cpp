#include<iostream>
using namespace std;

class ComplexNumber {
    int real, imaginary;   //Data Members

public:
    //Constructor
    ComplexNumber() {
        real = 0;
        imaginary = 0;
    }
    ComplexNumber(int r, int i) {
        real = r;
        imaginary = i;
    }

    //Copy Constructor
    ComplexNumber(const ComplexNumber& obj) {
        real = obj.real;
        imaginary = obj.imaginary;
    }

    //Destructor
    ~ComplexNumber() {

    }

    friend ostream& operator << (ostream& strm, const ComplexNumber& c)
    {
        if (c.real == 0 && c.imaginary == 0) {
            strm << "0" << endl;
        }
        else {
            strm << "(" << c.real << ")" << "+" << "(" << c.imaginary << "i)" << endl;
            return strm;
        }
    }

    friend istream& operator>>(istream& strm, ComplexNumber& c) {
        cout << "Enter Real part: ";
        strm >> c.real;
        cout << "Enter Imaginary part: ";
        strm >> c.imaginary;
        return strm;
    }

    ComplexNumber operator +(const ComplexNumber& c) {
        ComplexNumber Add;
        Add.real = real + c.real;
        Add.imaginary = imaginary + c.imaginary;
        return Add;
    }

    ComplexNumber operator -(const ComplexNumber& c) {
        ComplexNumber Sub;
        Sub.real = real - c.real;
        Sub.imaginary = imaginary - c.imaginary;
        return Sub;
    }

    bool operator ==(const ComplexNumber& c) {
        if (real == c.real && imaginary == c.imaginary) {
            return true;
        }
        else {
            return false;
        }
    }

    bool operator !=(const ComplexNumber& c) {
        if (this->real != c.real && this->imaginary != c.imaginary) {
            return true;
        }
        else {
            return false;
        }
    }

    void operator =(const ComplexNumber& c) {
        if (c.real != 0 && c.imaginary != 0) {
            real = 0;
            imaginary = 0;
        }
        real = c.real;
        imaginary = c.imaginary;
    }
};
    
int main() {
    ComplexNumber c1, c2(5,6), c3;  //Class objects

    cout << "Input a Complex Number: " << endl;
    cin >> c3;
    cout << c1 << c2 << c3;
    
    if (c1 == c2)
        cout<<"c1 == c2"<<endl;
    else
        cout<<"c1 != c2"<<endl;

    if (c1 != c3)
        cout<<"C1 != C3"<<endl;
    else
        cout<<"C1 == C3"<<endl;

    ComplexNumber c4 = c2 - c3;
    cout << "Subtarction: " << c4;

    return 0;
}