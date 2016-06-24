/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on June 22, 2016, 11:12 PM
 * Purpose: Calculating a restaurant bill
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
    float mealcst=88.67f;  //Meal Cost
    float tax=0.0675f;     //Tax Amount
    float tip=0.2f;        //Tip Amount
    float totalbl;         //Total Bill Amount
    
    //Input data
    
    //Process data
    tax=tax*mealcst;
    int taxpenn=tax*100+0.5;     //Shift into pennies add a half to round up
    tax=taxpenn/100.0f;
    tip=(tax+mealcst)*tip;
    int tippenn=tip*100+0.5;     //Shift into pennies add a half to round up
    tip=tippenn/100.0f;
    totalbl=mealcst+tax+tip;
    int bilpenn=totalbl*100+0.5; //Shift into pennies add a half to round up
    totalbl=bilpenn/100.0f;
    
    
    //Output data
    cout<<"The meal cost  = $"<<mealcst<<endl;
    cout<<"The tax amount = $"<<tax<<endl;
    cout<<"The tip amount = $"<<tip<<endl;
    cout<<"The total bill = $"<<totalbl<<endl;
    
    //Exit Stage Right!
    return 0;
}