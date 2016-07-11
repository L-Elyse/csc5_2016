/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on July 10, 2016, 3:25 PM
 * Purpose: Calculating the Sum of Integers between a Min and Max
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
    int number, sum;
    int maximum; //User's input value
    
    //Input Data
    cout<<"Let's do a sum of numbers starting at 1."<<endl;
    cout<<"Please enter an integer that you would like to use as a ";
    cout<<"maximum value."<<endl;
    cin>>maximum;
    
    //Input Validation
    while(maximum<1){
        //Get Input Again!
        cout<<"Please enter an integer larger than 1"<<endl;
        cin>>maximum;
    }
          
    //Process Data and Loop        
    for(number=1,sum=0;number<=maximum; number++){
        sum += number;
    }
    
    //Output Data
    cout<<"The sum all the integers from 1 to "<<maximum<<" is "<<sum<<endl;
        
    //Exit Stage Right!
    return 0;
}