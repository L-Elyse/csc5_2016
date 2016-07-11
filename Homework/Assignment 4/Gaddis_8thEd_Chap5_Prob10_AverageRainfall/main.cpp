/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on July 10, 2016, 6:50 PM
 * Purpose: Calculating Average Rainfall
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
    float rainavg;  //Average Rainfall
    float rainyrs;  //Rainfall per year
    int nummon;     //Total number of months
    float sumrain=0;  //Total inches of rainfall Accumulator
    float inchmon;  //Amount of monthly rainfall in inches
    int months;     //Total months in a year
    int years;      //Number of years user desires to find average
    
    
    //Input Data
    cout<<"Let's calculate the average rainfall"<<endl;
    cout<<"Please enter the number of years that you would like to measure"<<endl;
    cin>>years;
   
    
    //Input Validation
    while(years<1){
        //Get Input Again!
        cout<<"Please enter an integer larger than 1"<<endl;
        cin>>years;
    }
    
    //Format Data
    cout<<fixed<<setprecision(2)<<showpoint;
    
    //Process Data and Loop        
    for(rainyrs=1;rainyrs<=years; rainyrs++){
        for(months=1;months<=12;months++){
            cout<<"How many inches of rainfall for month "<<months<<"?"<<endl;
            cin>>inchmon;
            
            //Input Validation
            if(inchmon<0){
                cout<<"Error. Please enter a number larger than 0"<<endl;
                cin>>inchmon;
            }
            else
            
            //Calculate total inches of rainfall
            sumrain+=inchmon;
        }
        
        //Convert Years to Months
        nummon=12*years;         
        
        //Calculate Average Rainfall
        rainavg=sumrain/nummon;
    }
    
    //Output Data
    cout<<"Number of months                                 : "<<nummon<<endl;
    cout<<"Total inches of rainfall                         : "<<sumrain<<endl;
    cout<<"Average rainfall per month for the entire period : "<<rainavg<<endl;
         
    //Exit Stage Right!
    return 0;
}