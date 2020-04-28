//Diana "Charlie" Cardenas              CSC5             Chapter 2, P. 83, #14
//
/**************************************************************
 *
 * DISPLAY INFORMATION IN MUTIPLE LINES USING ONE COUT
 * ____________________________________________________________
 * This program will display the programmer's name, address, 
 * telephone number, and college major on different lines
 * using only one cout.
 *
 * Computation is based on the use of:
 * Escape Sequence(s): \n
 * ____________________________________________________________
 * INPUT
 * name : The programmer's name (both first and last name)
 * address : The programmer's address
 * telephone : The programmer's phone number
 * major : The programmer's college major
 * 
 * OUTPUT
 * [All Inputs as Separate Lines]
 *
 **************************************************************/

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>    //Manipulation Library

using namespace std;  //Name-space used in the System Library

int main() {
  //Declaration of Variables
    string name,      //INPUT - Programmer's name
           address,   //INPUT - Programmer's address
           telephone, //INPUT - Programmer's telephone
           major;     //INPUT - Programmer's major
    
  //Input values
    name = "Charlie Cardenas";
    address = "174 N Cataract Pl, Los Angeles, CA 96752";
    telephone = "(626) 576-9385";
    major = "Computer Science";
    
  //Display Output
    cout<<name<<"\n"<<address<<"\n"<<telephone<<"\n"<<major<<endl;

  //Exit Program
    return 0;
}