#include<iostream>
using namespace std;

void main() {
	int numOfItems;
	double unitCost;
	try
	{
		cout << "Enter the number of items: ";
		cin >> numOfItems;
		if (numOfItems < 0)
			throw numOfItems;
		cout << "Enter the cost of one item: ";
		cin >> unitCost;
		if (unitCost < 0)
			throw unitCost;
		cout << "Total cost: $" << numOfItems * unitCost << endl;
	}
	catch (int num)
	{
		cout << "Negative number of items: " << num << endl;
		cout << "Number of items must be non-negative." << endl;
	}
	catch (double dec)
	{
		cout << "Negative unit cost: " << dec << endl;
		cout << "Unit cost must be non-negative." << endl;
	}
}
  /*           ANSWERS
    a.Total cost: $137.5
    b.Negative number of items : -55
      Number of items must be non-negative.
    c.Negative unit cost: -4.5
      Unit cost must be non-negative.
    d.Negative number of items: -10
      Number of items must be non-negative.*/