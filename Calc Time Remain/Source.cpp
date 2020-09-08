#include <iostream>
using namespace std;

int main() {

	double totalHours = 0;
	double hours = 0;
	double day = 24;
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

	daysInHours = daysLeft * day;
	hoursLeft = totalHours / daysLeft;

	cout << "You have " << daysLeft << " days left." << endl;
	cout << "The total amount of hours for all the courses are: " << totalHours << endl;
	cout << "Hours to do in a day: " << hoursLeft << endl;
	cout << "amount of days in hours: " << daysInHours << endl;

	return 0;
}