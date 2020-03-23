// Program Name: Body MAss Index
// Purpose: To calculate a person's body mass index and determine if they have optimal weight, are over or under weight.
// Class: Co Sci 802 3110
// May 1, 2017


#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    // Define all of the variables going to be used for users weight, height, and calculated BMI numer
    double weight;
    double height;
    double BMI;
    
    // Ask for users weight
    
    cout << "Enter your weight measured in pounds: ";
    cin >> weight;
    
    // Ask for users height
    cout << "Enter your height measured in inches: ";
    cin >> height;
    
    // Calculate BMI (given equation) with users inputted weight and height
    
    BMI = weight * 703 / pow(height, 2);
    
    
    cout << fixed << setprecision(2);     // round decimals of BMI to 2 places
    
    if (weight >= 60 && height >= 43)    // if statement for range of reasonable height and weight values
        
    {
        // Output for BMI of optimal weight
        if (BMI >= 18.5 && BMI <= 25)    // range for optimal weight BMI
            cout << "Your Body Mass Index is " << BMI << "." << " You are considered to have optimal weight." << endl;
        
        else if (BMI < 18.5)    // relation of BMI for underweight
            cout << "Your Body Mass Index is " << BMI << "." << " You are considered to be underweight." << endl;
        
        else if ( BMI > 25)      //relation of BMI for overweight
            cout << "Your Body Mass Index is " << BMI << "." << " You are considered to be overweight." << endl;
        
        else       // if none of the options apply
            cout << "Enter a valid input." << endl;
        
        
    }
    else           // if inputted values are not reasonable values
        cout << "Enter a reasonable weight and height." << endl;
    
    
    
    return 0;
}
