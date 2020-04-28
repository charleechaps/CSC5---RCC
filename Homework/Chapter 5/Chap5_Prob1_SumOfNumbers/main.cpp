//Diana "Charlie" Cardenas               CSC5              Chapter 5, P. 294, #1
//
/*******************************************************************************
 *
 * CALCULATE SUM OF POSITIVE INTEGERS BETWEEN 1 AND A NUMBER
 * _____________________________________________________________________________
 * This program takes a positive integer inputed by the user and calculates the
 * sum of the numbers between 1 and that number inputed.
 *
 * Computation is based on a for-loop. The value of the process variable will be 
 * added to a variable as it loops until it reaches the
 * number inputed by user.
 * _____________________________________________________________________________
 * INPUT
 *  intValue : Positive integer inputed by the user
 * 
 * OUTPUT
 *  addition : Addition of all the for-loops processing variable
 * 
 * COUNTER
 *  i : Increment until integer inputed by user
 *
 ******************************************************************************/

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>
using namespace std;  //Name-space used in the System Library

int main() {
    
    //Declaration of Variables
    int intValue;
    int addition;
    
    //Initialize Program Variables
    addition = 0;
    
    //Program Details
    cout<<"__________________________________________________\n";
    cout<<"This program will add the sum of positive integers\n";
    cout<<"between 1 and another positive integer inputed by \n";
    cout<<"the user\n";
    cout<<"__________________________________________________\n";
    cout<<endl;
    
    //Input values
    cout<<"Enter a Positive Integer Value : ";
    cin>>intValue;
   
    //Validate Input
    while(intValue<0)
    {
        cout<<endl;
        cout<<"[ INVALID INPUT ]"<<endl;
        cout<<"Enter a Positive Integer Value : ";
        cin>>intValue;
    }
    
    //Add Numbers between 1 and input number
    for(int i = 1; i <= intValue; i++)
        addition += i;
    
    //Display Output
    cout<<"--------------------------------------------------"<<endl;
    cout<<"Sum of Numbers"<<setw(19)<<" : "<<addition<<endl;

    //Exit Program
    return 0;
}