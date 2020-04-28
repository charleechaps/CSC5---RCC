//Diana "Charlie" Cardenas               CSC5              Chapter 8, P. 487, #4
//
/*******************************************************************************
 *
 * SORT AND VALIDATE ACCOUNT NUMBERS
 * _____________________________________________________________________________
 * This program will take the user's input for an account number. It will then
 * begin to sort an array of valid account numbers by using selection sort. 
 * It then uses the sorted array to validate whether the user inputed number is
 * in the array of account numbers.
 * 
 * Computation is based on selection sorting and binary search
 * _____________________________________________________________________________
 * INPUT
 *  userAccount : The account number input by user
 *  first       : First possible index of the array to have userAccount
 *  last        : Last possible index of the array to have userAccount
 *
 * OUTPUT
 *  validate : Determine whether userAccount was in the array or not
 *  middle   : The middle value of the array
 *
 ******************************************************************************/

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

/**********************************************************
 * CONSTANTS
 * --------------------------------------------------------
 * NUM_OF_ACCOUNTS : Number of accounts
 **********************************************************/
const int NUM_OF_ACCOUNTS = 18;

/**********************************************************
 * sortArray
 * --------------------------------------------------------
 * INPUT
 *  accounts  : Array of valid account numbers
 *  arraySize : Size of the array accounts
 * 
 * OUTPUT
 *  minValue : Minimum Value of the array
 * 
 * PROCESSING
 *  minIndex  : Index of the array with smallest value
 *  startScan : Counter for while loop
 **********************************************************/
void sortArray(int [], 
               int);

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
    int first;
    int last;
    int middle;
    
    //Initiate Variables
    validate = -1;   //Determine is User input is valid
    index    = 0;    //Sets the while counter to zero
    first = 0;
    last = NUM_OF_ACCOUNTS - 1;
    
    //Input values
    cout<<"Enter a Valid Charge Account Number : ";
    cin>>userAccount;
    
    //Selection Sort
    sortArray(accountNum, NUM_OF_ACCOUNTS);
    
    //Binary Search
    while(first <= last && (validate == -1))
    {
        middle = (first + last) / 2;
        if(accountNum[middle] == userAccount)
        {
            validate = 0;
        }
        else if(accountNum[middle] > userAccount)
            last = middle - 1;
        else first = middle + 1;
    }
    
    //Display Results
    if(validate == -1)
    {
        cout<<endl;
        cout<<"ERROR!"<<endl;
        cout<<"Invalid Account Number"<<endl;
    }
    else
    {
        cout<<endl;
        cout<<"Valid Account Number"<<endl;
    }
    
    //Exit Program
    return 0;
}

/******************************************************
 * sortArray
 *-----------------------------------------------------
 * This program will sort the values in the array
 * accountNum in ascending order in order to use binary
 * search.
 ******************************************************/
void sortArray(int accounts [], int arraySize)
{
    int startScan;
    int minIndex;
    int minValue;
    
    for(startScan = 0; startScan < (arraySize - 1); startScan++)
    {
        minIndex = startScan;
        minValue = accounts[minIndex];
        
        for(int index = startScan + 1; index < (arraySize - 1); index++)
        {
            if(accounts[index] < minValue)
            {
                minValue = accounts[index];
                minIndex = index;
            }
        }
        accounts[minIndex]  = accounts[startScan];
        accounts[startScan] = minValue;
    }
}