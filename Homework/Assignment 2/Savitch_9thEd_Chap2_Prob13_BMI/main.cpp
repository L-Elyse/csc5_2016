/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on June 30, 2016, 12:00 AM
 * Purpose: BMR and Candy Bars
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
    char mf;//Male-female calculation
    float lbs, inches, yrs;
    float BMR, chocBar=230.0f;
    int nBars;
    
    //Input data
    cout<<"Candy bar calculation to maintain weight"<<endl;
    cout<<"Eat less than this to lose weight!"<<endl;
    cout<<"Input male or female with m or f"<<endl;
    cin>>mf;
    cout<<"Input weight (lbs), height (inches), age (yrs)"<<endl;
    cin>>lbs>>inches>>yrs;
    
    
    //Process data
    if(mf=='m'||mf=='M'){
        BMR=66+6.3*lbs+12.9*inches-6.8*yrs;
    }else{
        BMR=655+4.3*lbs+4.7*inches-4.7*yrs;
    }
    nBars=BMR/chocBar+1;
    
    //Output data
    cout<<"Eat less than "<<nBars<<" chocolate bars to lose weight"<<endl;
    
    
    //Exit Stage Right!
    return 0;
}