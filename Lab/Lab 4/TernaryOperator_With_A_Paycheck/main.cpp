/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on June 23, 2016, 1:37 PM
 * Purpose: Paycheck calculation with ternary operator
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
    float hrsWrkd=20;//Hours worked
    float payRate=10;//Dollars per hour
    char ovrTime=40;//Overtime starts at 40 hours
    float payChck;//Paycheck in dollars
    
    
    //Input data
    
    //Process data
    payChck=hrsWrkd<ovrTime?//Test
            hrsWrkd*payRate://True
            ovrTime*payRate+(hrsWrkd-ovrTime)*payRate*.5;//False
    //      ovrTime*payRate+(hrsWrkd-ovrTime)*payRate*1.5;//False
    
    //Output data
    cout<<"Hours worked = "<<hrsWrkd<<endl;
    cout<<"Pay Rate = $ "<<payRate<<"/hr"<<endl;
    cout<<"Overtime starts at "<<static_cast<int>(ovrTime)<<" hrs"<<endl; //Have to statically cast as integer since declared as character!
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Paycheck = $ "<<payChck<<endl;
    
    //Exit Stage Right!
    return 0;
}