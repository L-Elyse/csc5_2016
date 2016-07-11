/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on July 10, 2016, 3:05 PM
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
        
    //Format Data
    cout<<fixed<<setprecision(1)<<showpoint;
    
    
    //Process data and Loop
        cout<<"This table shows the Fahrenheit conversions of the ";
        cout<<"Celsius temperatures 0-20."<<endl<<endl;
        cout<<"  Degrees Celsius \t Degrees Fahrenheit"<<endl;
        
    for(C=0;C<=20;C++){
        //Celsius to Fahrenheit Conversion
        F=C*(9.0/5)+32;
        
        cout<<"\t"<<C<<"\t\t\t"<<F<<endl;
    }
        
    //Exit Stage Right!
    return 0;
}