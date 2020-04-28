//Diana "Charlie" Cardenas              CSC5              Chapter 3, P. 146, #16
//
/*******************************************************************************
 *
 * COMPUTE INTEREST/AMOUNT EARNED IN SAVINGS ACCOUNT
 * _____________________________________________________________________________
 * This program computes the interest amount and total amount in savings by 
 * using the user's input of principal amount, interest rate, and the amount of
 * times the interest was a compounded during a year.
 *
 * Computation is based on the formula:
 * Amount = Principal * (1+(Rate / Compound))^Compound
 * _____________________________________________________________________________
 * INPUT
 *  principal;     : Original amount of money put into savings
 *  interestRate;  : Interest rate from bank
 *  compound;      : Interest compounded in a year
 *
 * OUTPUT
 *  interestAmount : Amount of interest from account
 *  amount;        : Amount in Savings
 ******************************************************************************/

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>
#include <cmath>
using namespace std;  //Name-space used in the System Library

//Execution Begins Here!
int main() {
    //Declaration of Variables
    float principal;        //INPUT - Original amount of money put into savings
    float interestRate;     //INPUT - Interest rate from bank
    float compound;         //INPUT - Interest compounded in a year
    float interestAmount;   //OUTPUT - Amount of interest from account
    float amount;           //OUTPUT - Amount in Savings
    
    //Input values
    cout<<"Interest Earned"<<endl;
    cout<<"______________________________________________________"<<endl;
    cout<<left;
    cout<<"Enter the Following . . .\n";
    
    cout<<setw(35)<<"Balance of Savings Account"<<" : $";
    cin>>principal;
    
    cout<<setw(35)<<"Interest Rate (in Decimal)"<<" : ";
    cin>>interestRate;
    
    cout<<setw(35)<<"Number of Times Interest Compounded"<<" : ";
    cin>>compound;
    
    //Compute Values
    amount         = principal * pow ((1+(interestRate / compound)), compound);
    interestAmount = amount - principal;
    
    //Convert Decimal to Percent
    interestRate   = interestRate * 100;
    
    //Display Output
    cout<<"______________________________________________________"<<endl;
    cout<<setw(20)<<"Interest Rate:"<<right;
    cout<<setw(12)<<fixed<<setprecision(2)<<interestRate<<"%"<<endl;
    
    cout<<left;
    cout<<setw(20)<<"Times Compounded:"<<right;
    cout<<setw(12)<<fixed<<setprecision(2)<<compound<<endl;
    
    cout<<left;
    cout<<setw(20)<<"Principal:"<<"$ "<<right;
    cout<<setw(10)<<fixed<<setprecision(2)<<principal<<endl;
    
    cout<<left;
    cout<<setw(20)<<"Interest:"<<"$ "<<right;
    cout<<setw(10)<<fixed<<setprecision(2)<<interestAmount<<endl;
    
    cout<<left;
    cout<<setw(20)<<"Amount in Savings:"<<"$ "<<right;
    cout<<setw(10)<<fixed<<setprecision(2)<<amount<<endl;
    
    //Exit Program
    return 0;
}