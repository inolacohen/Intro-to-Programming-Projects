// Application Name: Reading Text Files
// Name: Inola Cohen
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
    counter = 1;


	infile.open("inventory.txt");
	outfile.open("report.txt");

	cout << "Inventory List as of Today\n" << endl;

    
	while (!infile.eof())

	{
		getline(infile, partNo);
		cout << "Part No.:\t " << partNo << endl;
		

		getline(infile, cost);
		cout << "Cost:\t " << cost << endl;


		getline(infile, quantity);
		cout << "Quantity:\t " << quantity << endl;

		getline(infile, description);
		cout << "Description:\t " << description << endl;

		cout << "\n" << endl;

		outfile << description << endl << partNo << endl << cost << endl << quantity << endl;

	}

	infile.close();
	outfile.close();
	infile.open("report.txt");

    cout << "New Inventory File" << endl;
    
	while (!infile.eof())
	{
		getline(infile, partNo);
		cout << "Part No.:\t " << description << endl;


		getline(infile, cost);
		cout << "Cost:\t " << part No << endl;


		getline(infile, quantity);
		cout << "Quantity:\t " << cost << endl;

		getline(infile, description);
		cout << "Description:\t " << quantity << endl;

		cout << "\n" << endl;
	}

    cout << endl << count << "inventory items written to text file and displayed" << endl;


	return 0;
}
