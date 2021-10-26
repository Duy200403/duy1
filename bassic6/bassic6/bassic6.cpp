// bassic6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string> 

using namespace std;

int main()
{
	std::cout << " input 2 intergers print to console max, min\n";
	int a;
	int b;

	cout << " Enter two number randomly: ";
	cin >> a;
	cin >> b;

	if (a > b) {
		cout << a << " is the max number" << endl;
		cout << b << " is the min number" << endl;
	}
	else if (a < b) {
		cout << b << " is the max number" << endl;
		cout << a << " is the min number" << endl;
	}
	else {
		cout << " Error" << endl;
	}
	return 0;
}
