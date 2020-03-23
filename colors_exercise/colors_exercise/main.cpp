
#include <iostream>
using namespace std;
int main()
{
    // Decleration statements
    int choice;
    
    // Output main menu with choices
    
    cout << "Make a selection from the following menu:" << endl;
    cout << "1. Red" << endl;
    cout << "2. Blue" << endl;
    cout << "3. Yellow" << endl;
    cin >> choice;
    
    
    
    // Processing for choice 1
    
    if (choice == 1)
    {
        cout << "Make a selection from the following menu:" << endl;
        cout << "1. Blue" << endl;
        cout << "2. Yellow" << endl;
        cin >> choice;
    
    
    
         if (choice == 1)
        cout << "Red and blue make purple" << endl;
    
        else if (choice == 2)
        cout << "Red and yellow make orange" << endl;
        
        else
        cout << "Enter a valid menu option" << endl;
    }
    
// Processing for choice 2
    
    else if (choice == 2)
    {
        cout << "Make a selection from the following menu:" << endl;
        cout << "1. Red" << endl;
        cout << "2. Yellow" << endl;
        cin >> choice;
    
    
        if (choice == 1)
        cout << "blue and red make purple" << endl;
    
        else if (choice == 2)
        cout << "Blue and yellow make green" << endl;
    
        else
        cout << "Enter a valid menu option" << endl;
    }
    
    
    // Processing for choice 3
    
    else if (choice == 3)
    {
        cout << "Make a selection from the following menu:" << endl;
        cout << "1. Red" << endl;
        cout << "2. Blue" << endl;
        cin >> choice;
    
    
        if (choice == 1)
        cout << "Yellow and red make orange" << endl;
    
        else if (choice == 2)
        cout << "Yellow and blue make green" << endl;
    
        else
        cout << "Enter a valid menu option" << endl;
    }
    
    else
        cout << "Enter a valid menu option" << endl;
        
    return 0;
    
}
