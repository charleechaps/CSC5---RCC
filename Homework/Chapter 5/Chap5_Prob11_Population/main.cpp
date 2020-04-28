//Diana "Charlie" Cardenas               CSC5             Chapter 5, P. 296, #11
//
/*******************************************************************************
 *
 * PREDICT POPULATION SIZE
 * _____________________________________________________________________________
 * This program predicts the size of a population by using the user's input of
 * starting population size, their daily population growth, and the number of 
 * days of multiplying.
 *
 * Computation is based on the formula:
 * Population = Population + (Growth Rate * Population)
 * _____________________________________________________________________________
 * INPUT
 *  population   : Starting population 
 *  growthDays   : Number of days of multiplying
 *  dailyPopRate : Daily population increase rate
 * 
 * OUTPUT
 *  population : New population based on growth rate
 *
 ******************************************************************************/

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>
using namespace std;  //Name-space used in the System Library

int main() {
    //Declaration of Variables
    float population;
    int growthDays;
    float dailyPopRate;
    
    //Input Population
    cout<<"POPULATION SIZE PREDICTION"<<endl;
    cout<<"----------------------------------------------\n";
    cout<<"Enter the Starting Population of Organisms\n";
    cout<<"[Input Integer Value Larger Than 2]\n";
    cout<<"Starting Population : ";
    cin>>population;
    cout<<endl;
    
    //Validate Population Input
    while(population < 2)
    {
        cout<<"INVALID INPUT"<<endl;
        cout<<"Enter the Starting Population of Organisms\n";
        cout<<"[Input Integer Value Larger Than 2]\n";
        cout<<"Starting Population : ";
        cin>>population;
    }
   
    //Input Population Increase
    cout<<"Enter the Daily Population Increase\n";
    cout<<"[Input Positive Decimal Value]\n";
    cout<<"Population Increase : ";
    cin>>dailyPopRate;
    cout<<endl;
    
    //Validate Population Increase Input
    while(dailyPopRate < 0.0)
    {
        cout<<"INVALID INPUT"<<endl;
        cout<<"Enter the Daily Population Increase\n";
        cout<<"[Input Positive Decimal Value]\n";
        cout<<"Population Increase : ";
        cin>>dailyPopRate;
    }
    
    //Input Number of Days Multipy
    cout<<"Enter the Number of Days for Population Growth\n";
    cout<<"[Input Integer Larger Than 1]\n";
    cout<<"Number of Days      : ";
    cin>>growthDays;
    cout<<endl;
    
    //Validate Day Input
    while(growthDays < 1)
    {
        cout<<"INVALID INPUT"<<endl;
        cout<<"Enter the Number of Days for Population Growth\n";
        cout<<"[Input Integer Larger Than 1]\n";
        cout<<"Number of Days      : ";
        cin>>growthDays;
    }
    
    //Process values 
    cout<<left;
    cout<<"____________________________________________________\n";
    cout<<setw(8)<<"Days"<<setw(10)<<"Population\n";
    cout<<"____________________________________________________\n";
    
    for(int day = 1; day <= growthDays; day++)
    {
        population = population + (dailyPopRate * population);
        cout<<"Day "<<setw(4)<<day;
        cout<<fixed<<setprecision(0)<<population<<endl;
    }
    
    //Exit Program
    return 0;
}