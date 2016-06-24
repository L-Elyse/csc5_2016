/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on June 22, 2016, 11:03 PM
 * Purpose: Predicting Sales
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
    float sales=8.6e6f;    //Sales this year
    float percent=0.58f;   //Percent of total sales generated
    float revenue;
    
    //Input data
    
    //Process data
    revenue=sales*percent;
    
    //Output data
    cout<<"Total sales this year        = $"<<sales<<endl;
    cout<<"Percentage of sales generate = "<<percent*100<<"%"<<endl;
    cout<<"Total revenue this year      = $"<<revenue<<endl;
    
    //Exit Stage Right!
    return 0;
}