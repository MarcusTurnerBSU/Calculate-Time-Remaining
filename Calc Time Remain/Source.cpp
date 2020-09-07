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


	daysInHours = daysLeft * day;
	hoursLeft = totalHours / daysLeft;

	cout << "You have " << daysLeft << " days left." << endl;
	cout << "The total amount of hours for all the courses are: " << totalHours << endl;
	cout << "Hours to do in a day: " << hoursLeft << endl;
	cout << "amount of days in hours: " << daysInHours << endl;

	return 0;
}