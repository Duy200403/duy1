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
    short age[50];
    string klass[50];

    double toan[50], ly[50], hoa[50], diemtrungbinh[50] ;

    for (int i = 0; i < number; ++i) {
        cout << "enter name of studen " << i + 1 << " : ";
        getline(cin, name[i]);


        cout << "enter age: ";
        cin >> age[i];

        cin.ignore(1000, '\n');

        cout << "enter klass: ";
        getline(cin, klass[i]); \

        /*cout << name[i] << '\n';
        cout << age[i] << '\n';
        cout << klass[i] << '\n';*/

        cout << " enter mark: ";
        cin >> toan[i] >> ly[i] >> hoa[i];
        cin.ignore(1000, '\n');
        diemtrungbinh[i] = (toan[i] + ly[i] + hoa[i]) / 3;
    }
    for (int i = 0; i < number; ++i) {
        cout << "studen " << i + 1 << ':' << name[i] << '\n';
        cout << "toan: " << toan[i] << '\n';
        cout << "ly: " << ly[i] << '\n';
        cout << "hoa: " << hoa[i] << '\n';
        cout << "diem trung binh: " << diemtrungbinh[i] << '\n';


    }
}

