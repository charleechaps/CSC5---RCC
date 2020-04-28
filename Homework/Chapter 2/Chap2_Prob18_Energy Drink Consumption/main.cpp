//Diana "Charlie" Cardenas              CSC5             Chapter 2, P. 84, #18
//
/**************************************************************
 *
 * COMPUTE # OF COSTUMERS THAT PHURCHASE ENERGY DRINKS 
 * ____________________________________________________________
 * This program computes the number of energy drink consumers
 * from a survey. It will then compute the number of 
 * citrus flavored consumers.
 *
 * Computation is based on the formula:
 * Energy Drink Consumers = (Customers * Percent) / 100 
 * ____________________________________________________________
 * INPUT
 * surveyed : Number of people surveyed
 * energyPcnt : Percent of those people who drink energy drinks
 * citrusPcnt : Percent of those energy consumers that prefer citrus flavored
 * 
 * OUTPUT
 * energy : Number of energy drink consumers
 * citrus : Number of citrus flavored energy drink consumers
 **************************************************************/

//System Libraries
#include <iostream>   //Input/Output objects

using namespace std;  //Name-space used in the System Library
//Global Constants
const int PERCENT=100; 
 
int main() {
    /********************************************************
     * For the following variables, int will be used rather
     * than float because there cannot be half a person
     ********************************************************/
  //Declaration of Variables
    int surveyed;      //INPUT - The number of people surveyed
    int energyPcnt;    //INPUT - Percent of surveyed who drink energy drinks
    int energy;        //OUTPUT - Number of energy drink consumers
    int citrusPcnt;    //INPUT - Percent of citrus flavored consumers
    int citrus;        //OUTPUT - Number of citrus flavored consumers
    
  //Input values
    surveyed = 12467;
    energyPcnt = 14;
    citrusPcnt = 64;
 
  //Program Details
    cout<<"This program will calculate the number of energy drink \n";
    cout<<"consumers and citrus flavored energy drink consumers based \n";
    cout<<"on a survey taken \n";
    cout<<"------------------------------------------------------------ \n";
  //Display the Numbers
    cout<<"Surveyed: "<<surveyed<<endl;
    
  //Process values -> Map inputs to Outputs
    energy = (surveyed * energyPcnt)/PERCENT;
    citrus = (energy * citrusPcnt)/PERCENT;
    
  //Display Output
    cout<<"Percent of Energy Drink Consumers   : "<<energyPcnt<<"% \n";
    cout<<"Number of Energy Drink Consumers    : "<<energy<<endl;
    cout<<"Percent of Citrus Flavored Consumers: "<<citrusPcnt<<"% \n";
    cout<<"Number of Citrus Flavored Consumers : "<<citrus<<endl;

  //Exit Program
    return 0;
}