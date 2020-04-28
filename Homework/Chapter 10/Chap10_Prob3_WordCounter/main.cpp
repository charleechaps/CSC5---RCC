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
#include <cctype>
using namespace std;  //Name-space used in the System Library

//Function prototypes
int FindNumOfWords(char *, const int);

int main() {
    //Declaration of Variables
    const int maxChar = 51;
    int numOfWords;
    
    //Array
    char stringInput[maxChar];
    
    //Input values
    cout<<"Enter a String (smaller than 50 char.) : ";
    cin.getline(stringInput, maxChar);
    
    //Find Number of Words
    numOfWords = FindNumOfWords(stringInput, maxChar);
    
    //Display Output
    cout<<"Number of Words in String : "<<numOfWords<<endl;
    
    //Exit Program
    return 0;
}

int FindNumOfWords(char * stringInput, const int MAX)
{
    //Variables
    int words;
    
    //Initialize Variable
    words = 1;
    
    //Find Spaces
    for(int i = 0; i < MAX; i++)
    {
        if(isspace(stringInput[i]))
        {
            words++;
        }
    }
    return words;
}