//Diana "Charlie" Cardenas              CSC5             Chapter 2, P. 83, #11
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
#include <cstring>
#include <iomanip>

using namespace std;  //Name-space used in the System Library

int main() {
    //Array Constant
    const int SALSA_TYPES = 5;
    
    //Define Arrays
    string salsaNames[SALSA_TYPES] = {"Mild", "Medium", "Sweet", 
                                      "Hot", "Zesty"};
    int jarsSoldMonth[SALSA_TYPES];
    
    //Variables
    int count;
    string highSelling;
    string lowSelling;
    int totalSales;
    
    //Initialize Accumulator(s)
    totalSales = 0;
    
    //Input Sales for Each
    cout<<"Input Sales for Each Type of Salsa"<<endl;
    cout<<"_____________________________________________________"<<endl;
    cout<<left;
    
    for(count = 0; count < SALSA_TYPES; count++)
    {
        cout<<"  "<<setw(6)<<salsaNames[count]<<" : ";
        cin>>jarsSoldMonth[count];
    }
    
    //Total Sales
    for(count = 0; count < SALSA_TYPES; count++)
    {
        //Accumulate Total
        totalSales += jarsSoldMonth[count];
    }
    
    //Highest Selling
    highSelling = salsaNames[0];
    
    for(count = 1; count < SALSA_TYPES; count++)
    {
        if(jarsSoldMonth[count] > jarsSoldMonth[count - 1])
        {
            highSelling = salsaNames[count];
        }
    }
    
    //Lowest Selling
    lowSelling = salsaNames[0];
    
    for(count = 1; count < SALSA_TYPES; count++)
    {
        if(jarsSoldMonth[count] < jarsSoldMonth[count - 1])
        {
            lowSelling = salsaNames[count];
        }
    }
    
    //Display Sales for Each Type
    cout<<endl;
    cout<<"[Sales for Each Type]"<<endl;
    for(count = 0; count < SALSA_TYPES; count++)
    {
        cout<<"  "<<setw(6)<<salsaNames[count]<<" : "<<jarsSoldMonth[count];
        cout<<endl;
    }
    
    //Display Total Sales
    cout<<endl;
    cout<<"_____________________________________________________"<<endl;
    cout<<"Total Sales"<<" : "<<totalSales<<endl;
    
    //Display Highest and Lowest Selling
    cout<<endl;
    cout<<"Highest Selling Salsa" <<" : "<<highSelling<<endl;
    cout<<"Lowest Selling Salsa " <<" : "<<lowSelling <<endl;
    
    //Exit Program
    return 0;
}