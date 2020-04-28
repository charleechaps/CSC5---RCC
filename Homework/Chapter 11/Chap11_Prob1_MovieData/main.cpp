//Diana "Charlie" Cardenas               CSC5             Chapter 11, P. 645, #1
//
/*******************************************************************************
 *
 * DISPLAY MOVIE DATA
 * _____________________________________________________________________________
 * This program will initialize data of two movies into structure variables. It 
 * will then pass on the two variables to a function where it will display the 
 * data of the movie.
 * _____________________________________________________________________________
 * INPUT
 *  title    : Title of the movie
 *  director : Movie director
 *  year     : Year movie was released
 *  runTime  : Run time of movie in minutes
 *
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

    MovieData(string t, string d, int yr, int rt)
    {	
        title = t;  
        director = d;
        year = yr;
        runTime = rt;
    }
};

//Variables
void DisplayData(MovieData);

int main()
{
    MovieData movie1("Mad Max", "George Miller", 1980, 95);
    MovieData movie2("Titanic", "James Cameron", 1997, 195);

    //Display Movie
    DisplayData(movie1);
    DisplayData(movie2);

    return 0;
}

/*******************************************************************************
 * DisplayData
 * -----------------------------------------------------------------------------
 * This function will display the contents of the movie structure variable 
 * initialized in main when the variables were defined.
 ******************************************************************************/
void DisplayData(MovieData movie)
{
    cout<<left;
    cout<<"        Movie information"<<endl;
    cout<<"-----------------------------------"<<endl;
    cout<<setw(12)<<"Title"<<" : "<<movie.title<<endl;
    cout<<setw(12)<<"Director"<<" : "<<movie.director <<endl;
    cout<<setw(12)<<"Year"<<" : "<<movie.year<<endl;
    cout<<setw(12)<<"Running Time"<<" : "<<movie.runTime<<" minutes"<<endl;
    cout<<endl;
}
