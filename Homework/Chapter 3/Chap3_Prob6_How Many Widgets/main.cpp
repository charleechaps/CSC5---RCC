//Diana "Charlie" Cardenas               CSC5              Chapter 3, P. 144, #6
//
/*******************************************************************************
 *
 * COMPUTE NUMBER OF WIDGETS ON A PALLET
 * _____________________________________________________________________________
 * This Program computes the amount of widgets are on a pallet by using the 
 * user's input of the individual pallet weight and the total weight of the 
 * pallet with the widgets.
 *
 * Computation is based on the formula:
 * Number of Widgets = (Total Pallet Weight - Pallet Weight) / Widget Weight
 * _____________________________________________________________________________
 * INPUT
 *  widgetWeight      : Weight of one widget
 *  palletWeight      : Weight of one pallet (empty))
 *  totalPalletWeight : Weight of the pallet (w/ widgets)
 *
 * OUTPUT
 *  numberOfWidgets    : Number of widgets on the pallet
 *
 ******************************************************************************/

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>
using namespace std;  //Name-space used in the System Library

int main() {
    //Declaration of Variables
    float widgetWeight;          //INPUT - Weight of one widget
    float palletWeight;          //INPUT - Weight of one pallet (empty))
    float totalPalletWeight;     //INPUT - Weight of the pallet (w/ widgets)
    int numberOfWidgets;         //OUTPUT - Number of widgets on the pallet
    
    //Initialize Program Variables
    widgetWeight = 9.2;
    
    //Program Details
    cout<<"This Program Calculates the Number of Widgets on a Pallet\n";
    cout<<"_______________________________________________________________\n";
   
    //Input Variable Values
    cout<<"Enter the Following . . .\n";
    cout<<left;
    
    cout<<setw(37)<<"Total Weight of Pallet (w/o Widgets)"<<": ";
    cin>>palletWeight;
    
    cout<<setw(37)<<"Total Weight of Pallet (w/ Widgets)"<<": ";
    cin>>totalPalletWeight;
    
    //Process values -> Map inputs to Outputs
    numberOfWidgets = (totalPalletWeight - palletWeight) / widgetWeight;
    
    //Display Output
    cout<<"_______________________________________________________________\n";
    cout<<setw(37)<<"Number of Widgets on Pallet"<<": ";
    cout<<numberOfWidgets;

    //Exit Program
    return 0;
}