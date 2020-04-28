//Diana "Charlie" Cardenas               CSC5             Chapter 3, P. 147, #21
//
/*******************************************************************************
 *
 * CALCULATE STOCK PROFIT/LOSSES
 * _____________________________________________________________________________
 * This program computes the stock purchases and sales of Joe. It uses this 
 * information, along with information about commission Joe pays to his broker,
 * to calculate stock profit/losses.
 *
 * Computation is based on shares bought/sold, price of each share, and 
 * commission payed. Also based on the following formulas . . .
 *  Stock Price = Shares x Share Price
 *  Commission Amount = Stock Price x Commission Rate
 * _____________________________________________________________________________
 * INPUT
 *  shares        : The Amount of shares Joe buys/sells
 *  oldSharePrice : Price of stocks when bought
 *  newSharePrice : Price of stocks when sold
 *  commission    : Commission Percentage
 *
 * OUTPUT
 *  commissionTot : Commission paid to broker
 *  newStockTot   : Total price for stocks sold
 *  profit        : Profit after commission paid
 *  oldStockTot   : Total price for stocks bought
 *
 ******************************************************************************/

//System Libraries
#include <iostream>   //Input/Output objects

using namespace std;  //Name-space used in the System Library

//Execution Begins Here!
int main() {
    //Declaration of Variables
    int shares;              //INPUT - The Amount of shares Joe buys/sells
    float oldSharePrice;     //INPUT - Price of stocks when bought
    float newSharePrice;     //INPUT - Price of stocks when sold
    float commission;        //INPUT - Commission Percentage
    float commissionTot;     //OUTPUT - Commission paid to broker
    float newStockTot;       //OUTPUT - Total price for stocks sold
    float profit;            //OUTPUT - Profit after commission paid
    float oldStockTot;       //OUTPUT - Total price for stocks bought
    
    //Initialize Program Variables
    shares        = 1000;
    oldSharePrice = 32.87;
    commission    = 0.02;
    newSharePrice = 33.92;
    
    //Process values : Buying Stocks
    oldStockTot   = oldSharePrice * shares;
    commissionTot = oldStockTot * commission;
    
    //Display Output
    cout<<"JOE'S STOCK TRANSACTION\n";
    cout<<"_______________________________________________\n";
    cout<<"PURCHASE . . .\n";
    cout<<"Paid for Stock  : $"<<oldStockTot<<endl;
    cout<<"Paid to Broker  : $"<<commissionTot<<endl;
    
    //Find Old Stock Total With Commission
    oldStockTot += commissionTot;

    //Process Values : Selling Stocks
    newStockTot   = newSharePrice * shares;
    commissionTot = newStockTot * commission;
    
    //Display Output                                      
    cout<<"-----------------------------------------------\n";
    cout<<"SOLD . . .\n";
    cout<<"Sold Stocks For : $"<<newStockTot<<endl;
    cout<<"Paid to Broker  : $"<<commissionTot<<endl;
    
    //Find New Stock Total with Commission
    newStockTot += commissionTot;
    
    //Calculate Profit
    profit = newStockTot - oldStockTot;
    
    cout<<"\nProfit : $"<<profit;
    //Exit Program
    return 0;
}