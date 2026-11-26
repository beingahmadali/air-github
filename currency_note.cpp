/*
Name: Muhammad Ahmad ALi
Student ID: 2601616 (BSSE-eve-A)
Assignment #: 01
Question #: 05
*/
#include <iostream>
using namespace std;

int main()
{
    int amount;
    cout << "Enter amount in rupees: ";
    cin >> amount;

    int note_500 = amount / 500;
    amount %= 500;

    int note_100 = amount / 100;
    amount %= 100;

    int note_50 = amount / 50;
    amount %= 50;

    int note_20 = amount / 20;
    amount %= 20;

    int note_10 = amount / 10;
    amount %= 10;

    int coin_5 = amount / 5;
    amount %= 5;

    int coin_1 = amount;

    string name;
    cout << "Enter your name: ";
    cin >> name;

    cout << "Currency Note\t:\tNumber" << endl;
    cout << "500\t\t:\t" << note_500 << endl;
    cout << "100\t\t:\t" << note_100 << endl;
    cout << "50\t\t:\t" << note_50 << endl;
    cout << "20\t\t:\t" << note_20 << endl;
    cout << "10\t\t:\t" << note_10 << endl;
    cout << "5\t\t:\t" << coin_5 << endl;
    cout << "1\t\t:\t" << coin_1 << endl;

    return 0;
}