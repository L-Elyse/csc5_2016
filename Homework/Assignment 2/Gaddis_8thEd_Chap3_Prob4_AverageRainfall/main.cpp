/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on June 27, 2016, 10:00 PM
 * Purpose: Average Rainfall
 */

//System Libraries
#include <iostream> //Input/Output Stream Library
#include <iomanip> //Format Library
#include <string>//String Library
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    string month1,month2,month3; //The month of rainfall
    float amnt1,amnt2,amnt3; //Amount of rainfall per month in inches
    float average;
        
    //Input data
    cout<<"First month of rainfall."<<endl;
    getline(cin, month1);
    cout<<"Amount of rainfall in inches for "<<month1<<endl;
    cin>>amnt1;
    cin.ignore();   //Skip the newline character
    cout<<"Second month of rainfall."<<endl;
    getline(cin, month2);
    cout<<"Amount of rainfall in inches for "<<month2<<endl;
    cin>>amnt2;
    cin.ignore();   //Skip the newline character
    cout<<"Third month of rainfall."<<endl;
    getline(cin, month3);
    cout<<"Amount of rainfall in inches for "<<month3<<endl;
    cin>>amnt3;
    
    //Process data
    average=(amnt1+amnt2+amnt3)/3;
    
    //Output data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The average rainfall for "<<month1<<", ";
    cout<<month2<<", and "<<month3<<" is "<<average<<" inches."<<endl;
    
    //Exit Stage Right!
    return 0;
}