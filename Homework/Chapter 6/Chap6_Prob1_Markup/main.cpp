//Diana "Charlie" Cardenas               CSC5              Chapter 6, P. 369, #1
//
/*******************************************************************************
 *
 * COMPUTE PRICE AFTER MARKUP
 * _____________________________________________________________________________
 * This program will take the user's input of an item's wholesale cost and 
 * markup percentage. It will then send this to a function where it will
 * calculate the retail price and send it back to the main.
 *
 * Computation is based on the formula:
 * Retail Price = Wholesale Cost + (Wholesale Cost * Markup)
 * _____________________________________________________________________________
 * INPUT
 *  itemWholesale : Wholesale price of an item
 *  markupPcnt    : Markup percent of the item
 *
 * OUTPUT
 *  retailPrice : Price after markup is added to wholesale cost
 * 
 * FUNCTIONS
 *  calculateRetail : Calculate retail price using wholesale price and markup
 *
 ******************************************************************************/

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>
using namespace std;  //Name-space used in the System Library

//Function prototypes
float calculateRetail(float wholesale,   //Wholesale Cost for Item
                      float markup);     //Markup percentage from wholesale cost

int main() {
    //Declaration of Variables
    float itemWholesale;
    float markupPcnt;
    float retailPrice;
    
    //Heading
    cout<<"CALCULATE RETAIL PRICE\n";
    cout<<"____________________________________________________\n";
    
    //Input Wholesale value
    cout<<left;
    cout<<setw(20)<<"    Item Wholesale Cost"<<" : $";
    cin>>itemWholesale;
    
    //Validate Wholesale Cost
    while(itemWholesale < 0)
    {
        cout<<endl;
        cout<<"    [ INVALID. INPUT CANNOT BE NEGATIVE ]"<<endl;
        cout<<setw(20)<<"    Item Wholesale Cost"<<" : $";
        cin>>itemWholesale;
        cout<<endl;
    }
    
    //Input Markup Value
    cout<<"In Decimals"<<endl;
    cout<<setw(20)<<"    Item Markup Percent"<<" : ";
    cin>>markupPcnt;
    
    //Validate Markup Input
    while(markupPcnt < 0)
    {
        cout<<endl;
        cout<<"    [ INVALID. INPUT CANNOT BE NEGATIVE ]"<<endl;
        cout<<endl;
        cout<<"In Decimals"<<endl;
        cout<<setw(20)<<"    Item Markup Percent"<<" : ";
        cin>>markupPcnt;
    }
    
    //Call Function
    retailPrice = calculateRetail (itemWholesale, markupPcnt);
    
    //Display Return
    cout<<"____________________________________________________\n";
    cout<<setw(20)<<"Retail Price"<<" : $"<<fixed<<setprecision(2)<<retailPrice;
    
    //Exit Program
    return 0;
}

float calculateRetail (float wholesale, float markup)
{
    //Retail Variable
    float retail;
    
    //Calculate Retail Price
    retail = wholesale + (wholesale * markup);
    
    //Return retail Value
    return retail;
}