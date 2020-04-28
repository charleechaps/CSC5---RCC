//Diana "Charlie" Cardenas               CSC5             Chapter 6, P. 375, #23
//
/*******************************************************************************
 *
 * PLAY ROCK PAPER SCISSORS
 * _____________________________________________________________________________
 * This program will allow the user to play Rock, Paper, Scissors with the 
 * computer. The user will input their choice of rock, paper, or scissors and
 * the program (at random) will give the computer a choice. It will then display
 * the winner.
 *
 * Program is based on the random number generator, which will choose the 
 * computer's random choice of rock, paper, or scissors.
 * _____________________________________________________________________________
 * INPUT
 *  compChoice : Computer's random choice of "weapon"
 *  userChoice : User's choice of "weapon"
 *
 ******************************************************************************/

//System Libraries
#include <iostream>   //Input/Output objects
#include <cstdlib>    //Random Number Generator
#include <ctime>
using namespace std;  //Name-space used in the System Library

/**********************************************************
 * FUNCTION - playerChoice
 * --------------------------------------------------------
 * This function will allow the user to input their choice 
 * of rock, paper, or scissors.
 **********************************************************/
int playerChoice ();

/**********************************************************
 * FUNCTION - revealChoice
 * --------------------------------------------------------
 * This function will reveal the computer's choice and the
 * user's choice of rock, paper, or scissors
 **********************************************************/
void revealChoice (int computer,
                   int user);

/**********************************************************
 * FUNCTION - determineWinner
 * --------------------------------------------------------
 * This function will determine who the winner of the game,
 * or in some cases, whether it was a draw or not.
 **********************************************************/
void determineWinner(int computer,  //Computer Choice
                     int user);     //User Choice

int main() {
    //Set Random Number Seed
    srand((time(0)));
    
    //Variables
    int compChoice;   //Random Number for Computer Choice
    int userChoice;   //User's Choice 
   
    //Computer Choice
    compChoice = 1 + rand()%3;
    
    //Heading
    cout<<"ROCK, PAPER, SCISSORS!\n";
    cout<<"________________________________________________"<<endl;
    
    //Open Menu
    userChoice = playerChoice();
    cout<<endl;
    
    //Reveal Choice
    revealChoice(compChoice, userChoice);
    cout<<"________________________________________________"<<endl;
    
    //Determine Winner
    determineWinner(compChoice, userChoice);
    
    //Exit Program
    return 0;
}

/**********************************************************
 * FUNCTION - playerChoice
 * --------------------------------------------------------
 * Input
 *  choice : User's choice of rock, paper, or scissors
 **********************************************************/
int playerChoice()
{
    //User's Choice
    int choice;
    
    //Input =User's Choice
    cout<<"Enter Choice\n";
    cout<<" 1. Rock\n";
    cout<<" 2. Paper\n";
    cout<<" 3. Scissor\n";
    cout<<"Player's Choice : ";
    cin>>choice;
    
    //Validate Player's Choice
    while((choice < 0) || (choice > 3))
    {
        cout<<"[ INVALID INPUT! ]"<<endl;
        cout<<"Enter Choice\n";
        cout<<" 1. Rock\n";
        cout<<" 2. Paper\n";
        cout<<" 3. Scissor\n";
        cout<<"Player's Choice : ";
        cin>>choice;
    }
    return choice;
}

/**********************************************************
 * FUNCTION - revealChoice
 * --------------------------------------------------------
 * Input
 *  computer : Computer's choice
 *  user     : User's choice
 **********************************************************/
void revealChoice (int computer, int user)
{
   switch(computer)
    {
        case 1  : cout<<"Computer Chose Rock"<<endl;break;
        case 2  : cout<<"Computer Chose Paper"<<endl;break;
        default : cout<<"Computer Chose Scissors"<<endl;
    }
    
    switch(user)
    {
        case 1  : cout<<"Player Chose Rock"<<endl;break;
        case 2  : cout<<"Player Chose Paper"<<endl;break;
        default : cout<<"Player Chose Scissor"<<endl;
    } 
}

/**********************************************************
 * FUNCTION - determineWinner
 * --------------------------------------------------------
 * Input
 *  computer : Computer's choice
 *  user     : User's choice
 **********************************************************/
void determineWinner(int computer, int user)
{
    if(computer == user)
        cout<<"It's a Draw"<<endl;
    
    else if (computer == 1)
    {
        if(user == 2)
            cout<<"The Player Wins"<<endl;
        else
            cout<<"The Computer Wins"<<endl;
    }
    
    else if (computer == 2)
    {
        if(user == 3)
            cout<<"The Player Wins"<<endl;
        else 
            cout<<"The Computer Wins"<<endl;
    }
    
    else if (computer == 3)
    {
        if(user == 1)
            cout<<"The Player Wins"<<endl;
        else
            cout<<"The Computer Wins"<<endl;
    } 
}