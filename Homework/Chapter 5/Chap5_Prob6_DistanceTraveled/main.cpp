//Diana "Charlie" Cardenas               CSC5              Chapter 5, P. 294, #6
//
/*******************************************************************************
 *
 * COMPUTE DISTANCE TRAVELED
 * _____________________________________________________________________________
 * This program computes the distance traveled by a vehicle by asking the user
 * for the MPH of the vehicle and the number of hours traveled.
 *
 * Computation is based on the formula:
 * Distance Traveled = Number of Hours * MPH
 * _____________________________________________________________________________
 * INPUT
 *  mph         : Speed of Vehicle (Miles per Hours)
 *  hoursTravel : Number of hours traveled
 *
 * OUTPUT
 *  distTravel  :Distance traveled per hour
 * 
 * COUNTER
 *  i : Loop for hours traveled
 *
 ******************************************************************************/

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>
using namespace std;  //Name-space used in the System Library

int main() {
    //Declaration of Variables
    int mph;
    int hoursTravel;
    int distTravel;
    
    //Input values
    cout<<"[FOLLOWING INPUTS MUST BE INTEGERS]"<<endl;
    cout<<"What is the speed of the vehicle in MPH : ";
    cin>>mph;
    cout<<"How many hours has it traveled?         : ";
    cin>>hoursTravel;
    
    //Validate Input
    while((mph < 0) || (hoursTravel<1))
    {
        cout<<"-------------------------------\n";
        cout<<"| Input(s) Invalid!           |\n";
        cout<<"| Speed cannot be negative.   |\n";
        cout<<"| Hours cannot be less than 1 |\n";
        cout<<"-------------------------------\n";
        cout<<"What is the speed of the vehicle in MPH : ";
        cin>>mph;
        cout<<"How many hours has it traveled?         : ";
        cin>>hoursTravel;
    }
    
    cout<<left;
    cout<<"______________________________________\n";
    cout<<setw(8)<<"Hour"<<"Distance Traveled\n";
    cout<<"______________________________________\n";
    
    //For-Loop for Display and Calculations
    for(int i = 1; i <= hoursTravel; i++)
    {
        distTravel = i * mph;
        cout<<setw(8)<<i<<distTravel<<endl;
    }
    
    //Exit Program
    return 0;
}