// Purpose: To compute the tax and tips on a restaurant bill.
// Class: Co. Sci. 802 3110
// Date: 03/16/2017

#include <iostream>
using namespace std;

int main()
{
    double mealcost;
    double tax = 0.0675;
    double mealtax;
    double totalmeal;
    double tip1 = 0.10;
    double tip2 = 0.15;
    double totaltip_1;
    double totaltip_2;
    double totalbill_1;
    double totalbill_2;
    
    //Input:
        //Ask the user for the cost of their meal(s):
    
    cout << "What is the cost of the meal(s)?" << endl;
    cin >> mealcost;
    
    // Processing:
        // Calculate the tax of the meal and add it to the cost of the meal cost:
    
    mealtax = mealcost * tax;
    totalmeal = mealcost + mealtax;
    
        // Calculate both gratuitys with the total cost of the meal with the tax:
    
    totaltip_1 = tip1 * totalmeal;
    totaltip_2 = tip2 * totalmeal;
    
        // Add the calculated gratuitys of the meal to the cost of the meal to get the total bills for each gratuity rate:
    
    totalbill_1 = totalmeal + totaltip_1;
    totalbill_2 = totalmeal + totaltip_2;
 
    
    // Output:
        // Display the meal cost, the tax of it, both tips (including the tax), the total bill with the 10% gratuity and the total bill with the 15% gratuity:
    
    cout << "The meal's cost is $" << mealcost << endl;
    cout << "The tax of the meal comes out to $" << mealtax << endl;
    cout << "The tip with 10% gratuity comes out to $" << totaltip_1 << endl;
    cout << "The tip with 15% gratuity comes out to $" << totaltip_2 << endl;
    cout << "Your total bill with 10% gratuity is $" << totalbill_1 << endl;
    cout << "Your total bill with 15% gratuity is $" << totalbill_2 << endl;
    
    return 0;
    

}
