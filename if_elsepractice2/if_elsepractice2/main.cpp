

#include <iostream>
using namespace std;
int main()
{
    int number;
    // ask for number
    cout << "Enter an integer: " << endl;
    cin >> number;
    
    if (number % 2 == 0)
        cout << "Number is even" << endl;
    else
        cout << "Number is odd" << endl;
    
    return 0;
}
