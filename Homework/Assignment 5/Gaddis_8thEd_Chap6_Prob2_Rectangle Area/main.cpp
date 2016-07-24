/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on July 20, 2016, 1:35 PM
 * Purpose: Calculate Rectangle Area
 */

//System Libraries
#include <iostream> //Input/Output Stream Library
#include <iomanip>  //Formatting Library
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes
float getLngt(float);
float getWdth(float);
float getArea(float,float,float);
void display(float,float,float);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    int length,width,area;
    
    //Input data
    
    //Output data
    cout<<fixed<<setprecision(1)<<showpoint;
    display(length,width,area);
    
    //Exit Stage Right!
    return 0;
}

void display(float l,float w,float a){
    cout<<"Area: "<<getArea(l,w,a);
    return;
}

float getArea(float l,float w,float a){
    a=getLngt(l)*getWdth(w);
    return a;
}

float getWdth(float w){
    cout<<"Please enter the width"<<endl;
    cin>>w;
    return w;
}

float getLngt(float l){
    cout<<"Please input the length"<<endl;
    cin>>l;
    return l;
}