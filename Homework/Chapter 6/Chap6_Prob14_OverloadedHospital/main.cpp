//Diana "Charlie" Cardenas               CSC5             Chapter 6, P. 373, #14
//
/*******************************************************************************
 *
 * COMPUTE HOSPITAL CHARGES
 * _____________________________________________________________________________
 * This program takes information about the user's hospital stay including 
 * whether they were an in-patient or out-patient. It will then take to a 
 * corresponding function to calculate the hospital charge.
 *
 * Computation is based on the formula:
 * Bill = (Nights Stayed * Daily Rate) + Med Charges + Service Charges
 * Bill = Med Charges + Service Charges
 * _____________________________________________________________________________
 * INPUT
 *  patient : Menu input to determine if in-patient or out-patient
 *
 * OUTPUT
 *  totalCharge : Total hospital charge of the patient
 *
 ******************************************************************************/

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>
using namespace std;  //Name-space used in the System Library

/**************************************************************
 * FUNCTION - inpatientCharges
 * ------------------------------------------------------------
 * This function will ask the user for the number of days 
 * stayed at the hospital, daily rate, medication charges, and
 * service charges. It will calculate the total charges and
 * return it to main.
 **************************************************************/
float inpatientCharges();

/**************************************************************
 * FUNCTION - outpatientCharges
 * ------------------------------------------------------------
 * This function will ask the user for the medication charges 
 * and service charges. It will calculate the total charges and
 * return it to main.
 **************************************************************/
float outpatientCharges();

int main() {
    //Declaration of Variables
    float totalCharge;
    int patient;
    
    //Heading
    cout<<"HOSPITAL BILL\n";
    cout<<"_________________________________________________\n";
    
    //Menu
    cout<<"[Patient Type]\n";
    cout<<"1. In-Patient\n";
    cout<<"2. Out-Patient\n";
    cout<<"------------------------------\n";
    cout<<"Enter Patient Type Choice : ";
    cin>>patient;
    
    //Validate Input
    while((patient != 1)&&(patient != 2))
    {
        cout<<endl;
        cout<<"INVALID MENU CHOICE\n";
        cout<<endl;
        cout<<"[Enter Patient Type]\n";
        cout<<"1. In-Patient\n";
        cout<<"2. Out-Patient\n";
        cout<<"------------------\n";
        cout<<"Type : ";
        cin>>patient;
    }
    
    //Call Functions
    switch(patient)
    {
        case 1 : totalCharge = inpatientCharges();break;
        case 2 : totalCharge = outpatientCharges();break;
    }  
   
    //Display Total
    cout<<"_________________________________________________\n";
    cout<<setw(32)<<"Total Charge"<<" : $"<<fixed<<setprecision(2)<<totalCharge;

    //Exit Program
    return 0;
}

/**************************************************************
 * FUNCTION - inpatientCharges
 * ------------------------------------------------------------
 * Input
 *  days          : Number of days stayed at hospital
 *  dailyRate     : Price to stay per day
 *  medCharge     : Medication charges
 *  serviceCharge : Service charges
 * 
 * Output
 *  totalCharges : Total cost of hospital stay
 **************************************************************/
float inpatientCharges()
{
    //Variables
    int days;
    float dailyRate;
    float medCharge;
    float serviceCharge;
    float totalCharge;
    
    //Input Variable Values
    cout<<endl;
    cout<<"_________________________________________________\n";       
    cout<<"[IN-PATIENT INFORMATION]\n";
    cout<<"_________________________________________________\n";       
    cout<<setw(32)<<"Number of Days Spent in Hospital"<<" : ";
    cin>>days;
    cout<<setw(32)<<"Daily Rate"<<" : $";
    cin>>dailyRate;
    cout<<setw(32)<<"Hospital Medication Charges"<<" : $";
    cin>>medCharge;
    cout<<setw(32)<<"Hospital Services Charge"<<" : $";
    cin>>serviceCharge;
    
    //Calculate Charges
    totalCharge = (days * dailyRate) + medCharge + serviceCharge;
    
    //Return Charges
    return totalCharge;
}

/**************************************************************
 * FUNCTION - outpatientCharges
 * ------------------------------------------------------------
 * Input
 *  medCharge     : Medication charges
 *  serviceCharge : Service charges
 * 
 * Output
 *  totalCharges : Total cost of hospital stay
 **************************************************************/
float outpatientCharges()
{
    //Variables
    float medCharge;
    float serviceCharge;
    float totalCharge;
    
    //Input Variable Values
    cout<<endl;
    cout<<"_________________________________________________\n";       
    cout<<"[OUT-PATIENT INFORMATION]\n";
    cout<<"_________________________________________________\n";  
    cout<<setw(32)<<"Hospital Medication Charges"<<" : $";
    cin>>medCharge;
    cout<<setw(32)<<"Hospital Services Charge"<<" : $";
    cin>>serviceCharge;
    
    //Calculate Charges
    totalCharge = medCharge + serviceCharge;
    
    //Return Charges
    return totalCharge;
}