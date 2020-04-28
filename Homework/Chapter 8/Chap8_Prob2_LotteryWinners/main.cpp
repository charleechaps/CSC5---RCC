//Diana "Charlie" Cardenas               CSC5              Chapter 8, P. 487, #2
//
/*******************************************************************************
 *
 * VALIDATE LOTTERY NUMBERS
 * _____________________________________________________________________________
 * This program will take the user's input for the week's winning lottery
 * numbers. It will then use a linear search to see if the winning numbers can 
 * be found in a array of lottery numbers.
 *
 * Computation is based on the linear searches
 * _____________________________________________________________________________
 * INPUT
 *  winningNum : Winning number of the week
 *
 * OUTPUT
 *  validate : Determines whether user input is found in array
 * 
 * COUNTERS
 *  index : Counter for the while loop
 *
 ******************************************************************************/

//System Libraries
#include <iostream>   //Input/Output objects

using namespace std;  //Name-space used in the System Library
//Global Constants
const int NUM_COMBINATIONS = 10;

int main() {
    //Arrays
    int luckyComb[NUM_COMBINATIONS] = {13579, 26791, 26792, 33445, 55555, 
                                       62483, 77777, 79422, 85647, 93121};
    
    //Variables
    int winningNum;
    int index;
    int validate;
    
    //Initialize
    index    = 0;
    validate = -1;
    
    //Input values
    cout<<"Enter This Week's Winning 5-Digit Numbers"<<endl;
    cout<<"  Numbers : ";
    cin>>winningNum;
    
    //Linear Search for Winning Number
    while((index < NUM_COMBINATIONS) && (validate == -1))
    {
        if(luckyComb[index] == winningNum)
        {
            validate = 0;
        }
        index++;
    }
    
    //Display Results
    if(validate == -1)
    {
        cout<<endl;
        cout<<"You Do Not Have The Winning Numbers"<<endl;
    }
    else
    {
        cout<<endl;
        cout<<"You Have the Winning Numbers!"<<endl;
    }
    
    //Exit Program
    return 0;
}