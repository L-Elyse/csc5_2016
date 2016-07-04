/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on July 3, 2016, 9:30 PM
 * Purpose: Predicting Days in a Month
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
    int month, year;
    int days;
    int div100=100, div400=400, div4=4;
    
    
    //Input data
    cout<<"Please enter a month (1-12) ";
    cin>>month;
    cout<<"Please enter a year ";
    cin>>year;
    
    
    //Process data 
    if (month==1)
        cout<<"31 days"<<endl;
    if (month==2)
        if (year%div100==0)
            if (year%div400==0)
                cout<<"29 days"<<endl;
            else
                cout<<"28 days"<<endl;
        else
            if (year%div4==0)
                cout<<"29 days"<<endl;
            else
                cout<<"28 days"<<endl;       
    if (month==3)
        cout<<"31 days"<<endl;
    if (month==4)
        cout<<"30 days"<<endl;
    if (month==5)
        cout<<"31 days"<<endl;
    if (month==6)
        cout<<"30 days"<<endl;
    if (month==7)
        cout<<"31 days"<<endl;
    if (month==8)
        cout<<"31 days"<<endl;
    if (month==9)
        cout<<"30 days"<<endl;
    if (month==10)
        cout<<"31 days"<<endl;
    if (month==11)
        cout<<"30 days"<<endl;
    if (month==12)
        cout<<"31 days"<<endl;
        
    cout<<"Error. Please enter a valid numeral month."<<endl;
    

    //Exit Stage Right!
    return 0;
}