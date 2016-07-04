/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on July 3, 2016, 11:00 PM
 * Purpose: Calculating Area of Geometric Figures
 */

//System Libraries
#include <iostream> //Input/Output Stream Library
#include <iomanip>  //Format Library
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    const float pi=3.14159;
    float area;
    float radius;           //For use to find area of circle
    float length, width;    //For use to find area of rectangle 
    float base, height;     //For use to find area of triangle
    char choice;
    
    
    //Input data
    cout<<"Geometry Calculator"<<endl;
    cout<<"Please select a number from the following list"<<endl;
    cout<<"1. Calculate the Area of a Circle"<<endl;
    cout<<"2. Calculate the Area of a Rectangle"<<endl;
    cout<<"3. Calculate the Area of a Triangle"<<endl;
    cout<<"4. Quit Program"<<endl;
    cin>>choice;
    
    
    //Process data 
    cout<<fixed<<setprecision(2)<<showpoint;
    switch(choice){       
        case '1':
            cout<<"Please input the radius of the circle"<<endl;
            cin>>radius;
            area=pi*radius*radius;
            cout<<"The area of the circle = "<<area<<" units squared. \n";
            break;
        case '2':
            cout<<"Please input the length and width of the rectangle"<<endl;
            cin>>length>>width;
            area=length*width;
            cout<<"The area of the rectangle = "<<area<<" units squared. \n";
            break;
        case '3':
            cout<<"Please input the base and height of the triangle"<<endl;
            cin>>base>>height;
            area=base*height*0.5;
            cout<<"The area of the triangle = "<<area<<" units squared. \n";
            break;
        case '4':
            cout<<"Program has ended"<<endl;
            break;
        default:
        cout<<"Invalid Entry"<<endl;
    }
                        

    //Exit Stage Right!
    return 0;
}