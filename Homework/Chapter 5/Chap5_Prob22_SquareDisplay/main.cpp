//Diana "Charlie" Cardenas               CSC5             Chapter 5, P. 298, #22
//
/*******************************************************************************
 *
 * DISPLAY BOX OF X
 * _____________________________________________________________________________
 * This program takes the user's input of a positive integer and forms a square
 * of X where the length/width is the user's input.
 *
 * Based of the use of nested loops
 * _____________________________________________________________________________
 * INPUT
 *  sideLength : Length and width of box output
 *
 ******************************************************************************/

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

int main() {
    //Declaration of Variable
    int sideLength;
    
    //Input values
    cout<<"Input a Positive Integer (1-15) : ";
    cin>>sideLength;
    
    //Validate Input
    while ((sideLength < 0) || (sideLength > 15))
    {
        cout<<endl;
        cout<<"[ INPUT NOT VALID ]\n";
        cout<<"Input a Positive Integer (1-15) : ";
        cin>>sideLength;
    }
    
    //Display Output
    for(int i = 1; i <= sideLength; i++)
    {
        for(int i = 1; i <= sideLength; i++)
        {
            cout<<"X";
        }
        cout<<endl;
    }
    //Exit Program
    return 0;
}