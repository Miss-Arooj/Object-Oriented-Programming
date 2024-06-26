#include<iostream>
using namespace std;

class BasicShape {
private:
	double area;
public:
	virtual void calcArea() = 0;
	void setArea(double a) {
		area = a;
	}
	double getArea() {
		return area;
	}
};

class Circle : public BasicShape {
private:
	long centerX, centerY;
	double radius;
public:
	Circle(long x, long y, double rad) {
		centerX = x;
		centerY = y;
		radius = rad;
		calcArea();
	}
	long getCenterX() {
		return centerX;
	}
	long getCenterY() {
		return centerY;
	}
	void calcArea() {
		double temp = 3.14159 * radius * radius;
		BasicShape::setArea(temp);
	}
	double getArea() {
		return BasicShape::getArea();
	}
};

class Rectangle :public BasicShape {
private:
	long width, length;
public:
	Rectangle(long w, long l) {
		width = w;
		length = l;
		calcArea();
	}
	long getWidth() {
		return width;
	}
	long getLength() {
		return length;
	}
	void calcArea() {
		double temp = length * width;
		BasicShape::setArea(temp);
	}
	double getArea() {
		return BasicShape::getArea();
	}
};

int main() {
	long x, y, length, width;
	double rad;

	//Demonstrate a Cicle
	cout << "Enter x coordinate of circle's center: ";
	cin >> x;
	cout << "Enter y coordinate of circle's center: ";
	cin >> y;
	cout << "Enter radius of circle: ";
	cin >> rad;
	Circle c(x, y, rad);
	cout << "The area of circle is: " << c.getArea() << ".\n\n";

	//Demonstrate a Rectangle
	cout << "Enter length of rectangle: ";
	cin >> length;
	cout << "Enter width of rectangle: ";
	cin >> width;
	Rectangle r(width, length);
	cout << "The area of rectangle is: " << r.getArea() << ".\n";

	return 0;
}