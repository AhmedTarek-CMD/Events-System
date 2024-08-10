#include<iostream>
#include"Event.h"

using namespace std;

int main()
{
	Event e;
	cout << "Please Enter current Date" << endl;
	int day, month, year;
	cin >> day >> month >> year;
	e.event_menu(month, day, year);
	return 0;
}