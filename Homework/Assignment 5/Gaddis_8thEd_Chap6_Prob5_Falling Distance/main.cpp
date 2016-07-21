/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on July 21, 2016, 1:20 PM
 * Purpose: Calculate Falling Distance
 */

//System Libraries
#include <iostream> //Input/Output Stream Library
#include <iomanip>  //Formatting Library
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants
float GRAVITY=9.8f;

//Function Prototypes
float fallDis(float);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    int seconds;    
        
    //Process & Output Data
    cout<<"Distance of a fallen object:"<<endl;
    cout<<fixed<<setprecision(1)<<showpoint;
    for(seconds=1;seconds<=10;seconds++){
        fallDis(seconds);
        cout<<"After "<<setw(2)<<seconds<<" second :";
        cout<<setw(6)<<fallDis(seconds)<<" m."<<endl;
    }
    
    //Exit Stage Right!
    return 0;
}

float fallDis(float time){
    //Declare variables
    float distnce;
    
    //Process
    distnce=0.5f*GRAVITY*time*time;
    return distnce;
}