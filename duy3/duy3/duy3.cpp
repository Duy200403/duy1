#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main() {
	int x;
	cout << " Hello! Please enter the number of students in your class " << endl;
	cin >> x;

	string allName[30];

	int a;
	int b;
	int c;
	float average[30];

	for (int i = 0; i < x; i++) {
		cin.ignore(1999, '\n');
		cout << " Enter students name " << endl;
		getline(cin, allName[i]);
		cout << " Enter Students's Math, Physic, Chemistry grade in order" << endl;
		cin >> a;
		cin >> b;
		cin >> c;
		average[i] = (a + b + c) / 3;
	}


	cout << " Here is your class overall grade table " << endl;

	for (int i = 0; i < x; i++) {
		cout << allName[i] << endl;
		cout << average[i] << endl;
	}

	return 0;
}

