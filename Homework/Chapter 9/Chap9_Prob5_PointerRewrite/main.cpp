//Diana "Charlie" Cardenas               CSC5              Chapter 9, P. 538, #5
//
/*******************************************************************************
 *
 * COMPUTE DISTANCE PER TANK OF GAS
 * _____________________________________________________________________________
 * This program computes the distance a car can travel on one
 * tank of gas based on gas tank capacity and average
 * miles-per-gallon (MPG) rating for city and highway driving.
 *
 * Computation is based on the formula:
 * Distance = Number of Gallons x Average Miles per Gallon
 * _____________________________________________________________________________
 * INPUT
 * tankCapacity : Gas tank capacity in gallons
 * mpgCity : Average MPG for city driving
 * mpgHighway : Average MPG for highway driving
 *
 * OUTPUT
 * distance : Distance car can travel
 *
 ******************************************************************************/

//System Libraries
#include <iostream>   //Input/Output objects

using namespace std;  //Name-space used in the System Library

//Function prototypes
int doSomething(int *, int *);

int main() {
    //Variables
    int a;
    int b;
    int sum;
    
    //Enter Variable Values
    cout<<"Enter Value for A : ";
    cin>>a;
    cout<<"Enter Value for B : ";
    cin>>b;
    
    //Send Variables to Function
    sum = doSomething(&a, &b);
    
    //Display Sum
    cout<<"Sum = "<<sum<<endl;
    
    //Exit Program
    return 0;
}

int doSomething(int *x, int *y)
{
    //Variables
    int temp;
    
    //Initialize Variable
    temp = *x;
    
    *x = *y * 10;
    *y = temp * 10;
    return *x + *y;
}