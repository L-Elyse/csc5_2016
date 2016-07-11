/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on July 10, 2016, 4:50 PM
 * Purpose: Distance Traveled
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
    float speed, hours;    //User input data
    float hour, distance;
  
    //Input Data
    cout<<"This program helps to calculate how far you have traveled."<<endl;
    cout<<"What is the speed of the vehicle in mph?"<<endl;
    cin>>speed;
    cout<<"How many hours has it traveled?"<<endl;
    cin>>hours;
    
    //Input Validation
    while(speed<0 || hours<1){
        cout<<"Error. Please enter a positive number for speed and ";
        cout<<"a number greater than 1 for hours"<<endl<<endl;
        cout<<"What is the speed of the vehicle in mph?"<<endl;
        cin>>speed;
        cout<<"How many hours has it traveled?"<<endl;
        cin>>hours;
    }
    
    //Process Data and Loop
    cout<<endl;
    cout<<"Distance Traveled Per Hour:"<<endl;
    cout<<"---------------------------"<<endl;
    cout<<"Hour \t Distance Traveled"<<endl;
    
    for(hour=1;hour<=hours;hour++){
        distance=hour*speed;
        
        cout<<" "<<hour<<"\t\t"<<distance<<endl;
    }
        
    //Exit Stage Right!
    return 0;
}