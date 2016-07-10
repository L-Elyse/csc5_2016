/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on June 22, 2016, 12:30 PM
 * Purpose: Military Budget Compensation
 */

//System Libraries
#include <iostream> //Input/Output Stream Library
#include <iomanip>  //Formatting output
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    float mltBdgt=585e9f;  //http://www.defense.gov/News/Special-Reports/FY16-Budget
    float fedBdgt=3.8e12f; //http://www.defense.gov/News/Special-Reports/FY16-Budget
    float percent;
    const int SIZE=81;
    char guess[SIZE];
    
    //Input data
    cout <<"Guess the percentage of the Federal Budget attributed to the Military"<<endl;
    cin.getline(guess,SIZE);
    
    //Process data
    percent=mltBdgt/fedBdgt*100;
    
    
    //Output data
    cout<<"The Military Budget = "<<mltBdgt<<endl;
    cout<<"The Federal Budget = "<<fedBdgt<<endl;
    cout<<"The percent of the federal budget that is used for the military is = "<<percent<<"%"<<endl;
    cout<<"Your guess was = "<<guess<<"%"<<endl;
    
    //Exit Stage Right!
    return 0;
}