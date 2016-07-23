/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on July 22, 2016, 8:50 PM
 * Purpose: First Program
 */

//System Libraries
#include <iostream> //Input/Output Stream Library
#include <string>   //String Library
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    const int SIZE=12;
    string month[SIZE]={"January","February","March","April","May","June","July"
                        ,"August","September","October","November","December"};    
    float rain[SIZE];
    float total=0;
    float highest,lowest;
    string hmonth;
    int count;
    
    //Input data
    for(count=0;count<SIZE;count++){
        cout<<"What was the total rainfall for "<<month[count]<<"?"<<endl;
        cin>>rain[count];
        total+=rain[count];
    }
    
    //Process & Output Data
    highest=rain[0];
    for(count=1;count<SIZE;count++){
        if(rain[count]>highest){
            highest=rain[count];
        } 
    } 
    
    if(highest==rain[4])cout<<month[4];
    if()
    
    cout<<endl;
    cout<<"The total rainfall for the year was "<<total<<" inches."<<endl;
    cout<<"Average rainfall: "<<total/SIZE<<" inches."<<endl;
    cout<<hmonth;
    
    
    
    //Exit Stage Right!
    return 0;
}

