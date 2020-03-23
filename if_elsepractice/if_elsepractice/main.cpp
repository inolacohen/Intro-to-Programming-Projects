

#include <iostream>

using namespace std;

int main()
{
    double result = .66666667 * 6;
    
    cout << "Result = " << result << endl;
    
    if (abs(result -4.0 < .0001))
        cout << "Result does equal 4" << endl;
    
    else
        cout << "Result does not equal 4" << endl;
        

        
return 0;
}
