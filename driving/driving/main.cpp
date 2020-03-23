// Program Name: Driving
// Class: Co Sci 802 3110
// Date: May 8, 2017

#include <iostream>
using namespace std;

int main()
{
    int totalHours, speed, distance;
    
    
    cout << "What is the speed of the vehicle in miles per hour?" << endl;
    cin >> speed;

    
        while (speed <= 0)
        {
            cout << "Speed needs to be a positive number." << endl;
            cout << "What is the speed of the vehicle in miles per hour?" << endl;
            cin >> speed;
        }
    
    
    cout << "How many hours did it take?" << endl;
    cin >> totalHours;
    
        while (totalHours <= 0)
        {
            cout << "Hours need to be a positive number." << endl;
            cout << "How many hours did it take?" << endl;
            cin >> totalHours;
        }

    
    cout << "Hour\t\tDistance Traveled (in miles):" << endl;
    cout << "____\t\t____________________________" << endl;
 
    
    int hours = 1;
        while (hours <= totalHours)
        {
            distance = speed * hours;
            cout << hours << "\t\t" << distance << endl;
            hours++;
            
        }
    


    return 0;
}
