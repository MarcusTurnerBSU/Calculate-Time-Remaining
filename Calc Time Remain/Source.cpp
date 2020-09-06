#include <iostream>
using namespace std;

int main() {

	double totalHours = 0;
	double hours = 0;
	double aDay = 24;
	double daysInHours;
	int daysLeft;
	double hoursLeft;

	cout << "How many days are left? ";
	cin >> daysLeft;

	while (hours >= 0) {
		cout << "Enter how many hours per course? (-1 to end): ";
		cin >> hours;
		if (hours < 0)
			break;
		totalHours += hours;
	}

	//times daysleft by 24 to convert into hours then divide it by totalhours to get

	//daysInHours = daysLeft * aDay;
	//hoursLeft = daysInHours / totalHours;

	//cout << daysInHours << endl;
	cout << daysLeft << endl;
	//cout << hoursLeft << endl;
	cout << totalHours << endl;
	return 0;
}