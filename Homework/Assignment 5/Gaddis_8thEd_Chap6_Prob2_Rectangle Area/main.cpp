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

void display(float length,float width,float area){
    cout<<"Area: "<<getArea(length,width,area);
    return;
}

float getArea(float length,float width,float area){
    area=getLngt(length)*getWdth(width);
    return area;
}

float getWdth(float width){
    cout<<"Please enter the width"<<endl;
    cin>>width;
    return width;
}

float getLngt(float length){
    cout<<"Please input the length"<<endl;
    cin>>length;
    return length;
}