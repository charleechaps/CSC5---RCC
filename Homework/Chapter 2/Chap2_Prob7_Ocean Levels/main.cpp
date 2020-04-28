//Diana "Charlie" Cardenas              CSC5             Chapter 2, P. 82, #7
//
/**************************************************************
 *
 * COMPUTE RISEN OCEAN LEVELS AFTER X YEARS
 * ____________________________________________________________
 * This program computes the amount ocean levels have risen 
 * after a certain amount of years
 *
 * Computation is based on the formula:
 * Risen Ocean Levels = Years Passed * Rate
 * ____________________________________________________________
 * INPUT
 * oceanRate : The rate of ocean levels rising
 * years : Amount of years passed
 *
 * OUTPUT
 * rise : Amount ocean levels have risen after x years
 *
 **************************************************************/

//System Libraries
#include <iostream>   //Input/Output objects

using namespace std;  //Name-space used in the System Library

int main() {
  //Declaration of Variables
    float oceanRate;  //INPUT - Rate of the ocean rising (in mm)
    int years;        //INPUT - Number of years passed 
    float rise;       //OUPUT - The number of mm the Ocean has risen
    
  //Initialize Program Variables
    oceanRate = 1.5;
  
  //Output Program Details
    cout<<"In millimeters, this program will calculate how much higher the \n";
    cout<<"ocean levels have risen after a certain number of years"<<endl;
    cout<<"---------------------------------------------------------------"<<endl;
    
  //Process Ocean Level Risen (5 Years)
    years = 5;
    rise = oceanRate * years;
            
  //Display Output
    cout<<"After "<<years<<" years, the ocean levels have risen "<<rise<<"mm"<<endl;
  
  //Process Ocean Level Risen (7 Years)
    years = 7;
    rise = oceanRate * years;
  
  //Display Output
    cout<<"After "<<years<<" years, the ocean levels have risen "<<rise<<"mm"<<endl;
    
  //Process Ocean Level Risen (10 Years)
    years = 10;
    rise = oceanRate * years;
    
  //Display Output
    cout<<"After "<<years<<" years, the ocean levels have risen "<<rise<<"mm"<<endl;
    
  //Exit Program
    return 0;
}