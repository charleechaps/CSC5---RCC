//Diana "Charlie" Cardenas               CSC5             Chapter 4, P. 225, #21
//
/*******************************************************************************
 *
 * COMPUTE AREA OF VARIOUS GEOMETRICAL SHAPES
 * _____________________________________________________________________________
 * This program will display a menu in which the user can choose to calculate 
 * the area of various geometric shapes. It will then calculate the area of that
 * shape and return to the menu until the use has enter the option to exit the
 * program.
 * 
 * Calculations are based on the formulas:
 * Circle Area = Pi * (Radius)^2
 * Rectangle Area = Length * Width
 * Triangle ARea = Height * Half of Base
 * _____________________________________________________________________________
 * INPUT
 *  menuChoice     : Menu option user has chosen
 *  radius         : Radius of a circle
 *  length         : Length of a rectangle
 *  width          : Width of a rectangle
 *  base           : Base of a triangle
 *  height         : Height of a triangle
    
 *
 * OUTPUT
 *  circleArea     : The area of the circle calculated
 *  rectangleArea  : The area of the rectangle calculated
 *  triangleArea   : The area of the triangle calculated
 ******************************************************************************/

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>
using namespace std;  //Name-space used in the System Library

int main() {
    /********************************************************
     * CONSTANT
     * ------------------------------------------------------
     * PI : Ratio of a circle's circumference to its diameter
     ********************************************************/
    const float PI = 3.14159;
    
    //Declaration of Variables
    int menuChoice;             //INPUT - Menu option user has chosen
    float radius;               //INPUT - Radius of a circle
    float circleArea;           //OUTPUT - The area of the circle calculated
    float length;               //INPUT - Length of a rectangle
    float width;                //INPUT - Width of a rectangle
    float rectangleArea;        //OUTPUT - The area of the rectangle calculated
    float base;                 //INPUT - Base of a triangle
    float height;               //INPUT - Height of a triangle
    float triangleArea;         //OUTPUT - The area of the triangle calculated
    
    //Calculation
    while(menuChoice != 4)
    {
        //Menu
        cout<<"Geometry Calculator\n";
        cout<<right<<endl;
        cout<<setw(36)<<"1. Calculate the Area of a Circle"<<endl;
        cout<<setw(39)<<"2. Calculate the Area of a Rectangle"<<endl;
        cout<<setw(38)<<"3. Calculate the Area of a Triangle"<<endl;
        cout<<setw(10)<<"4. Quit"<<endl; 
        
        //Menu Item Input
        cout<<"\n Enter your choice (1-4):";
        cin>>menuChoice;
        cout<<endl;
        
        //Validate Menu Input
        while((menuChoice < 1) || (menuChoice > 4))
        {
            cout<<"Input Out of Range"<<endl;
            cout<<"Enter your choice (1-4):";
            cin>>menuChoice;
            cout<<endl;
        }
        
        //Area of Circle
        if (menuChoice == 1)
        {
            cout<<"____________________________________"<<endl;
            cout<<"Area of Circle Calculator"<<endl;
            cout<<"------------------------------------"<<endl;
            cout<<"Enter Radius of Circle : ";
            cin>>radius;
            
            //Validate Circle Input
            while(radius<0)
            {
                cout<<"Negative Input. Invalid. "<<endl;
                cout<<"Enter Radius of Circle : ";
                cin>>radius;    
            }
            
            //Calculate Area of Circle
            circleArea = PI * (radius * radius);
            
            //Display Output
            cout<<"Area of Circle : "<<circleArea<<endl;
            cout<<"____________________________________"<<endl;
            cout<<endl;
        }
        
        //Area of Rectangle
        else if(menuChoice == 2)
        {
            cout<<"____________________________________"<<endl;
            cout<<"Area of Rectangle Calculator"<<endl;
            cout<<"------------------------------------"<<endl;
            cout<<"Enter Length of Rectangle : ";
            cin>>length;
            cout<<"Enter Width of Rectangle  : ";
            cin>>width;
            
            //Validate Rectangle Input
            while((length<0)||(width<0))
            {
                cout<<"Negative Input. Invalid"<<endl;
                cout<<"Enter Length of Rectangle : ";
                cin>>length;
                cout<<"Enter Width of Rectangle  : ";
                cin>>width;
            }
            
            //Calculate Area of Rectangle
            rectangleArea = length * width;
            
            //Display Output
            cout<<"Area of Rectangle : "<<rectangleArea<<endl;
            cout<<"____________________________________"<<endl;
            cout<<endl;
        }
        
        //Area of Triangle
        else if(menuChoice == 3)
        {
            cout<<"____________________________________"<<endl;
            cout<<"Area of Triangle Calculator"<<endl;
            cout<<"------------------------------------"<<endl;
            cout<<"Enter Length of Triangle Base : ";
            cin>>base;
            cout<<"Enter Height of Triangle      : ";
            cin>>height;
            
            //Validate Triangle Inputs
            while((base<0)||(height<0))
            {
                cout<<"Negative Input. Invalid."<<endl;
                cout<<"Enter Length of Triangle Base : ";
                cin>>base;
                cout<<"Enter Height of Triangle      : ";
                cin>>height;
            }
            
            //Calculate Are of Triangle
            triangleArea = base * height * 0.5;
            
            //Display Output
            cout<<"Area of Triangle : "<<triangleArea<<endl;
            cout<<"____________________________________"<<endl;
            cout<<endl;
        }
    }
    
    //Exit Program
    return 0;
}