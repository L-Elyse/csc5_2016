/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on June 22, 2016, 11:12 PM
 * Purpose: Calculating a restaurant bill
 */

//System Libraries
#include <iostream>  //Input/Output Stream Library
#include <iomanip>   //Format Library
using namespace std; //Iostream uses the standard namespace

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
    tip=(tax+mealcst)*tip;
    totalbl=mealcst+tax+tip;
    
    
    //Output data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The Meal Cost  = $"<<setw(7)<<mealcst<<endl;
    cout<<"The Tax Amount = $"<<setw(7)<<tax<<endl;
    cout<<"The Tip Amount = $"<<setw(7)<<tip<<endl;
    cout<<"The Total Bill = $"<<setw(7)<<totalbl<<endl;
    
    //Exit Stage Right!
    return 0;
}