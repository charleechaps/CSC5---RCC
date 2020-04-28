//Diana "Charlie" Cardenas              CSC5             Chapter 3, P. 144, #11
//
/*******************************************************************************
 *
 * CONVERT USD TO YEN AND EUROS
 * _____________________________________________________________________________
 * This program allows users to input a USD amount. It then converts this value 
 * to Yen and Euro by using the conversion rate of USD to Yen and USD to Euro.
 * 
 * Computation is based on the currency rate of a USD to Euros and the currency
 * rate of a USD to Yen.
 * _____________________________________________________________________________
 * INPUT
 *  dollarAmount  : Dollar amount wanted for conversion
 *
 * OUTPUT
 *  dollarInEuro  : Euros in dollar amount input
 *  dollarInYen   : Yen in dollar amount input
 *
 ******************************************************************************/

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>    
using namespace std;  //Name-space used in the System Library

int main() {
    /***************************************************************
     * CONSTANTS
     * -------------------------------------------------------------
     * YEN_TO_USD  : Currency rate of Yen to US dollar
     * EURO_TO_USD : Currency rate of Euro to US dollar
     **************************************************************/
    const float YEN_TO_USD = 113.83;
    const float EURO_TO_USD = .94;
    
    //Declaration of Variables
    float dollarAmount;    //INPUT - Dollar amount wanted for conversion
    float dollarInEuro;    //OUTPUT - Euros in dollar amount input
    float dollarInYen;     //OUTPUT - Yen in dollar amount input
    
    //Input Variable Values
    cout<<"This Program WIll Convert US Dollars to Euros and Yen\n";
    cout<<"_____________________________________________________\n";
    cout<<"Input the USD Amount : $";
    cin>>dollarAmount;
    cout<<endl;
    
    //Process values -> Map inputs to Outputs
    dollarInEuro = dollarAmount * EURO_TO_USD;
    dollarInYen  = dollarAmount * YEN_TO_USD;
    
    //Display Output
    cout<<"$"<<dollarAmount<<" = ";
    cout<<fixed<<setprecision(2)<<dollarInEuro<<" Euros\n";
    
    cout<<"$"<<dollarAmount<<" = ";
    cout<<fixed<<setprecision(2)<<dollarInYen<<" Yen";

    //Exit Program
    return 0;
}