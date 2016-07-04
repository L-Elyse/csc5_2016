/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on July 3, 2016, 5:50 PM
 * Purpose: Comparing Areas of Rectangles
 */

//System Libraries
#include <iostream> //Input/Output Stream Library
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    float length1, width1, area1; //Rectangle 1 dimensions & area
    float length2, width2, area2; //Rectangle 2 dimensions & area
    
    
    //Input data
    cout<<"Let's compare rectangles."<<endl;
    cout<<"Enter the length and width of the first rectangle."<<endl;
    cin>>length1>>width1;
    cout<<"Now enter the length and width of the second rectangle."<<endl;
    cin>>length2>>width2;
    
    
    //Process data
    area1=length1*width1;
    area2=length2*width2;
    
    
    //Rectangle Comparison
    if (area1==area2)
        cout<<"The areas are equal."<<endl;
    else if (area1>area2)
        cout<<"The first rectangle has the greater area."<<endl;
    else
        cout<<"The second rectangle has the greater area."<<endl;

        
    //Exit Stage Right!
    return 0;
}