#include<iostream>
#include<cstring>
using namespace std;

class Time {
    int hr, min;   //Data Members
public:
    Time();
    Time(int, int);
    ~Time();
    void setTime(int, int);
    void getTime(int&, int&);
    void PrintTime();
    void incrementHours();
    void incrementMinutes();
};

//Constructor
Time :: Time() {
    hr = 2;
    min = 3;
}
Time :: Time(int h, int mn) {
    hr = h;
    min = mn;
}

//Destructor
Time :: ~Time() {

}

void Time :: setTime(int h, int mn) {
    hr = h;
    min = mn;
}

void Time :: getTime(int& h, int& m) {

}

void Time :: PrintTime() {
    cout << "Hours: " << hr << endl;
    cout << "Minutes: " << min << endl;
}

void Time :: incrementHours() {
    hr++;
}

void Time :: incrementMinutes() {
    min++;
}

class Date {
    int month, day, year;   //Data Members
public:
    Date();
    Date(int, int, int);
    ~Date();
    void setDate(int, int, int);
    void getDate(int&, int&, int&);
    void PrintDate();
};

//Constructor
Date :: Date() {
    month = 2;
    day = 3;
    year = 2012;
}
Date :: Date(int m, int d, int y) {
    month = m;
    day = d;
    year = y;
}

//Destructor
Date :: ~Date() {

}

void Date :: setDate(int m, int d, int y) {
    month = m;
    day = d;
    year = y;
}

void Date :: getDate(int& m, int& d, int& y) {

}

void Date :: PrintDate() {
    cout << "Date: " << month << "/" << day << "/" << year << endl;
}

class Event {
    string eventName;   //Data Members
    Time eventTime;
    Date eventDay;
public:
    Event(int hr, int min, int m, int, int y, string name);
    void setEventData(int hr, int min, int m, int d, int y, string name);
    void printEventData();
};

Event::Event(int hr = 0, int min = 0, int m = 1, int d = 1, int y = 1900, string name = "Christmas") {
    eventName = name;
    eventTime.setTime(hr, min);
    eventDay.setDate(m, d, y);
}

void Event :: setEventData(int hr, int min, int m, int d, int y, string name) {
    eventName = name;
    eventTime.setTime(hr, min);
    eventDay.setDate(m, d, y);
}

void Event::printEventData() {
    cout << "Event: " << eventName << endl;
    eventTime.PrintTime();
    eventDay.PrintDate();
}

int main()
{
    //instantiate an object and set data for Christmas
    Event object;
    object.setEventData(6, 0, 12, 25, 2010, "Christmas");
    //print out the data for object
    object.printEventData();

    //instantiate the second object and set date for the fourth of July
    Event object2;
    object2.setEventData(1, 15, 7, 4, 2010, "Fourth of July");
    //print out the data for the second object
    object2.printEventData();

    return 0;
}