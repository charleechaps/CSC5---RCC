//Diana "Charlie" Cardenas               CSC5             Chapter 5, P. 296, #16
//
/*******************************************************************************
 *
 * COMPUTE SAVINGS ACCOUNBT AMOUNT AFTER PERIOD OF TIME
 * _____________________________________________________________________________
 * This program takes the user's input of starting balance, annual interest
 * rate, and months passed since the starting balance. It uses a loop to accept
 * input for each month's deposit amount and withdraw amount, using the number
 * of months as the test for the for-loop. it will calculate and display the 
 * ending balance, total deposit amount, total withdraw amount, and total 
 * interest paid.
 *
 * Balance Computation is based on the formula:
 * Balance += Month Deposit
 * Balance -= Month Withdraw
 * Balance += Month Interest
 *
 * _____________________________________________________________________________
 * INPUT
 *  annualRate : Annual interest rate 
 *  balance    : Initial balance
 *  monthPass  : Months passed since initial balance
 *  acntAdd    : Deposit for a specific month
 *  acntTake   : Withdraw for a specific month
 *
 * OUTPUT
 *  monthRate     : Monthly interest rate
 *  totalDeposit  : Total deposit amount from all months
 *  totalWithdraw : Total withdraw amount of all months
 *  totalInterest : Total interest for all months
 * 
 ******************************************************************************/

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>
using namespace std;  //Name-space used in the System Library

int main() {
    //Declaration of Variables
    float annualRate;
    float monthRate;
    float balance;
    int monthPass;
    
    //Input Annual Interest Rate
    cout<<"Savings Account Balance"<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"Enter the Following . . . \n";
    
    cout<<left;
    cout<<setw(25)<<"Annual Interest Rate"<<" :  ";
    cin>>annualRate;
    
    //Calculate Monthly Interest Rate
    monthRate = annualRate / 12;
    
    //Input Starting Balance
    cout<<setw(25)<<"Starting Balance"<<" : $";
    cin>>balance;
    
    //Input Time Passed
    cout<<setw(25)<<"Number of Months Passed"<<" :  ";
    cin>>monthPass;
    cout<<"_____________________________________\n";
    
    //For Loop Variables
    float acntAdd;
    float totalDeposit;
    float acntTake;
    float totalWithdraw;
    float monthInterest;
    float totalInterest;
    
    //Initialize Program Variables
    totalDeposit  = 0;
    totalWithdraw = 0;
    totalInterest = 0;
    
    for(int i = 1; i <= monthPass; i++)
    {
        cout<<endl;
        cout<<"[ Month "<<i<<" ]"<<endl;
        
        //Input Deposit Amount
        cout<<setw(29)<<"Amount Deposited into Account"<<" : $";
        cin>>acntAdd;
        
        //Validate Input
        while(acntAdd < 0)
        {
            cout<<"<INPUT MUST BE POSITIVE>"<<endl;
            cout<<setw(29)<<"Amount Deposited into Account"<<" : $";
            cin>>acntAdd;
        }
       
        //Calculate Balance and Total Deposit
        balance += acntAdd;
        totalDeposit += acntAdd;
        
        //Input Withdrawal Amount
        cout<<setw(29)<<"Amount Withdrawn"<<" : $";
        cin>>acntTake;
        
        //Validate Input
        while(acntTake < 0)
        {
            cout<<"<INPUT MUST BE POSITIVE>"<<endl;
            cout<<setw(29)<<"Amount Withdrawn"<<" : $";
            cin>>acntTake;
        }
        
        //Calculate Balance and Total Withdraw
        balance -= acntTake;
        totalWithdraw += acntTake;
        
        //Month Interest
        monthInterest = monthRate * balance;
        totalInterest +=  monthInterest;
        balance += monthInterest;
        
        //Run If Last Month
        if (i == monthPass)
        {
            cout<<"_____________________________________\n";
            cout<<setw(23)<<"Ending Balance"<<" : $";
            cout<<fixed<<setprecision(2)<<balance<<endl;
            
            cout<<setw(23)<<"Amount from Deposit"<<" : $";
            cout<<fixed<<setprecision(2)<<totalDeposit<<endl;
            
            cout<<setw(23)<<"Amount from Withdrawals"<<" : $";
            cout<<fixed<<setprecision(2)<<totalWithdraw<<endl;
            
            cout<<setw(23)<<"Total Interest"<<" : $";
            cout<<fixed<<setprecision(2)<<totalInterest<<endl;
        }
    }
   
    //Exit Program
    return 0;
}