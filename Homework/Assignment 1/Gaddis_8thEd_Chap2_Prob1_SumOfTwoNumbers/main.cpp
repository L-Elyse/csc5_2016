/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on June 22, 2016, 10:55 PM
 * Purpose: Adding Two Numbers
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
    int a=50, b=100; //The first and second variables
    int total;       //The sum of the two variables
    
    //Input data
    
    //Process data
    total=a+b;
    
    //Output data
    cout<<"The first variable       = "<<a<<endl;
    cout<<"The second variable      = "<<b<<endl;
    cout<<"The sum of the variables = "<<total<<endl;
    
    //Exit Stage Right!
    return 0;
}