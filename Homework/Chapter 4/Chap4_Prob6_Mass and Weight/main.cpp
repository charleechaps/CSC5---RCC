//Diana "Charlie" Cardenas               CSC5              Chapter 4, P. 220, #6
//
/*******************************************************************************
 *
 * COMPUTE OBJECT MASS IN NEWTONS
 * _____________________________________________________________________________
 * This program will ask user for mass (in kilograms) of an object. It will then
 * compute mass of object into newtons and display it. It will then use the 
 * if-else statement to determine whether the object is too light or too heavy.
 *
 * Computation is based on the formula:
 * Newtons = Object's KG * 9.8
 * _____________________________________________________________________________
 * INPUT
 *  objectMass   : Mass of the object in kilograms
 *
 * OUTPUT
 *  newtonWeight : Object's weight in newtons
 *
 ******************************************************************************/

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

int main() {
    
    /******************************************************
     * CONSTANT
     * ----------------------------------------------------
     * NEWTON_IN_KG : Number of newtons in one kg 
     ******************************************************/
    const float NEWTON_IN_KG = 9.8;   
    
    //Declaration of Variables
    float objectMass;          //INPUT - Mass of object in kilograms
    float newtonWeight;        //OUTPUT - Objects weight in newtons
    
    //Input values
    cout<<"Enter and Object's Mass (in Kilograms) : ";
    cin>>objectMass;
   
    //Calculate Object Weight
    newtonWeight = objectMass * NEWTON_IN_KG;
    
    //Display Output
    cout<<"Object Mass : "<<newtonWeight<<endl;
    
    //Condition for object mass qualification
    if(newtonWeight<10)
    {
        cout<<"Object Too Light";
    }
    else if (newtonWeight>1000)
    {
        cout<<"Object Mass Too Heavy ";
    }
    else
    {
        cout<<"Object Mass Good";
    }

    //Exit Program
    return 0;
}