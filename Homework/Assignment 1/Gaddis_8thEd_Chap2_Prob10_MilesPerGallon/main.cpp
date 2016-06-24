/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on June 23, 2016, 1:10 AM
 * Purpose: Calculating miles per gallon of a car
 */

//System Libraries
#include <iostream>//Input/Output Stream Library
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    int miles=375;       //Miles the car can travel before refueling
    int gallons=15;      //Gallons of gas the car can hold
    int mpg;
    
    //Input data
    
    //Process data
    mpg=miles/gallons;
    
    //Output data
    cout<<"Miles driven                   = "<<miles<<endl;
    cout<<"Gallons of gas used            = "<<gallons<<endl;
    cout<<"Miles per gallon the car gets  = "<<mpg<<endl;
    
    //Exit Stage Right!
    return 0;
}