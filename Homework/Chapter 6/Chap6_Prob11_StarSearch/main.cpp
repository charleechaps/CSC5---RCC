//Diana "Charlie" Cardenas              CSC5              Chapter 6, P. 372, #11
//
/*******************************************************************************
 *
 * COMPUTE AVERAGES OF TALENT SCORES
 * _____________________________________________________________________________
 * This program will take the input of scores from 5 different judges. These 
 * scores will be between 1-10. The program will drop the highest score and the
 * lowest score from the 5 judges and then find the average of the remaining
 * three judges.
 *
 * Computation is based on the formula:
 * Score Average = Total / Number of Judges
 * _____________________________________________________________________________
 * INPUT
 *  judge1 : Score from first judge
 *  judge2 : Score from second judge
 *  judge3 : Score from third judge
 *  judge4 : Score from fourth judge
 *  judge5 : Score from fifth judge
 *
 ******************************************************************************/

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>
using namespace std;  //Name-space used in the System Library

/*******************************************************
 * FUNCTION - getJudgeData
 * -----------------------------------------------------
 * This function will get inputs from the user of the
 * scores from 5 judges and send the values back to 
 * main
 *******************************************************/
void getJudgeData (float& score1,
                   float& score2,
                   float& score3,
                   float& score4,
                   float& score5);

/*******************************************************
 * FUNCTION - calcScore
 * -----------------------------------------------------
 * This function will collect the scores from 5 judges
 * from main and calculate the averages of 3 judges
 * (after removing the lowest and highest score.)
 *******************************************************/
void calcScore (float score1,
                float score2,
                float score3,
                float score4,
                float score5);

/*******************************************************
 * FUNCTION - findLowest
 * -----------------------------------------------------
 * This function will find the lowest score from the 5 
 * judges and send it back to the function calcScore
 *******************************************************/
float findLowest (float low1,
                  float low2,
                  float low3,
                  float low4,
                  float low5);

/*******************************************************
 * FUNCTION - getJudgeData
 * -----------------------------------------------------
 * This function will find the highest score from the  
 * 5 judges and send it back to the function calcScore
 *******************************************************/
float findHighest (float high1,
                   float high2,
                   float high3,
                   float high4,
                   float high5);

//Execution Begins Here!
int main() {
    //Declaration of Variables
    float judge1;
    float judge2;
    float judge3;
    float judge4;
    float judge5;
    
    //Heading
    cout<<"JUDGE AVERAGES\n";
    cout<<"_______________________________________________\n";
    
    //Call Function to Ask Scores
    getJudgeData (judge1, judge2, judge3, judge4, judge5);
   
    //Call Function to Calculate Score
    calcScore (judge1, judge2, judge3, judge4, judge5);
    
    //Exit Program
    return 0;
}

/*******************************************************
 * FUNCTION - getJudgeData
 * -----------------------------------------------------
 * Input
 *  score1 : Score from first judge
 *  score2 : Score from second judge
 *  score3 : Score from the third judge
 *  score4 : Score from the fourth judge
 *  score5 : Score from the fifth judge
 *******************************************************/
void getJudgeData (float& score1, float& score2, float& score3, float& score4,
                   float& score5)
{
    cout<<"Please Enter Scores From the Following . . . \n";
    
    //First Judge Score Input
    cout<<setw(11)<<"  Judge #1"<<" : ";
    cin>>score1;
    
    //Validate Score
    while((score1 < 0) || (score1 > 10))
    {
        cout<<"   [INVALID! SCORE RANGE : 0 - 10]"<<endl;
        cout<<setw(11)<<"  Judge #1"<<" : ";
        cin>>score1;
    }
    
    //Second Judge Score Input
    cout<<setw(11)<<"  Judge #2"<<" : ";
    cin>>score2;
    
    //Validate Score
    while((score1 < 0) || (score1 > 10))
    {
        cout<<"   [INVALID! SCORE RANGE : 0 - 10]"<<endl;
        cout<<setw(11)<<"  Judge #1"<<" : ";
        cin>>score1;
    }
    
    //Third Judge Score Input
    cout<<setw(11)<<"  Judge #3"<<" : ";
    cin>>score3;
    
    //Validate Score
    while((score1 < 0) || (score1 > 10))
    {
        cout<<"   [INVALID! SCORE RANGE : 0 - 10]"<<endl;
        cout<<setw(11)<<"  Judge #1"<<" : ";
        cin>>score1;
    }
    
    //Fourth Judge Score Input
    cout<<setw(11)<<"  Judge #4"<<" : ";
    cin>>score4;
    
    //Validate Score
    while((score1 < 0) || (score1 > 10))
    {
        cout<<"   [INVALID! SCORE RANGE : 0 - 10]"<<endl;
        cout<<setw(11)<<"  Judge #1"<<" : ";
        cin>>score1;
    }
    
    //Fifth Judge Score Input
    cout<<setw(11)<<"  Judge #5"<<" : ";
    cin>>score5;
    
    //Validate Score
    while((score1 < 0) || (score1 > 10))
    {
        cout<<"   [INVALID! SCORE RANGE: 0 - 10]"<<endl;
        cout<<setw(11)<<"  Judge #1"<<" : ";
        cin>>score1;
    }
}

/*******************************************************
 * FUNCTION - calcScore
 * -----------------------------------------------------
 * Input
 *  score1 : Score from first judge
 *  score2 : Score from second judge
 *  score3 : Score from the third judge
 *  score4 : Score from the fourth judge
 *  score5 : Score from the fifth judge
 * 
 * Output
 *  validTotal : Total points after removing lowest 
 *               and highest scores
 *  average    : Average of remaining 3 judges
 *  highest    : Highest score out of the 5 judges
 *  lowest     : Lowest score out of the 5 judges
 *******************************************************/
void calcScore (float score1, float score2, float score3, float score4,
                float score5)
{
    float validTotal;
    float average;
    float highest;
    float lowest;
    
    //Determine Highest and Lowest Score
    lowest  = findLowest (score1, score2, score3, score4, score5);
    highest = findHighest(score1, score2, score3, score4, score5);
    
    //Calculate Average
    validTotal = (score1+score2+score3+score4+score5)-(highest+lowest);
    average = validTotal / 3;
    
    //Display Results
    cout<<"_______________________________________________\n";
    cout<<setw(11)<<"FINAL SCORE"<<" : "<<fixed<<setprecision(1)<<average;
    
}

/*******************************************************
 * FUNCTION - findLowest
 * -----------------------------------------------------
 * Input
 *  low1 : Score from first judge
 *  low2 : Score from second judge
 *  low3 : Score from the third judge
 *  low4 : Score from the fourth judge
 *  low5 : Score from the fifth judge
 * 
 * Output
 *  lowest : Lowest score out of the 5 judges
 *******************************************************/
float findLowest (float low1, float low2, float low3, float low4, float low5)
{
    //Variable for Return
    float lowest;
    
    //Find Lowest Value
    if ((low1 <= low2)&&(low1 <= low3)&&(low1 <= low4)&&(low1 <= low5))
        lowest = low1;
    
    else if ((low2 <= low1)&&(low2 <= low3)&&(low2 <= low4)&&(low2 <= low5))
        lowest = low2;
    
    else if ((low3 <= low1)&&(low3 <= low2)&&(low3 <= low4)&&(low3 <= low5))
        lowest = low3;
    
    else if ((low4 <= low1)&&(low4 <= low2)&&(low4 <= low3)&&(low4 <= low5))
        lowest = low4;
    
    else
        lowest = low5;
    
    //Return Lowest Value
    return lowest;
}

/*******************************************************
 * FUNCTION - findHighest
 * -----------------------------------------------------
 * Input
 *  high1 : Score from first judge
 *  high2 : Score from second judge
 *  high3 : Score from the third judge
 *  high4 : Score from the fourth judge
 *  high5 : Score from the fifth judge
 * 
 * Output
 *  highest : Highest score out of the 5 judges
 *******************************************************/
float findHighest (float high1, float high2, float high3, float high4, 
                   float high5)
{
    //Variable for Return
    float highest;
    
    //Find Highest Value
    if ((high1 >= high2)&&(high1 >= high3)&&(high1 >= high4)&&(high1 >= high5))
        highest = high1;
    
    else if ((high2 >= high1)&&(high2 >= high3)&&(high2 >= high4)&&
             (high2 >= high5))
        highest = high2;
    
    else if ((high3 >= high1)&&(high3 >= high2)&&(high3 >= high4)&&
             (high3 >= high5))
        highest = high3;
    
    else if ((high4 >= high1)&&(high4 >= high2)&&(high4 >= high3)&&
             (high4 >= high5))
        highest = high4;
    
    else
        highest = high5;
    
    //Return Highest Value
    return highest;
}