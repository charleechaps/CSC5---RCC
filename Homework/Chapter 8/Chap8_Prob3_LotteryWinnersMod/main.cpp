//Diana "Charlie" Cardenas               CSC5              Chapter 8, P. 487, #3
//
/*******************************************************************************
 *
 * VALIDATE WINNING LOTTERY NUMBERS
 * _____________________________________________________________________________
 * This program will take the user's input for winning lottery numbers of the 
 * week. It will then determine whether this number is in the array of lottery
 * combinations by using a binary search.
 *
 * Computation is based on the binary search
 * _____________________________________________________________________________
 * INPUT
 *  winningNum : Week's winning lottery numbers
 *  first      : First index of the array that might include winningNum
 *  last       : Last index of the array that might include winningNum
 *
 * OUTPUT
 *  middle   : Middle index of the array
 *  validate : Determines in user input is in the array
 *
 ******************************************************************************/

//System Libraries
#include <iostream>   //Input/Output objects

using namespace std;  //Name-space used in the System Library
//Global Constants
const int NUM_COMBINATIONS = 10;

//Function Prototype
int binarySearch(const int luckyComb[],
                 int NUM_COMBINATIONS,
                 int winningNum);

int main() {
    //Arrays
    int luckyComb[NUM_COMBINATIONS] = {13579, 26791, 26792, 33445, 55555, 
                                       62483, 77777, 79422, 85647, 93121};
    
    //Variables
    int winningNum; 
    int first;
    int last;
    int middle;
    int validate;
    
    //Initialize
    first = 0;
    last  = (NUM_COMBINATIONS - 1);
    validate = -1;
   
    //Input values
    cout<<"Enter This Week's Winning 5-Digit Numbers"<<endl;
    cout<<"  Numbers : ";
    cin>>winningNum;
    
    //Binary Search
    while(first <= last && (validate == -1))
    {
        middle = (first + last) / 2;
        if(luckyComb[middle] == winningNum)
        {
            validate = 0;
        }
        else if (luckyComb[middle] > winningNum)
            last = middle - 1;
        else
            first = middle + 1;
    }
    
    //Display Results
    if(validate == -1)
    {
        cout<<endl;
        cout<<"You Do Not Have the Winning Numbers"<<endl;
    }
    else
    {
        cout<<endl;
        cout<<"You Have the Winning Numbers!"<<endl;
    }
    
    //Exit Program
    return 0;
}
