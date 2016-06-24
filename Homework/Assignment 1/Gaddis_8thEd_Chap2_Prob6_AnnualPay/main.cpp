/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on June 22, 2016, 11:32 PM
 * Purpose: Calculate Annual Pay
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
    int payamt=2200;   //Pay Amount per pay period
    int payprd=26;     //Total Pay periods in a year
    int annlpy;        //Annual Pay
    
    //Input data
    
    //Process data
    annlpy=payamt*payprd;
    
    
    //Output data
    cout<<"Pay amount per pay period    = $"<<payamt<<endl;
    cout<<"Total number of pay periods  = "<<payprd<<endl;
    cout<<"Total annual pay             = $"<<annlpy<<endl;
    
    //Exit Stage Right!
    return 0;
}