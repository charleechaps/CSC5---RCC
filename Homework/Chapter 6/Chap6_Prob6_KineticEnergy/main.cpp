//Diana "Charlie" Cardenas               CSC5              Chapter 6, P. 370, #6
//
/*******************************************************************************
 *
 * COMPUTE KINETIC ENERGY OF A MOVING OBJECT  
 * _____________________________________________________________________________
 * This program will take the user's input for an object's mass (in 
 * kilograms) and the object's velocity (meters per second.) It will then send 
 * it to a function where it will calculate the object's kinetic energy and 
 * return it to main.
 *
 * Computation is based on the formula:
 * Kinetic Energy = 0.5 * Mass * (Velocity * Velocity)
 * _____________________________________________________________________________
 * INPUT
 *  massKilo : The mass of the object in kilograms
 *  meterPS  : The velocity of the object in Meters Per Second
 *
 * OUTPUT
 *  kinetic : Kinetic Energy of the object
 *
 ******************************************************************************/

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>

using namespace std;  //Name-space used in the System Library

/*********************************************************
 * FUNCTION - kineticEnergy
 *--------------------------------------------------------
 * This Function will take massKilo and meterPS from the
 * main to calculate the Kinetic Energy of the object. It
 * will then return it to the main function.
 *********************************************************/
float kineticEnergy (float mass,        //Object's Mass 
                     float velocity);   //Object's Velocity

//Execution Begins Here!
int main() {
    //Declaration of Variables
    float massKilo; //Object's Mass in Kilos
    float meterPS;  //Object's Velocity in Meters Per Second
    float kinetic;  //Object's Kinetic Energy
    
    //Heading
    cout<<"KINETIC ENERGY CALCULATOR\n";
    cout<<"_____________________________________________________\n";
    
    //Input Variable Values
    cout<<left;
    cout<<setw(39)<<"  Object's Mass (in Kilograms)"<<" : ";
    cin>>massKilo;
    cout<<setw(39)<<"  Object's Velocity (Meters Per Second)"<<" : ";
    cin>>meterPS;
    
    //Process values -> Send to kineticEnergy
    kinetic = kineticEnergy (massKilo, meterPS);
    
    //Display Output
    cout<<right;
    cout<<"_____________________________________________________\n";
    cout<<setw(39)<<"Kinetic Energy"<<" : "<<kinetic;

    //Exit Program
    return 0;
}

/*********************************************************
 * FUNCTION - kineticEnergy
 * -------------------------------------------------------
 * Input
 *  mass     : Mass of the object in motion
 *  velocity : Velocity of object in motion
 * 
 * Output
 *  energy : Kinetic energy of the object in motion
 ********************************************************/
float kineticEnergy (float mass, float velocity)
{
    //Set Variable for Return
    float energy;
    
    //Calculate Kinetic Energy
    energy = 0.5 * mass * (velocity * velocity);
    
    //Return Kinetic Energy Value
    return energy;
}