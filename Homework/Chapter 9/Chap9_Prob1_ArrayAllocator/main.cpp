//Diana "Charlie" Cardenas               CSC5              Chapter 9, P. 537, #1
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

#include<iostream>
using namespace std;

//Function Prototypes
int *GetIntegers (int);

int main()
{
    //Pointers
    int *integers;
    
    //Variables
    int numOfInts;
    
    //Find Number of Elements to Allocate
    cout<<"How Many Integers Need to Be Inputed? : ";
    cin>>numOfInts;
    
    //Get Integers
    integers = GetIntegers(numOfInts);
    
    //Display Numbers
    for(int index = 0; index < numOfInts; index++)
    {
        cout<<"Integer #"<<(index + 1)<<" : ";
        cout<<*(integers + index)<<endl;
    }
    
    //Delete
    delete [] integers;
    integers = NULL;
    
}

int *GetIntegers(int numAllocate)
{
    //Array to Hold Integers
    int *intInputs;
    
    //Allocate Space by Users Input
    intInputs = new int[numAllocate];
    
    //Enter Values for Array
    for(int index = 0; index < numAllocate; index++)
    {
        cout<<"Enter Value for Integer #"<<(index + 1)<<" : ";
        cin>>*(intInputs + index);
    }
    
    //Return Pointer ti Array
    return intInputs;
}