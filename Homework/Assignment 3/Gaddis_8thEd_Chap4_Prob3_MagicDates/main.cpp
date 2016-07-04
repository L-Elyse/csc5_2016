/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on July 3, 2016, 5:26 PM
 * Purpose: Creating Magic Dates by Multiplying
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
    int month, day, year; //Month, Day and Year user should input
    
    
    //Input data
    cout<<"Let's try to create magic!"<<endl;
    cout<<"Please enter any month numeral, day, and two-digit year."<<endl;
    cin>>month>>day>>year;
    
    
    //Process data
    if (month*day==year){
        cout<<"The date is magic!"<<endl;
        cout<<month<<" times "<<day<<" equals "<<year<<endl;
    }
    else
        cout<<"Sorry. No magic here."<<endl;

    
    
    //Exit Stage Right!
    return 0;
}