// Purpose: To calculate a theater's gross and net box office profit for a night
// Class: Co Sci 802 3110
// Date: March 28, 2017

#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

int main()

{
    // Declare and define all of the variables going to be used:
    
    int  adult_price = 10;
    int child_price = 6;
    const double THEATER_RATE = .8;
    const double DISTRIBUTOR_RATE = .2;
    int adult_tickets, child_tickets;
    double adult_total, child_total, tickets_total;
    double theater_rev, distributor_rev;
 
    // Define the movie name as a string and getline function in order for user to type multiple words with spaces:
   string movie_name;
    cout << "What is the name of the movie?" << endl;
    getline (cin, movie_name);
    
    // Ask user to input desired amount of tickets sold for adult and child:
    cout << "How many adult tickets were sold?" << endl;
    cin >> adult_tickets;
    cout << "How many child tickets were sold?" << endl;
    cin >> child_tickets;
    
    //Calculate the total sales for each type of ticket:
    
    adult_total = adult_price * adult_tickets;
    child_total = child_price * child_tickets;

   
    //Calculate the total sales generated:
    tickets_total = adult_total + child_total;
    
    //Calculate the profit made by the distributor and the theater:
    theater_rev = tickets_total * THEATER_RATE;
    distributor_rev = tickets_total * DISTRIBUTOR_RATE;
    
    
    //Display all of the results:
    cout << "Movie Name: \"" << movie_name << "\"" << endl;
    
    cout << "Adult Tickets Sold: " << adult_tickets << endl;
    cout << "Child Tickets Sold: " << child_tickets << endl;
    
    cout << fixed << setprecision(2);       //Setting all of the fractional numbers to 2 decimal points in order to show proper form of money, and display:
    cout << "Gross Box Office Revenue: $" << tickets_total << endl;
    cout << "Amount Paid to Distributor: $-" << distributor_rev << endl;
    cout << "Net Box Office Revenue: $" << theater_rev << endl;

    return 0;
   


}






