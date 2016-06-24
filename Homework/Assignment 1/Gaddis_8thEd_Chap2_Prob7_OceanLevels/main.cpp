/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on June 22, 2016, 11:43 PM
 * Purpose: Calculate ocean levels
 */

//System Libraries
#include <iostream>//Input/Output Stream Library
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    float year5=5.0f;
    float year7=7.0f;
    float year10=10.0f;
    float lvlrise=1.5f;
    
    //Input data
    
    //Process data
    year5=year5*lvlrise;
    year7=year7*lvlrise;
    year10=year10*lvlrise;
    
    
    //Output data
    cout<<"Every year, the ocean level rises 1.5mm."<<endl;
    cout<<"     After 5 years, the ocean rise   = "<<year5<<"mm"<<endl;
    cout<<"     After 7 years, the ocean rise   = "<<year7<< "mm"<<endl;
    cout<<"     After 10 years, the ocean rise  = "<<year10<<"mm"<<endl;
    
    //Exit Stage Right!
    return 0;
}