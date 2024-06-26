#include<iostream>
#include<string>
using namespace std;

class DOB {
private:
	int day, year;
	string month;
public:
    //Exception classes
    class invalidDay {
        int d;
    public:
        invalidDay(int v1) {
            d = v1;
        }
        int getDay() {
            return d;
        }
    };
    class invalidMonth {
        int m;
    public:
        invalidMonth(int v2) {
            m = v2;
        }
        int getMonth() {
            return m;
        }
    };
    class invalidYear {
        int y;
    public:
        invalidYear(int v3) {
            y = v3;
        }
        int getYear() {
            return y;
        }
    };

    void Display(int mon, int date, int yr) {
        if (date > 31) {
            throw invalidDay(date);
        }
        if (mon == 1 && date <= 31) {
            month = "January";
            day = date;
            year = yr;
            cout << month << " " << day << "," << year;
            if (date > 31) {
                throw invalidDay(date);
            }
        }
        else if (mon == 2 && date <= 28) {
            month = "February";
            day = date;
            year = yr;
            cout << month << " " << day << "," << year;
            if (date > 28 && date != 29) {
                throw invalidDay(date);
            }
            if (date == 29) {
                throw invalidYear(yr);
            }
        }
        else if (mon == 3 && date <= 31) {
            month = "March";
            day = date;
            year = yr;
            cout << month << " " << day << "," << year;
            if (date > 31) {
                throw invalidDay(date);
            }
        }
        else if (mon == 4 && date <= 30) {
            month = "April";
            day = date;
            year = yr;
            cout << month << " " << day << "," << year;
            if (date > 30) {
                throw invalidDay(date);
            }
        }
        else if (mon == 5 && date <= 31) {
            month = "May";
            day = date;
            year = yr;
            cout << month << " " << day << "," << year;
            if (date > 31) {
                throw invalidDay(date);
            }
        }
        else if (mon == 6 && date <= 30) {
            month = "June";
            day = date;
            year = yr;
            cout << month << " " << day << "," << year;
            if (date > 30) {
                throw invalidDay(date);
            }
        }
        else if (mon == 7 && date <= 31) {
            month = "July";
            day = date;
            year = yr;
            cout << month << " " << day << "," << year;
            if (date > 31) {
                throw invalidDay(date);
            }
        }
        else if (mon == 8 && date <= 31) {
            month = "August";
            day = date;
            year = yr;
            cout << month << " " << day << "," << year;
            if (date > 31) {
                throw invalidDay(date);
            }
        }
        else if (mon == 9 && date <= 30) {
            month = "September";
            day = date;
            year = yr;
            cout << month << " " << day << "," << year;
            if (date > 30) {
                throw invalidDay(date);
            }
        }
        else if (mon == 10 && date <= 31) {
            month = "October";
            day = date;
            year = yr;
            cout << month << " " << day << "," << year;
            if (date > 31) {
                throw invalidDay(date);
            }
        }
        else if (mon == 11 && date <= 30) {
            month = "November";
            day = date;
            year = yr;
            cout << month << " " << day << "," << year;
            if (date > 30) {
                throw invalidDay(date);
            }
        }
        else if (mon == 12 && date <= 31) {
            month = "December";
            day = date;
            year = yr;
            cout << month << " " << day << "," << year;
            if (date > 31) {
                throw invalidDay(date);
            }
        }
        else if (mon > 12) {
            throw invalidMonth(mon);
        }
    }
};

int main() {

    string monthname;
    int m, d, y;
    cout << "Enter Birthday:";
    cin >> m >> d >> y;

    DOB obj, obj2;
    obj.Display(m, d, y);

    try {
        if (d > 31) {

        }
        if (m == 1) {
            if (d > 31) {
            }
        }
        else if (m == 2) {
            if (d > 28 && d != 29) {
            }
            if (d == 29) {
            }
        }
        else if (m == 3) {
            if (d > 31) {
            }
        }
        else if (m == 4) {
            if (d > 30) {
            }
        }
        else if (m == 5) {
            if (d > 31) {
            }
        }
        else if (m == 6) {
            if (d > 30) {
            }
        }
        else if (m == 7) {
            if (d > 31) {
            }
        }
        else if (m == 8) {
            if (d > 31) {
            }
        }
        else if (m == 9) {
            if (d > 30) {
            }
        }
        else if (m == 10) {
            if (d > 31) {
            }
        }
        else if (m == 11) {
            if (d > 30) {
            }
        }
        else if (m == 12) {
            if (d > 31) {
            }
        }
        else if (m > 12) {
        }
    }
    catch (DOB::invalidYear Y) {
        cout << Y.getYear() << endl;
    }
    catch (DOB::invalidMonth M) {
        cout << M.getMonth() << endl;
    }
    catch (DOB::invalidDay D) {
        cout << D.getDay() << endl;
    }

    return 0;
}