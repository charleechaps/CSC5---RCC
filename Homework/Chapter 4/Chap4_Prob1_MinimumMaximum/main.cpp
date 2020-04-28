//Diana "Charlie" Cardenas               CSC5             Chapter 4, P. 220, #1
//
/*******************************************************************************
 *
 * CALCULATE MAX AND MIN VALUES OF TWO NUMBERS
 * _____________________________________________________________________________
 * This program will take two inputs from the user and will calculate which 
 * number is smaller and which number is larger (in value.) The program will 
 * also calculate whether the two numbers are equal.
 * 
 * Computation is based on the use of conditional operators <, >, and the use
 * of the if else statement.
 * _____________________________________________________________________________
 * INPUT
 *  firstNum  : First number input by user
 *  secondNum : Second number input by user
 *
 ******************************************************************************/

//System Libraries
#include <iostream>   //Input/Output objects

using namespace std;  //Name-space used in the System Library

int main() {
    //Declaration of Variables
    float firstNum;           //INPUT - First number input by user
    float secondNum;          //INPUT - Second number input by user
    
    //Input values
    cout<<"Input First Number  : ";
    cin>>firstNum;
    cout<<"Input Second Number : ";
    cin>>secondNum;
    
    //Process values and Display Output
    if(firstNum<secondNum)
    {
        cout<<"Minimum Value : "<<firstNum<<endl;
        cout<<"Maximum Value : "<<secondNum<<endl;
    }
    else if(firstNum>secondNum)
    {
        cout<<"Minimum Value : "<<secondNum<<endl;
        cout<<"Maximum Value : "<<firstNum<<endl;
    }
    else
    {
        cout<<firstNum<<" and "<<secondNum<<" are equal";
    }
    
    //Exit Program
    return 0;
}