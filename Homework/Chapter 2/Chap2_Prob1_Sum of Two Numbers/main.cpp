//Diana "Charlie" Cardenas              CSC5              Chapter 2, P. 81, #1
//
/**************************************************************
 *
 * SUM OF TWO FIXED VALUES
 * ____________________________________________________________
 * This program computes the sum of two integers and 
 * outputs the answer
 *
 * Computation is based on the formula:
 * total = a + b 
 * ____________________________________________________________
 * INPUT
 * firstNum : Value of the first integer
 * secondNum : Value of the second integer
 *
 * OUTPUT
 * total : Sum of the two integers
 *
 **************************************************************/
//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

int main() {
  //Declaration of Variables
    int firstNum;      //INPUT - Value of the first integer 
    int secondNum;     //INPUT - Value of the second integer
    int total;         //OUTPUT - Sum of the integers
   
  //Input Values
    firstNum = 62;
    secondNum = 99;

  //Output Program Detail
    cout<<"This Program will calculate the sum of \n";
    cout<<"the integers 62 and 99"<<endl;

  //Compute the sum of the two integers
    total = firstNum + secondNum;

  //Output Result
    cout<<"---------------------------------- \n";
    cout<<firstNum<<" + "<<secondNum<<" = "<<total;

  //Exit Program
    return 0;
}