/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on July 6, 2016, 1:40 PM
 * Purpose: Random Approximation or Stochastic Calculus
 */

//System Libraries
#include <iostream>//Input/Output Stream Library
#include <cmath>    //Math Library
#include <ctime>    //Time Library
#include <cstdlib> //Random Number Library
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants
const float PI=4*atan(1); 

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Initialize the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare variables, no doubles
    float apprxPI,nDarts,nInCirc;
    float maxRand=pow(2,31)-1;
    float max=-1, min=2;
    
    //Input data
    cout<<"How many darts to throw to approximate PI"<<endl;
    cin>>nDarts;
    
    //Process data
    for(int dart=1;dart<=nDarts;dart++){
        float x=rand()/maxRand;//[0,1]
        float y=rand()/maxRand;//[0,1]
        if(x*x+y*y<=1)nInCirc++;
        if(max<x)max=x;
        if(min>x)min=x;
        if(max<y)max=y;
        if(min>y)min=y;
    }
    apprxPI=4.0f*nInCirc/nDarts;
    
    //Output data
    cout<<"Max Random = "<<max<<" Min Random = "<<min<<endl;
    cout<<PI<<" approximated by "<<nDarts<<" darts = "<<apprxPI<<endl;
    
    //Exit Stage Right!
    return 0;
}