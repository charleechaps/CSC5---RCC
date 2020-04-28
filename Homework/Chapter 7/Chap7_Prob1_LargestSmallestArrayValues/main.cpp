//Diana "Charlie" Cardenas               CSC5             Chapter 7, P. 444, #1
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
#include <iomanip>
using namespace std;  //Name-space used in the System Library

int main() {
    
    //Array Size
    const int ARRAY_SIZE = 10;
    
    //Array
    float values[ARRAY_SIZE];
    
    //Variables
    float largest;
    float smallest;
    int count;
    
    //Input 10 Values
    cout<<left;
    cout<<"[Enter 10 Values]"<<endl;
    cout<<"_______________________________________\n";
    for(count = 0; count < ARRAY_SIZE; count++)
    {
        cout<<"  Values For #"<<setw(2)<<(count + 1)<<" : ";
        cin>>values[count];
    }
    
    //Set Largest
    largest = values[0];
    
    //Find Largest
    for(count = 1; count < ARRAY_SIZE; count++)
    {
        if((values[count]) > largest)
            largest = values[count];
    }
    
    //Set Smallest
    smallest = values[0];
    
    //Find Smallest
    for(count = 1; count < ARRAY_SIZE; count++)
    {
        if((values[count]) < smallest)
            smallest = values[count];
    }
    
    //Display Largest and Smallest
    cout<<"_______________________________________\n";
    cout<<"Largest Value "<<" : "<<largest<<endl;
    cout<<"Smallest Value"<<" : "<<smallest<<endl;
    return 0;
}