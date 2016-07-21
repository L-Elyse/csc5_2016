/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on July 21, 2016, 12:20 PM
 * Purpose: Celsius Temperature Table
 */

//System Libraries
#include <iostream> //Input/Output Stream Library
#include <iomanip>  //Formatting Library
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes
float celsius(int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    int times,number;
    
    //Process and Output the Data
    cout<<"Celsius Temperature Table"<<endl;
    cout<<"Fahrenheit\tCelsius"<<endl;
    cout<<"-----------------------"<<endl;
    
    //Format Output
    cout<<fixed<<setprecision(1)<<showpoint;
    
    for(times=1,number=0;times<=21;times++,number++){
        celsius(number);
        cout<<"   "<<setw(2)<<number<<"\t\t"<<setw(5)<<celsius(number)<<endl;
    }
    
    //Exit Stage Right!
    return 0;
}

float celsius(int fhrnht){
    //Declare Variables
    float celsius;
    
    //Convert Fahrenheit to Celsius
    celsius=(5/9.0f)*(fhrnht-32);
    return celsius;
}