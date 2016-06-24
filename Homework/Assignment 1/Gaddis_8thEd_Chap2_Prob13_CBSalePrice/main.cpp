/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on June 23, 2016, 11:51 PM
 * Purpose: Circuit Board Selling Price
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
    float profit=0.35f; //40 percent profit
    float cost=14.95f;  //Cost in $'s
    float selPrce;      //Selling price in $'s
    
    //Input data
    
    //Process data
    //selPrce=cost*profit+cost
    selPrce=cost*(1+profit);
    int pennies=selPrce*100+0.5;//Shift into pennies add a half to round up
    selPrce=pennies/100.0f;
    
    //Output data
    cout<<"Cost of circuit to the company = $"<<cost<<endl;
    cout<<"Profit desired on circuit board = "<<profit*100<<"%"<<endl;
    cout<<"Selling Price = $"<<selPrce<<endl;
    
    //Exit Stage Right!
    return 0;
}