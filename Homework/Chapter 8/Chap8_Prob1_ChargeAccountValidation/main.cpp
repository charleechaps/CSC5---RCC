//Diana "Charlie" Cardenas               CSC5              Chapter 8, P. 487, #1
//
/*******************************************************************************
 *
 * VALIDATE ACCOUNT NUMBER
 * _____________________________________________________________________________
 * This program allows the user to enter an account number. A linear search 
 * will then initiate to determine whether the number entered is in the programs
 * array.
 *
 * Computation is based on linear search
 * _____________________________________________________________________________
 * INPUT
 *  userAccount : The account number inputed by the user
 *
 * OUTPUT
 *  validate : Determines whether the us4ere number in in the array
 * 
 * COUNTER
 *  index : Counter for the while loop
 *
 ******************************************************************************/

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//Constants
const int NUM_OF_ACCOUNTS = 18;

int main() {
    //Arrays
    int accountNum[NUM_OF_ACCOUNTS] = {5658845, 4520125, 7895122, 8777541,
                                       8451277, 1302850, 8080152, 4562555,
                                       5552012, 5050552, 7825877, 1250255,
                                       1005231, 6545231, 3852085, 7576651,
                                       7881200, 4581002};
    
    //Variables
    int userAccount;
    int index;       
    int validate;
    
    //Initiate Variables
    validate = -1;   //Determine is User input is valid
    index    = 0;    //Sets the while counter to zero
    
    //Input values
    cout<<"Enter a Valid Charge Account Number : ";
    cin>>userAccount;
    
    //Linear Search
    while ((index < NUM_OF_ACCOUNTS) && (validate == -1))
    {
        if(accountNum[index] == userAccount)
        {
            validate = 0;
        }
        index++;
    }
    
    //Display Output
    if(validate == -1)
    {
        cout<<endl;
        cout<<"Error!"<<endl;
        cout<<"The Account Number is Not Valid"<<endl;
    }
    else
    {
        cout<<endl;
        cout<<"The Account Number is Valid"<<endl;
    }
    
    //Exit Program
    return 0;
}