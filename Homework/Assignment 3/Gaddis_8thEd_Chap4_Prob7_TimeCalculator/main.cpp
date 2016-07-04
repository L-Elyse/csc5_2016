/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on July 3, 2016, 6:00 PM
 * Purpose: Time Calculator
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
    const int minute=60;
    const int hour=3600;
    const int day=86400;
    unsigned int seconds;
    
    
    //Input data
    cout<<"A program based on seconds."<<endl;
    cout<<"Please enter a positive integer greater than 60."<<endl;
    cin>>seconds;
    
    
    //Process data
    if (seconds>=day){
        seconds/=86400;
        cout<<"That is equivalent to about "<<seconds<<" day(s)!"<<endl;
    }
    else if (seconds>=hour){
        seconds/=3600;
        cout<<"That is equivalent to about "<<seconds<<" hour(s)!"<<endl;
    }
    else if (seconds>=minute){
        seconds/=60;
        cout<<"That is equivalent to about "<<seconds<<" minute(s)!"<<endl;
    }
    else
        cout<<"I'm sorry. You must enter a positive integer greater than 60. \n";
                            

    
    
    //Exit Stage Right!
    return 0;
}