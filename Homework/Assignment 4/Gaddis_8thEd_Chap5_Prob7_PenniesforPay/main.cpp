/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on July 10, 2016, 5:20 PM
 * Purpose: Pennies for Pay
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
    float pennies=0.01;
    int totlday;
    int daysWkd;
    float salary=0.0f;  //Running Total Accumulator for Salary
    
  
    //Input Data
    cout<<"This program helps to calculate your salary if your "<<endl;
    cout<<"pay doubled everyday starting with one penny on day 1."<<endl;
    cout<<"How many days have you worked?"<<endl;
    cin>>daysWkd;
    
    
    //Input Validation
    while(daysWkd<1){
        cout<<"Error. Please enter a positive integer greater than one."<<endl;
        cout<<"How many days have you worked?"<<endl;
        cin>>daysWkd;
    }
    
    //Format Data
    cout<<fixed<<setprecision(2)<<showpoint;
    
    //Process Data and Loop
    cout<<endl;
    cout<<"Day \t Salary Per Day \t Total Salary"<<endl;
    cout<<"---------------------------------------------"<<endl;
    
    for(totlday=1;totlday<=daysWkd;totlday++,pennies*=2){
        
        salary+=pennies;
        
        //Output the data
        cout<<" "<<setw(2)<<totlday<<"\t $"<<setw(10);
        cout<<pennies<<"\t\t $"<<setw(10)<<salary<<endl;
    }
        
    //Exit Stage Right!
    return 0;
}