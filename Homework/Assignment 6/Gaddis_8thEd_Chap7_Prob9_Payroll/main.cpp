/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on July 23, 2016, 12:20 AM
 * Purpose: Payroll & Parallel Arrays
 */

//System Libraries
#include <iostream> //Input/Output Stream Library
#include <iomanip>  //Formatting Library
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    const int SIZE=7;
    long int empID[SIZE]={5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
                          7580489};
    int hours[SIZE];
    float payrate[SIZE];
    float wages[SIZE];
    int index;
    
    //Input data
    for(index=0;index<SIZE;index++){
        cout<<"Employee ID: "<<empID[index]<<endl;
        cout<<"Hour's worked? ";
        cin>>hours[index];
        //Validation
        while(hours[index]<0){
            cout<<"Please enter a positive integer "<<endl;
            cin>>hours[index];
        }
        
        cout<<"Pay Rate? ";
        cin>>payrate[index];
        //Validation
        while(payrate[index]<15.00){
            cout<<"Wow. Please enter a rate higher than 15.00 "<<endl;
            cin>>payrate[index];
        }
        cout<<endl;
    }
    
    //Process data
    for(index=0;index<SIZE;index++){
        wages[index]=hours[index]*payrate[index];
    }
    
    //Output data
    cout<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Employee ID      Wages"<<endl;
    cout<<"-----------------------"<<endl;
    for(index=0;index<SIZE;index++){
        cout<<"  "<<empID[index]<<"      $"<<setw(7)<<wages[index]<<endl;
    }
    
    //Exit Stage Right!
    return 0;
}