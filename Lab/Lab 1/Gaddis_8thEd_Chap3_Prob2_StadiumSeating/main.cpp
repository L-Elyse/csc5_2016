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
    int classA=15;   //Price of seats in class A
    int classB=12;   //Price of seats in class B
    int classC=9;    //Price of seats in class C
    int seatsA,seatsB,seatsC;       //Number of seats sold per section
    int incomeA,incomeB,incomeC;  //Income by class
    int total;       //Total income
    
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
    cout<<fixed<<setprecision(6)<<showpoint;
    cout<<"Amount of income from class A = $"<<setw(7)<<incomeA<<endl;
    cout<<"Amount of income from class B = $"<<incomeB<<endl;
    cout<<"Amount of income from class C = $"<<incomeC<<endl;
    cout<<"Total amount of ticket sales = $"<<total<<endl;
    
    //Exit Stage Right!
    return 0;
}