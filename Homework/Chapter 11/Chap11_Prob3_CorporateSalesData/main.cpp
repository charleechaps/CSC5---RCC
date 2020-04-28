//Diana "Charlie" Cardenas               CSC5             Chapter 11, P. 645, #3
//
/*******************************************************************************
 *
 * STORE AND COMPUTE SALES DATA
 * _____________________________________________________________________________
 * This program stores user input sales data of four different divisions. It's 
 * stored in structure arrays in which each corporate division name is 
 * initialized. It will then calculate and display the total annual sale and 
 * average quarterly sales. 
 *
 * Computation is based on the formula:
 * Total Annual Sales = 1st Quarter + 2nd Quarter + 3rd Quarter + 4th Quarter
 * Average Quarterly Sale = Total Annual / 4
 * _____________________________________________________________________________
 * INPUT
 *  divisions : Division name 
 *  qtr1Sales : Quarter 1 sales
 *  qtr2Sales : Quarter 2 sales
 *  qtr3Sales : Quarter 3 sales
 *  qtr4Sales : Quarter 4 sales
 *
 * OUTPUT
 *  totSale    : Total Annual Sale
 *  avgQtrSale : Average quarterly sale
 ******************************************************************************/

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>

using namespace std;  //Name-space used in the System Library

struct SalesData
{
    string division;
    float qtr1Sales;
    float qtr2Sales;
    float qtr3Sales;
    float qtr4Sales;
    float totSale;
    float avgQtrSale;
};

int main() {
    //Declaration of Variables
    SalesData divisions[4];
    const int MAX = 4;
    
    //Initialize
    divisions[0] = {"East Division"};
    divisions[1] = {"West Division"};
    divisions[2] = {"North Division"};
    divisions[3] = {"South Division"};
    
    //Input values
    for(int i = 0; i < MAX; i++)
    {
        cout<<"_________________________________________________________"<<endl;
        cout<<"Enter Data for the "<<divisions[i].division<<endl;
        cout<<"---------------------------------------------------------"<<endl;
        cout<<"First-Quarter Sales  : $";
        cin>>divisions[i].qtr1Sales;
        cout<<"Second-Quarter Sales : $";
        cin>>divisions[i].qtr2Sales;
        cout<<"Third-Quarter Sales  : $";
        cin>>divisions[i].qtr3Sales;
        cout<<"Fourth-Quarter Sales : $";
        cin>>divisions[i].qtr4Sales;
        cout<<"---------------------------------------------------------"<<endl;
        
        //Calculate Total and Average
        divisions[i].totSale = divisions[i].qtr1Sales + divisions[i].qtr2Sales + 
                               divisions[i].qtr3Sales + divisions[i].qtr4Sales;
        
        divisions[i].avgQtrSale = divisions[i].totSale / 4;
        
        //Display Total and Average
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<"Total Annual Sales      : $"<<divisions[i].totSale<<endl;
        cout<<"Average Quarterly Sales : $"<<divisions[i].avgQtrSale<<endl;
        cout<<endl;
    }
    
    //Exit Program
    return 0;
}