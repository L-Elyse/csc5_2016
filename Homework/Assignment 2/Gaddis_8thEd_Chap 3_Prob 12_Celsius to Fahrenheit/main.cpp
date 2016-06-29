/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on June 28, 2016, 10:05 PM
 * Purpose: Converting Celsius to Fahrenheit
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
    float F;  //Degrees Fahrenheit
    float C;  //Degrees Celsius
    
    
    //Input data
    cout<<"Input the Celsius Temperature"<<endl;
    cin>>C;
    
    
    //Process data
    F=C*(9.0/5)+32;
    
    
    //Output data
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<C<<" degrees Celsius is equivalent to "<<F<<" degress Fahrenheit"<<endl;
    
    
    //Exit Stage Right!
    return 0;
}