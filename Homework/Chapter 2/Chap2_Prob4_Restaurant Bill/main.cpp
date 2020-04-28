//Diana "Charlie" Cardenas              CSC5             Chapter 2, P. 81, #4
//
/**************************************************************
 *
 * COMPUTING RESTRAUNT BILL WITH TAX AND TIP
 * ____________________________________________________________
 * This program computes the total of a restaurant bill by 
 * computing the the tax and tip amount and then adding it
 * to the meal cost.
 *
 * Computation is based on the formula:
 * Total Bill = Meal Cost + Tip + Tax
 * ____________________________________________________________
 * INPUT
 * mealCost : The cost the meal
 * taxPercent : The tax percentage
 * tax : The amount for the tax
 * tipPercent : The tip percentage
 * tip : The amount for the tip
 *
 * OUTPUT
 * total : The total restaurant bill (meal, tax, tip)
 *
 **************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;     //Name-space used in the System Library
//Global Constant
const float PERCENT=100; 

int main() {
  //Declaration of Variables
    float mealCost;     //INPUT - Amount of money for the meal only
    float taxPercent;   //INPUT - Percent value of the tax
    float tax;          //OUTPUT - The actual monetary value of the tax
    float tipPercent;   //INPUT - Percent value of the tip
    float tip;          //OUTPUT - The actual monetary value of the tip
    float total;        //OUTPUT - The total restaurant bill

  //Initialize Program Variables
    mealCost = 44.50;
    taxPercent = 6.75;
    tipPercent = 15;
    
  //Display Program Details
    cout<<"This program will compute the total of this \n";
    cout<<"restaurant bill"<<endl;
    cout<<"--------------------------------------------"<<endl;
    cout<<"Meal Cost: $"<<mealCost<<endl;
    cout<<"Tax      : "<<taxPercent<<"%"<<endl;
    cout<<"Tip      : "<<tipPercent<<"%"<<endl;
    cout<<"--------------------------------------------"<<endl;

  //Process values -> Map inputs to Outputs
    /***************************************************************
     * for the following equation, I made it so that in the future
     * when programs will begin using cin, the user can enter the 
     * actual percent value rather than the decimal (6.75% rather
     * than .0675)
     ***************************************************************/
    tax = (mealCost * taxPercent)/PERCENT;
    total = tax + mealCost;
    tip = (total * tipPercent)/PERCENT;
    total = tip + total;
            
  //Display Output
    cout<<"Meal Cost            : $"<<fixed<<setprecision(2)<<mealCost<<endl;
    cout<<"Tax Amount           : $"<<fixed<<setprecision(2)<<tax<<endl;
    cout<<"Tip Amount           : $"<<fixed<<setprecision(2)<<tip<<endl;
    cout<<"Total Restaurant Bill: $"<<fixed<<setprecision(2)<<total<<endl;  
    
  //Exit Program
    return 0;
}