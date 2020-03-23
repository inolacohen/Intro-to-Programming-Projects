// Program: Areas of Rectangles
// Purpose: Ask user for the length and width of two rectangles. The program should then tell the user which rectangle has the greater area, or if the areas are the same.
// Class: Co Sci 802 3110
// Date: May 2, 2017

#include <iostream>
using namespace std;
int main()

{
    // Declare variables going to be used.
    double length1, length2;
    double width1, width2;
    double area1, area2;
  
    // Ask user for length and width of first rectangle.
    cout << "Enter the length and width of rectangle 1 (seperated by spaces): ";
    cin >> length1 >> width1;
    
    // Ask user for length and width of second rectangle.
    cout << "Enter the length and width of rectangle 2 (seperated by spaces): ";
    cin >> length2 >> width2;
 
    // Calculate the areas of both rectangles.
    area1 = length1 * width1;
    area2 = length2 * width2;
    
   // Display both of the areas.
    cout << "\nThe area of rectangle 1 = " << area1 << endl;
    cout << "The area of rectangle 2 = " << area2 << endl;
    
 // use if/elseif to declare different scenarios of the areas;
    
    

    if (area1 < area2)        // If area 1 is bigger
    
        cout << "\nTherefore, the area of rectangle 2 is bigger.\n" << endl;
    
    
    else if (area2 < area1)        // If area 2 is bigger
        cout << "\nTherefore, the area of rectangle 1 is bigger.\n" << endl;
    
    else if (area1 == area2)      // If areas are the same
        cout << "\nTherefore, the areas of the rectangles are the same.\n" << endl;
    
    else
            cout << "Enter numerical values." << endl;
    


    return 0;
}
