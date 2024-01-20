#include <iostream>
using namespace std;

double calcCredit (double creditLine, double creditUsed);

int main () 
{
    double creditLine;
    double creditUsed;
    
    cout << "This program calculates customer's available credit." << endl;
    cout << "Enter the customer's maximum credit: ";
    cin >> creditLine;
    cout << "Enter the amount of credit used by the customer: ";
    cin >> creditUsed;

    cout << "Available credit: " << calcCredit (creditLine, creditUsed);

    return 0;
}

double calcCredit (double creditLine, double creditUsed) 
{
    double availableCredit = creditLine - creditUsed;
    
    return availableCredit;
}