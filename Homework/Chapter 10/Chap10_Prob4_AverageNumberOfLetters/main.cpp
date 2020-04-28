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
#include <iomanip>
#include <cstring>
using namespace std;  //Name-space used in the System Library

//Function prototypes
int FindNumOfWords(char *, const int, int &);

int main() {
    //Declaration of Array Size
    const int MAXCHAR = 51;
    
    //Variables
    int numOfWords;
    int letters;
    float avgLetter;
    
    //Initialize
    letters = 0;
    
    //Array
    char stringInput[MAXCHAR];
    
    //Input values
    cout<<"Enter a String (smaller than 50 char.) : ";
    cin.getline(stringInput, MAXCHAR);
    
    //Find Number of Words
    numOfWords = FindNumOfWords(stringInput, MAXCHAR, letters);
    
    //Find Average
    avgLetter = static_cast<float>(letters) / numOfWords;
    
    //Display Output
    cout<<left;
    cout<<fixed<<showpoint<<setprecision(2)<<endl;
    cout<<setw(38)<<"Number of Words in String"<<" : "<<numOfWords<<endl;
    cout<<setw(38)<<"Average Number of letters in each word"<<" : "
        <<avgLetter<<endl;
    
    //Exit Program
    return 0;
}

int FindNumOfWords(char * stringInput, const int MAX, int &letters)
{
    //Variables
    int words;
    
    //Initialize Variable
    words = 1;
    
    //Find Spaces
    for(int i = 0; i < MAX; i++)
    {
        if(isspace(stringInput[i]))
            words++;
    }
    
    //Find Length
    letters = strlen(stringInput);
    letters = letters - (words - 1);
    
    return words;
}