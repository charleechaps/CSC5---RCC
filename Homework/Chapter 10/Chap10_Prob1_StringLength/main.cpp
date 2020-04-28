//Diana "Charlie" Cardenas              CSC5             Chapter 2, P. 83, #11
//
/*******************************************************************************
 *
 * COMPUTE DISTANCE PER TANK OF GAS
 * _____________________________________________________________________________
 * This program computes the distance a car can travel on one
 * tank of gas based on gas tank capacity and average
 * miles-per-gallon (MPG) rating for city and highway driving.
 *
 * Computation is based on the formula:
 * Distance = Number of Gallons x Average Miles per Gallon
 * _____________________________________________________________________________
 * INPUT
 * tankCapacity : Gas tank capacity in gallons
 * mpgCity : Average MPG for city driving
 * mpgHighway : Average MPG for highway driving
 *
 * OUTPUT
 * distance : Distance car can travel
 *
 ******************************************************************************/

//System Libraries
#include <iostream>   //Input/Output objects
#include <cstring>
using namespace std;  //Name-space used in the System Library

//Function prototypes
int FindStringLength(char *);

int main() {
    //Declaration of Variables
    const int maxLength = 100;
    int numOfChar;
    
    //Array
    char input[maxLength];
    
    //Input values
    cout<<"Enter a string : ";
    cin.getline(input, maxLength);
    
    //Find Num. of Char
    numOfChar = FindStringLength(input);
    
    //Display Output
    cout<<endl;
    cout<<"Number of Char. in "<<input<<" : "<<numOfChar;

    //Exit Program
    return 0;
}

/******************************************************************************
 * FindStringLength    
 * -----------------------------------------------------------------------------       
 * This function accepts a C-string as an argument and returns the length of the 
 * C-string as a result.                                                         
 ******************************************************************************/
int FindStringLength(char *Str)
{
	return strlen(Str);
}