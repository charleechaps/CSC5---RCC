//Diana "Charlie" Cardenas               CSC5             Chapter 4, P. 223, #16
//
/*******************************************************************************
 *
 * CALCULATE CALORIE PERCENTAGE FROM FAT
 * _____________________________________________________________________________
 * This program prompts the user to enter the calories and the grams of fat from 
 * a food item. It will validate the input so that negative values cant be used.
 * It then calculates the calories from fat in order to find the percentage of 
 * calories from fat. 
 *
 * Computation is based on the formula:
 * Calories of Fat = Grams of Fat * Calories in a Gram of Fat;
 * CALORIE PERCENTAGE FROM FAT = (Calories of Fat / Calories) * 100;
 * _____________________________________________________________________________
 * INPUT
 *  calories : Calories in food
 *  fatGrams : Grams of fat in food
 *
 * OUTPUT
 *  fatCalories : Calories of fat in food 
 *  fatCalPcnt  : Percentage of calories from fat
 ******************************************************************************/

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

int main() {
    /*****************************************************
     * COSNTANT
     * ---------------------------------------------------
     * CAL_IN_FAT : Amount of calories in one gram of fat
     * PERCENT    : Full percent
     *****************************************************/
    const int CAL_IN_FAT = 9;
    const int PERCENT    = 100;
    
    //Declaration of Variables
    float calories;      //INPUT - Calories in food
    float fatGrams;      //INPUT - Grams of fat in food
    float fatCalories;   //OUTPUT - Calories of fat in food
    float fatCalPcnt;    //OUTPUT - Percentage of calories from fat
    
    //Input values
    cout<<"Input Following Information About the Food . . ."<<endl;
    cout<<"Calories in Food  : ";
    cin>>calories;
    cout<<"Fat Grams in Food : ";
    cin>>fatGrams;
    
    //Validate Input
    while(calories<0)
    {
        cout<<"CALORIE INPUT INVALID"<<endl;
        cout<<"Calories in Food  : ";
        cin>>calories;
    }
    
    while(fatGrams<0)
    {
        cout<<"FAT GRAM INPUT INVALID"<<endl;
        cout<<"Fat Grams in Food : ";
        cin>>fatGrams;
    }
            
    //Calculate Calories from Fat
    fatCalories = fatGrams * CAL_IN_FAT;
    fatCalPcnt  = (fatCalories / calories) * PERCENT;
    
    //Display Output
    cout<<"___________________________________________________"<<endl;
    cout<<"Percentage of Calories from Fat : "<<fatCalPcnt<<"%"<<endl;
    
    if (fatCalPcnt<30)
    {
        cout<<"Food is Low in Fat";
    }

    //Exit Program
    return 0;
}