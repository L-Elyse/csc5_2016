/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on June 27, 2016, 11:33 PM
 * Purpose: Male & Female Percentages in a class
 */

//System Libraries
#include <iostream> //Input/Output Stream Library
#include <iomanip>  //Format Library
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    float males, females; //Number of males and females in the class
    float total;          //Total students in the class
    float mperc, fperc;   //Percent representation of males and females
    
    //Input data
    cout<<"How many males are in your class?"<<endl;
    cin>>males;
    cout<<"How many females are in your class?"<<endl;
    cin>>females;
    
    //Process data
    total=males+females;
    mperc=males/total*100;
    fperc=females/total*100;
    
    //Output data
    cout<<setprecision(2);
    cout<<"Total percentage of males in the class   = "<<mperc<<"%"<<endl;
    cout<<"Total percentage of females in the class = "<<fperc<<"%"<<endl;
    
    //Exit Stage Right!
    return 0;
}