//Diana "Charlie" Cardenas               CSC5             Chapter 10, P. 589, #5
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
void CapitalizeSentence(char*, int);

//Execution Begins Here!
int main() {
    //Array Size
    const int SIZE = 101;
    
    //Array
    char sentence[SIZE]; 
    
    //Variables
    int length;
    
    //Input values
    cout<<"Enter a sentence (less than 100 char.)"<<endl;
    cout<<"Old Sentence : ";
    cin.getline(sentence, SIZE);
   
    //Find Length
    length = strlen(sentence);
    
    //Capitalize
    CapitalizeSentence(sentence, length);
    
    //Display Output
    cout<<"New Sentence : ";
    for(int i = 0; i < length; i++)
        cout<<sentence[i];

    //Exit Program
    return 0;
}

void CapitalizeSentence(char* sentence, int max)
{
    //Variables
    int count;
    
    //Capitalize First Word
    sentence[0] = toupper(sentence[0]);
    
    //Rest of Sentence
    for(count = 1; count < max; count++)
    {
        if(ispunct(sentence[count]))
            sentence[count + 2] = toupper(sentence[count + 2]);
    }
}