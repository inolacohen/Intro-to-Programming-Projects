// Application Name: Reading From Text File Final Part 2
// Date: June 5, 2017
// Purpose: read a text file and display information on screen

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()

{
    int hours, employee = 1;
    
    ifstream infile;
   
    
while (employee <=10)
{
    cout << "How many hours worked for employee #" << employee << ": " << endl;
    cin >> hours;
    employee++;
}

    infile.open("EmployeeRates.txt");
    
    cout << "Weekly pay rate EmployeeRates.txt \n";
    
    
    
    while (!infile.eof())
        
        
        
        }


infile.close();


    return 0;
}
