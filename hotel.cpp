#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    int roomNumber, days;
    string customerName;
    int totalRent;

    cout << "Enter Room Number: ";
    cin >> roomNumber;
    cin.ignore();

    cout << "Enter Customer Name: ";
    getline(cin, customerName);

    cout << "Enter Number of Days: ";
    cin >> days;

    totalRent = days * 1500;

    // Backend work: store data in a file
    ofstream file("bookings.txt", ios::app);
    file << "Room: " << roomNumber
         << ", Name: " << customerName
         << ", Days: " << days
         << ", Rent: Rs." << totalRent << endl;
    file.close();

    cout << "\nBooking stored successfully (Backend).\n";

    return 0;
}
