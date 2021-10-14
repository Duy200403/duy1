// duy1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <string>

using namespace std;

int main()
{
    //std::cout << "Hello World!\n";
    //cout << "my name Duy\n";
    //cout << "i am 18 years old" << std::endl;

    string name;
    int age;
    string address;

    cout << "your name ";
    //cin >> name;
    std::getline(std::cin, name);

    cout << "tuoi ";
    cin >> age;

    //ignore new line
    std::cin.ignore(1000, '\n');
    
    cout << "dia chi ";
    //cin >> address;
    std::getline(std::cin, address);

    cout << "hello, my name is: " << name << '\n';
    cout << "tuoi cua toi la: " << age << '\n';
    cout << "dia chi nha toi la: " << address << '\n';

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
