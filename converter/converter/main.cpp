// Applicatio Name: Format Output
// Date : March 20, 2017
// Purpose: Display decimal, octal, and hexadecimal values columnized

#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    char number, letter;
    int inumber, iletter;
    
    cout << "Enter a number and a letter (seperated by spaces): " << endl;
    cin >> number >> letter;
    
    inumber = (int)number;
    iletter = (int)letter;
    cout << "        " << setw(8) << "Number" << setw(8) << "Letter" << endl;
    cout << "Decimal " << dec << setw(6) << inumber << setw(8) << iletter << endl;
    cout << "Hex     " << hex << setw(6) << inumber << setw(8) << iletter << endl;
    cout << "Octal   " << oct << setw(6) << inumber << setw(8) << iletter << endl;
    
    
    return 0;
    

}
