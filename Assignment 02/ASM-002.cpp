#include<iostream>
#include<math.h>
using namespace std;

class ComplexNumber {
    int real, imaginary;   //Data Members
public:

    //Constructor
    ComplexNumber() {
        real = 2;
        imaginary = 3;
    }
    ComplexNumber(int r, int i) {
        real = r;
        imaginary = i;
    }

    //Destructor
    ~ComplexNumber() {

    }

    //Input function to get real and imaginary part from programmer.
    void Input() {
        cout << "Enter real: ";
        cin >> real;
        cout << "Enter imaginary: ";
        cin >> imaginary;
    }

    //Output fuction to display c1 and c2.
    void Output() {
        cout << "(" << real << ")" << "+" << "(" << imaginary << "i)" << endl;
    }

    //IsEqual function to return wether c1 and c2 are equal or not.
    bool IsEqual(ComplexNumber c2) {
        if (real == c2.real && imaginary == c2.imaginary) {
            return true;
        }
        else {
            return false;
        }
    }

    //Function to find conjugate of c1 and c2.
    ComplexNumber Conjugate(ComplexNumber c) {
        ComplexNumber conj;
        conj.real = c.real;
        conj.imaginary = -c.imaginary;
        return conj;
    }

    //Function to add c1 and c2.
    ComplexNumber Add(ComplexNumber c) {
        ComplexNumber Add;
        Add.real = real + c.real;
        Add.imaginary = imaginary + c.imaginary;
        return Add;
    }

    //Function to subtract c1 and c2. 
    ComplexNumber Subtract(ComplexNumber c) {
        ComplexNumber Sub;
        Sub.real = real - c.real;
        Sub.imaginary = imaginary - c.imaginary;
        return Sub;
    }

    //Function to find product of c1 and c2.
    ComplexNumber Multiplication(ComplexNumber c) {
        ComplexNumber Mul;
        Mul.real = real * c.real - imaginary * c.imaginary;
        Mul.imaginary = real * c.imaginary + c.real * imaginary;
        return Mul;
    }

    //Return real part of complex number.
    int getreal() {
        return real;
    }

    //Return Imaginary part of complex number.
    int getimag() {
        return imaginary;
    }

    //Function to find magnitude of complex number.
    float Magnitude() {
        float temp;
        temp = sqrt((real * real) + (imaginary * imaginary));
        return temp;
    }
};

//Driver code
int main()
{
    ComplexNumber c1, c2, c3;  //Class objects

    //Input values by Member function.
    cout << "Enter c1:" << endl;
    c1.Input();
    cout << endl<<"Enter c2:" << endl;
    c2.Input();
    cout << endl << "c1 = ";

    //Dispaly real and imaginary part of c1 and c2.
    c1.Output();
    cout << "c2 = ";
    c2.Output();

    //Comparing c1 and c2.
    c1.IsEqual(c2);
    if (c1.IsEqual(c2) == true) {
        cout << endl << "c1 is Equal to c2" << endl;
    }
    else {
        cout << endl << "c1 is Not Equal to c2" << endl;
    }

    //Finding Conjugate of c1 and c2 using Member Function.
    c3 = c1.Conjugate(c1);
    if (c3.getimag() > 0) {
        cout << "Conjugate of c1:  " << c3.getreal() << "+" << c3.getimag() << "i" << endl;
    }
    else  cout << "Conjugate of c1:  " << c3.getreal() << c3.getimag() << "i" << endl;
    c3 = c2.Conjugate(c2);
    if (c3.getimag()>0) {
        cout << "Conjugate of c2:  " << c3.getreal() << "+" << c3.getimag() << "i" << endl;
    }
    else  cout << "Conjugate of c2:  " << c3.getreal() << c3.getimag() << "i" << endl;
        

    //Sum of c1 and c2 using Member Function.
    c3 = c1.Add(c2);
    cout << endl << "c1 + c2 :  (" << c3.getreal() << ")+(" << c3.getimag() << "i)" << endl;

    //Subtaction of c1 and c2 using Member Function.
    c3 = c1.Subtract(c2);
    cout << "c1 - c2 :  (" << c3.getreal() << ")+(" << c3.getimag() << "i)" << endl;

    //Multiplication of c1 and c2 using Member Function.
    c3 = c1.Multiplication(c2);
    cout << "c1 * c2 :  (" << c3.getreal() << ")+(" << c3.getimag() << "i)" << endl;

    //Finding and Displaying Magnitude of c1 and c2 using Member Function.
    cout << endl << "Magnitude of c1 = " << c1.Magnitude() << endl;
    cout << "Magnitude of c2 = " << c2.Magnitude();

    return 0;
    }