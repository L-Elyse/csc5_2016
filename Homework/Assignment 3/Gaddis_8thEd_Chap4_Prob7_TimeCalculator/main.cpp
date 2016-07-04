/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on July 3, 2016, 6:00 PM
 * Purpose: Time Calculator
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
    int seconds;
    const float secpmin=60.0;
    const float secphr=3600.0;
    const float secpday=86400.0;
    float minute, hour, day;
       
    
    //Input data
    cout<<"A program based on seconds."<<endl;
    cout<<"Please enter a positive integer greater than 60."<<endl;
    cin>>seconds;
    
    
    //Process data
    cout<<setprecision(3);
    if (seconds>=secpday){
        day=seconds/secpday;
        cout<<"That is equivalent to about "<<day<<" day(s)!"<<endl;
    }
    else if (seconds>=secphr&&seconds<secpday){
        hour=seconds/secphr;
        cout<<"That is equivalent to about "<<seconds<<" hour(s)!"<<endl;
    }
    else if (seconds>=secpmin&&seconds<secphr){
        minute=seconds/secpmin;
        cout<<"That is equivalent to about "<<seconds<<" minute(s)!"<<endl;
    }
    else
        cout<<"I'm sorry. You must enter a positive integer greater than 60. \n";
                            

    
    
    //Exit Stage Right!
    return 0;
}