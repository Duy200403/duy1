#include <iostream>
#include <string>
using namespace std;

int main()
{
    std::cout << "enter number of studen\n";
    short number;
    cin >> number;

    cin.ignore(1000, '\n');

    string name[50];
    short age[100];
    string klass[50];

    for (int i = 0; i <= number; ++i) {
        cout << "enter name of studen " << i + 1 << " : ";
        getline(cin, name[i]);


        cout << "enter age: ";
        cin >> age[i];

        cin.ignore(1000, '\n');

        cout << "enter klass: ";
        getline(cin, klass[i]); \

        cout << name[i] << '\n';
        cout << age[i] << '\n';
        cout << klass[i] << '\n';

    }
}

