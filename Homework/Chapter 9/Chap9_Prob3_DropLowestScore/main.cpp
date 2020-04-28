//Diana "Charlie" Cardenas               CSC5              Chapter 9, P.538, #2
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
#include <iomanip>
using namespace std;  //Name-space used in the System Library

//Function prototypes
void GetTestScores(float *, int);
void SelectionSort(float *, int, float*);
float CalcAverage(float *, int, float*);
void displayScores(float*, int, float);

int main()
{
    //Pointers
    float * testScores;    //Act like an Array
    float * lowestScore;
    
    //Variables
    int numOfTests;
    float average;
    float scoreToDrop;
    
    //Initialize
    scoreToDrop = 0;
    lowestScore = &scoreToDrop;
    
    //Find Number of Elements to Allocate
    cout<<"How Many Test Scores for Input? : ";
    cin>>numOfTests;
    cout<<endl;
    
    //Allocate Space
    testScores = new float [numOfTests];
    
    //Get Test Scores
    GetTestScores(testScores, numOfTests);
    
    //Sort in Ascending Order
    SelectionSort(testScores, numOfTests, lowestScore);
            
    //Find Average
    average = CalcAverage(testScores, numOfTests, lowestScore);
    
    //Display Scores
    displayScores(testScores, numOfTests, average);
    
    //Delete
    delete [] testScores;
    testScores = NULL;
}

void GetTestScores(float *tests, int numTest)
{
    cout<<"Enter the Test Scores"<<endl;
    cout<<"___________________________________________"<<endl;
    
    //Enter Values for Array
    for(int index = 0; index < numTest; index++)
    {
        do
        {
            cout<<"Score for Test #"<<(index + 1)<<" : ";
            cin>>*(tests + index);    
        }while (*(tests + index) < 0);
    }
}

void SelectionSort(float *test, int max, float *lowScore)
{
    //Variables
    int startScan;
    int minIndex;
    float minValue;
    
    //Begin Sort
    for(startScan = 0; startScan < (max - 1); startScan++)
    {
        minValue = *(test + startScan);
        minIndex = startScan;
        
        for(int i = startScan + 1; i < max; i++)
        {
            if(*(test + i) < minValue)
            {
                minValue = *(test + i);
                minIndex = i;
            }
        }
        
        //Set the Array with Smallest Value to First
        *(test + minIndex) = *(test + startScan);
        *(test + startScan) = minValue;
        
        //Set Low Score
        if(startScan == 0)
            *lowScore = minValue;
     
    }
}

float CalcAverage(float *test, int testNum, float *dropScore)
{
    //Variables
    float total;
    float average;
    
    //Initialize 
    total = 0;
    
    //Find Total
    for(int i = 0; i < testNum; i++)
    {
        total += *(test + i);
    }
    
    //Calculate Average
    average = (total - *dropScore) / (testNum - 1);
    
    return average;
}

void displayScores(float* testScores, int numTests, float average)
{
    cout<<endl;
    cout<<"Scores for Tests"<<endl;
    
    for(int i = 0; i < numTests; i++)
    {
        cout<<"  Test "<<(i + 1)<<setw(5)<<" : ";
        cout<<*(testScores + i) <<endl;
    }
    
    //Display Average
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"___________________________________________"<<endl;
    cout<<"Average Scores : "<<average;
}