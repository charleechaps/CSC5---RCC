//Diana "Charlie" Cardenas               CSC5             Chapter 4, P. 222, #11
//
/*******************************************************************************
 *
 * COMPUTE BOOK CLUB POINTS EARNED 
 * _____________________________________________________________________________
 * This program computes the amount of book club points the user has earned 
 * based on the number of books purchased by user. 
 *
 * Computation is using the switch case statement.
 * _____________________________________________________________________________
 * INPUT
 *  booksPurchase : Number of books user purchased current month
 *
 ******************************************************************************/

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

int main() {
    //Declaration of Variables
    int booksPurchase;    //INPUT - Number of books user purchased in this month
    
    //Input values 
    cout<<"Input Number of Books Purchased This Month : ";
    cin>>booksPurchase;
    
    //Validate Input
    while (booksPurchase<0)
    {
        cout<<"Invalid Input"<<endl;
        cout<<"Enter Number of Books Purchased This Month : ";
        cin>>booksPurchase;
    }
    
    cout<<"------------------------------------------------"<<endl;
    
    //Switch Statement
    switch(booksPurchase)
    {
        case 0: cout<<"Points Earned : 0"; break;
        case 1: cout<<"Points Earned : 1"; break;
        case 2: cout<<"Points Earned : 2"; break;
        case 3: cout<<"Points Earned : 3"; break;
        default: cout<<"Points Earned : 4"; break;
    }
    
    //Exit Program
    return 0;
}