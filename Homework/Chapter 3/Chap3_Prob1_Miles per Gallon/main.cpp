//Diana "Charlie" Cardenas               CSC5              Chapter 3, P. 143, #1
//
/*******************************************************************************
 *
 * COMPUTE CAR GAS MILEAGE (MPG)
 * _____________________________________________________________________________
 * This program computes the distance (in miles) a car can travel per one gallon 
 * of gas (MPG) based on gas tank capacity and the amount of miles the car can 
 * travel on a full tank of gas.
 *
 * Computation is based on the formula:
 * Miles Per Gallon = Miles Per Tank of Gas / Max Gallons of Gas for Car
 * _____________________________________________________________________________
 * INPUT
 *  carGallonLimit : MAX gallons of gas the car can hold
 *  milesPerTank   : Miles car can go on full tank of gas
 *
 * OUTPUT
 *  MPG            : Miles car can drive per gallon of gas
 *
 ******************************************************************************/

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

int main() {
    //Declaration of Variables
    float carGallonLimit;      //INPUT - MAX gallons of gas the car can hold
    float milesPerTank;        //INPUT - Miles car can go on full tank of gas
    float MPG;                 //OUTPUT - Miles car can drive per gallon of gas
    
    //Input values
    cout<<"This program will calculate the MPG of a car \n";
    cout<<"_____________________________________________________________"<<endl;
    cout<<"Enter the Following . . . \n";
    
    cout<<"Number of Gallons of Gas the Car Can Hold: ";
    cin>>carGallonLimit;
    
    cout<<"Number of Miles the Car Can Be Driven on a Full Tank: ";
    cin>>milesPerTank;
    
    //Process values -> Map inputs to Outputs
    MPG = milesPerTank / carGallonLimit;
    
    //Display Output
    cout<<"_____________________________________________________________"<<endl;
    cout<<"THE MPG OF THE CAR IS "<<MPG<<" MILES PER GALLON";
    
    //Exit Program
    return 0;
}