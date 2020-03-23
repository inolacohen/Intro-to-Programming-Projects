// Purpose:
// Class: Co Sci 802 (3110)
// Date: March 16, 2017

#include <iostream>
using namespace std;

int main()
{
    // Input: Define and declare all variables going to be used and ask user how many hot dogs are purchased:
    
    int hotdogs;
    double cost = 1.50;
    double totalcost;
    double tax = 0.0925;
    double totaltax;
    double finalprice;
    
    cout << "How many hot dogs would the customer like to purchase?" << endl;
    cin >> hotdogs;
    
    // Processing:
        // Calculate the total cost of the # of hot dogs
    
    totalcost = hotdogs * cost;
    
        // Calculate the total sales tax on the # of hot dogs:
    
    totaltax = totalcost * tax;
    
        // Calculate the final price of the # of hot dogs w/ tax:
    finalprice = totalcost + totaltax;
    
    //Output: display all of the ending results of the total cost before tax, the tax on the purchase, and the final price with tax
    
    cout << "The cost before tax is $" << totalcost << endl;
    cout << "The sales tax on the cost of hot dogs is $" << totaltax << endl;
    cout << "The final price of the hot dogs including tax is $" << finalprice << endl;
    
    return 0;
}
