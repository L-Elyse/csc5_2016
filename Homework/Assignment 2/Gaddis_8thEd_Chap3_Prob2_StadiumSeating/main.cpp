/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on June 27, 2016, 12:27 PM
 * Purpose: First Program
 */

//System Libraries
#include <iostream>//Input/Output Stream Library
#include <iomanip>//Format Library
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    float classA=15;               //Price of seats in class A
    float classB=12;               //Price of seats in class B
    float classC=9;                //Price of seats in class C
    float seatsA,seatsB,seatsC;    //Number of seats sold per section
    float incomeA,incomeB,incomeC; //Income by class
    float total;                   //Total income
    
    //Input data
    cout<<"How many seats were sold in class A?"<<endl;
    cin>>seatsA;
    cout<<"How many seats were sold in class B?"<<endl;
    cin>>seatsB;
    cout<<"How many seats were sold in class C?"<<endl;
    cin>>seatsC;
    
    //Process data
    incomeA=classA*seatsA;
    incomeB=classB*seatsB;
    incomeC=classC*seatsC;
    total=incomeA+incomeB+incomeC;
    
    //Output data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Amount of income from class A = $"<<setw(8)<<incomeA<<endl;
    cout<<"Amount of income from class B = $"<<setw(8)<<incomeB<<endl;
    cout<<"Amount of income from class C = $"<<setw(8)<<incomeC<<endl;
    cout<<"Total amount of ticket sales  = $"<<setw(8)<<total<<endl;
    
    //Exit Stage Right!
    return 0;
}