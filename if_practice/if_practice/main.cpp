// Application Name:
// Programmer:
// Date:
// Purpose:

#include <iostream>
using namespace std;
int main()
{
    int score1;
  
    
    // Ask user to enter the 3 test scores
    cout << "Enter the test score (seperate by spaces): " << endl;
    cin >> score1;;
    
    
    // Calculate average by dividing sum of scores by 3

    
    // If average score is 100, say congratulations and inform student:
    
    if (score1 == 100)
    {
        cout << "Congratulations!" << endl;
        cout << "You've got a perfect score!" << endl;
    }
    
    if (score1 != 100)
        cout << "You need " << 100 - score1 << " more points for a perfect score" << endl;
}
