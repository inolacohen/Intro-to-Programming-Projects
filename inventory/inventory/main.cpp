// Application Name: Reading Text Files
// Date: May 15, 2017
// Purpose: read a text file and display information on screen

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()

{
    string partNo, cost, quantity, description;
    
    ifstream infile;
    ofstream outfile;
    
    infile.open("inventory.txt");
    outfile.open("report.txt");
    
    cout << "Inventory List as of Today\n" << endl;
    
    
    while (!infile.eof())
        
    {
        getline(infile, Name);
        cout << "Name: " << partNo << endl;
        
        getline(infile, Pay Rate);
        cout << "Pay Rate: " << cost << endl;
     
        

    }
    
  
    
    infile.close();
    outfile.close();
    
    
    
    return 0;
}
