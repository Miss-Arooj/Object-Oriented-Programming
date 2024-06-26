#ifndef Task 1
#define Task 1

#include<iostream>

class Shape {
protected:
    double l = 0, b = 0, h = 0;
public:
    Shape();
    double area;
    double getArea();
};

class Painting {
protected:
    double c = 0;
public:
    Painting();
    double Cost;
    double getCost();
};

class Square : public Shape, public Painting {
public:
    Square(double length);
    double getLength = 0;
    void setLength(double);
    void setCost(double);
    double getCost();
    double getArea();
private:
    double length;
};

class Rectangle : public Shape, public Painting {
public:
    Rectangle(double, double);
    double getLength = 0;
    double getWidth = 0;
    void setLength(double);
    void setBreadth(double);
    void setCost(double);
    double getCost();
    double getArea();
private:
    double length;
    double breadth;
};

class Triangle : public Shape, public Painting {
public:
    Triangle(double, double);
    double getBreadth = 0;
    double getheight = 0;
    void setBreadth(double);
    void setHeight(double);
    void setCost(double);
    double getCost();
    double getArea();
private:
    double breadth;
    double height;
};

#endif