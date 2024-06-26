#include "Task 1.h"
using namespace std;

Shape::Shape() {
    area = 0;
}
double Shape::getArea() {
    return area;
}

Painting::Painting() {
    Cost = 0;
}
double Painting::getCost() {
    return Cost;
}

Square::Square(double length = 0) {

}
void Square::setLength(double length) {
    l = length;
}
void Square::setCost(double cost) {
    c = cost;
}
double Square::getArea() {
    area = l * l;
    return area;
}
double Square::getCost() {
    Cost = c * area;
    return Cost;
}

Rectangle::Rectangle(double length = 0, double breadth = 0) {

}
void Rectangle::setLength(double length) {
    l = length;
}
void Rectangle::setBreadth(double breadth) {
    b = breadth;
}
void Rectangle::setCost(double cost) {
    c = cost;
}
double Rectangle::getArea() {
    area = l * b;
    return area;
}
double Rectangle::getCost() {
    Cost = c * area;
    return Cost;
}

Triangle::Triangle(double breadth = 0, double height = 0) {

}
void Triangle::setBreadth(double breadth) {
    b = breadth;
}
void Triangle::setHeight(double height) {
    h = height;
}
void Triangle::setCost(double cost) {
    c = cost;
}
double Triangle::getArea() {
    area = (b * h) / 2;
    return area;
}
double Triangle::getCost() {
    Cost = c * area;
    return Cost;
}

int main()
{
    double length = 0;
    double breadth = 0;
    double height = 0;
    double cost = 0;
    Square square;
    Rectangle rectangle;
    Triangle triangle;

    int option = 0;
    cout << "Calculating the Area" << endl << endl;
    do
    {
        cout << "Pick a shape in which you would like the area of:" << endl;
        cout << "1: Square" << endl;
        cout << "2: Rectangle" << endl;
        cout << "3: Triangle" << endl;
        cout << "4: Exit" << endl;
        cout << "Please enter your choice: ";
        cin >> option;

        switch (option)
        {
        case 1:
        {
            cout << endl;
            cout << "Enter the length of one side of the square: ";
            cin >> length;
            square.setLength(length);
            cout << "Enter temperary cost of Square: ";
            cin >> cost;
            square.setCost(cost);
            cout << "Total Square Area: " << square.getArea() << endl;
            cout << "Total Cost of Square: " << square.getCost() << endl << endl;
            break;
        }
        case 2:
        {
            cout << endl;
            cout << "Enter the length of one side of the rectangle: ";
            cin >> length;
            rectangle.setLength(length);
            cout << "Enter the breadth of one side of the rectangle: ";
            cin >> breadth;
            rectangle.setBreadth(breadth);
            cout << "Enter temperary cost of Reactangle: ";
            cin >> cost;
            rectangle.setCost(cost);
            cout << "Total Rectangle Area: " << rectangle.getArea() << endl;
            cout << "Total Cost of Rectangle: " << rectangle.getCost() << endl << endl;
            break;
        }
        case 3:
        {
            cout << endl;
            cout << "Enter the breadth of triangle: ";
            cin >> breadth;
            triangle.setBreadth(breadth);
            cout << "Enter the height of triangle: ";
            cin >> height;
            triangle.setHeight(height);
            cout << "Enter temperary cost of Triangle: ";
            cin >> cost;
            triangle.setCost(cost);
            cout << "Total Triangle area: " << triangle.getArea() << endl;
            cout << "Total Cost of Triangle: " << triangle.getCost() << endl << endl;
            break;
        }
        }
    } while (option != 4);
    cout << "Program ends" << endl;

    return 0;
}