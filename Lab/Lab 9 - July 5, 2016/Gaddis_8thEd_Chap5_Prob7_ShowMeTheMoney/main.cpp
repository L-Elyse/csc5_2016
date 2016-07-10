/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on July 5, 2016, 1:02 PM
 * Purpose: How to Double Your Money
 */

//System Libraries
#include <iostream>//Input/Output Stream Library
#include <iomanip> //Format Library
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    int pennies=1;//Initial pay per day
    int payDay=0; //Pay at the end of the month
    
    //Input data
    
    //Process the data and output simultaneously
    for(int day=1;day<=30;day++){
        payDay+=pennies;
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"Day "<<setw(2)<<day<<" Pay rate = $"<<setw(11)<<pennies/100;
        cout<<" Pay earned $"<<payDay/100.0f<<endl;
        pennies*=2;
    }
    
    //Output data
    
    //Exit Stage Right!
    return 0;
}