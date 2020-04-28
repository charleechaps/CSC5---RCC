//Diana "Charlie" Cardenas               CSC5             Chapter 11, P. 645, #2
//
/*******************************************************************************
 *
 * DISPLAY MOVIE DATA
 * _____________________________________________________________________________
 * This program will initialize data of two movies into structure variables. It 
 * will then pass on the two variables to a function where it will display the 
 * data of the movie.
 * 
 * Calculations are . . .
 * Profit/Losses = Revenue - Production Cost
 * _____________________________________________________________________________
 * INPUT
 *  title    : Title of the movie
 *  director : Movie director
 *  year     : Year movie was released
 *  runTime  : Run time of movie in minutes
 *  cost     : Production cost of the movie
 *  revenue  : First-year revenue of the movie
 ******************************************************************************/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//Structure
struct MovieData
{
    string title;
    string director;
    int year;
    int runTime;
    float cost;
    float revenue;

    MovieData(string t, string d, int yr, int rt, float c, float rv)
    {	
        title = t;  
        director = d;
        year = yr;
        runTime = rt;
        cost = c;
        revenue = rv;
    }
};

// Function prototypes
void DisplayData(MovieData);

int main()
{
    MovieData movie1("Mad Max", "George Miller", 1980, 95, 350000, 100000000);
    MovieData movie2("Titanic", "James Cameron", 1997, 195, 200000000, 
                     2187000000);

    //Display Movie
    DisplayData(movie1);
    DisplayData(movie2);

    return 0;
}

/*******************************************************************************
 * DisplayData
 * -----------------------------------------------------------------------------
 * This function will display the contents of the movie structure variable 
 * initialized in main when the variables were defined. It will also calculate
 * the profit/losses of the movie.
 ******************************************************************************/
void DisplayData(MovieData movie)
{
    cout<<left;
    cout<<"        Movie information"<<endl;
    cout<<"-----------------------------------"<<endl;
    cout<<setw(12)<<"Title"<<" : "<<movie.title<<endl;
    cout<<setw(12)<<"Director"<<" : "<<movie.director <<endl;
    cout<<setw(12)<<"Year"<<" : "<<movie.year<<endl;
    cout<<setw(12)<<"Running Time"<<" : "<<movie.runTime<<endl;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<setw(12)<<"Profit/Loss"<<" : $"<<movie.revenue - movie.cost<<endl;
    cout<<endl;
}
