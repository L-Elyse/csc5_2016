/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on July 10, 2016, 3:50 PM
 * Purpose: Calculate Calories Burned per Minute
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
    float calpmin=3.6; //Calories burned per minute
    int minutes;
    float calburn; //Total calories burned after n minutes
          
    //Process Data and Loop   
    cout<<"This table shows how many calories you burn per minute:"<<endl;
    cout<<"Minutes \t Calories Burned"<<endl;
    
    for(minutes=5;minutes<=30;minutes+=5){
        calburn =calpmin*minutes;
        
        cout<<"  "<<minutes<<"\t\t\t"<<calburn<<endl;
    }
        
    //Exit Stage Right!
    return 0;
}