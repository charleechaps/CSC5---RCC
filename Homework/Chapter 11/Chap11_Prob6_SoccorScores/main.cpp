//Diana "Charlie" Cardenas               CSC5             Chapter 11, P. 646, #6
//
/*******************************************************************************
 *
 * CALCULATE TOTAL AND HIGHEST SOCCER SCORE
 * _____________________________________________________________________________
 * This program stores user input soccer scores and player data from 12 
 * different players into structure arrays. It will display the data into a 
 * table and calculate/display the total scores and the player with the highest
 * score. 
 *
 * Computation is based on the formula:
 * Total Scores = Scores of Player 1 + Score of Player 2 + . . . Player 12
 * _____________________________________________________________________________
 * INPUT
 *  name       : Player's name
 *  number     : Player's number
 *  pntsScored : Points scored by the player
 *
 * OUTPUT
 *  totalPoints : Total points of all the players
 *
 ******************************************************************************/

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>

using namespace std;  //Name-space used in the System Library
/************************************
 * CONSTANT
 * ----------------------------------
 * MAX : Array Size
 * **********************************/
 const int MAX = 12;

//Structure
struct PlayerData
{
    string name;
    int number;
    int pntsScored;
};

//Function Prototypes
void GetData(PlayerData *);
void DisplayTable(PlayerData *);

int main() {
    //Declaration of Variables
    PlayerData *player = new PlayerData[MAX];
    
    //Input Data
    GetData(player);
    
    //Table
    DisplayTable(player);
    
    //Exit Program
    return 0;
}

/*******************************************************************************
 * GetData
 * -----------------------------------------------------------------------------
 * This function will get the user's input for each of the 12 player's info. It
 * will ask for name, number, and points scored
 ******************************************************************************/
void GetData(PlayerData *player)
{
    for(int i = 0; i < MAX; i++)
    {
        cout<<left;
        cout<<"Enter Data for Player "<<i + 1<<" . . ."<<endl;
        cout<<setw(17)<<"  Player's Name"<<" : ";
        getline(cin, player[i].name);
        
        cout<<setw(17)<<"  Player's Number"<<" : ";
        cin>>player[i].number;
        
        //Validate
        while(player[i].number < 0)
        {
            cout<<"Invalid! Input Must be Positive"<<endl;
            cout<<setw(17)<<"  Player's Number"<<" : ";
            cin>>player[i].number;
        }
        
        cout<<setw(17)<<"  Points Scored"<<" : ";
        cin>>player[i].pntsScored;
        
        while(player[i].pntsScored < 0)
        {
            cout<<"Invalid! Input Must be Positive"<<endl;
            cout<<setw(17)<<"  Points Scored"<<" : ";
            cin>>player[i].pntsScored;
        }
        cin.ignore();
        cout<<endl;
    }
}

/*******************************************************************************
 * DisplayTable
 * -----------------------------------------------------------------------------
 * This function will display the player's info onto a table. It will also 
 * calculate and display total points of the team and the name and number of the
 * player with the highest points scored
 ******************************************************************************/
void DisplayTable(PlayerData *player)
{
    //Variables
    int totalPoints;
    int mostPoints;
    int mostArray;
    
    //Initialize
    mostPoints = player[0].pntsScored;
    mostArray = 0;
    
    cout<<"___________________________________________\n";
    cout<<left;
    cout<<setw(18)<<"Player Name"
        <<setw(8) <<"Number"
        <<setw(13)<<"Points Scored"<<endl;
    cout<<"-------------------------------------------\n";
    
    for(int i = 0; i < MAX; i++)
    {
        cout<<setw(18)<<player[i].name;
        cout<<setw(8) <<player[i].number;
        cout<<setw(13)<<player[i].pntsScored;
        
        //Accumulate Points
        totalPoints += player[i].pntsScored;
        cout<<endl;
    }
    
    //Display Total
    cout<<right;
    cout<<"___________________________________________\n";
    cout<<"Total Points : "<<totalPoints<<endl;
    
    //Find Player with Most Points
    for(int i = 0; i < MAX; i++)
    {
        if(player[i].pntsScored > mostPoints)
        {
            mostPoints = player[i].pntsScored;
            mostArray = i;
        }
    }
    
    //Display Highest Score
    cout<<endl;
    cout<<"Earned Highest Score . . ."<<endl;
    cout<<"  Player Name   : "<<player[mostArray].name<<endl;
    cout<<"  Player Number : "<<player[mostArray].number<<endl;
}