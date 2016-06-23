/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on June 23, 2016, 1:10 PM
 * Purpose: Amount of soda that will kill
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
    float msMass=35;//35 Grams is the mass of the mouse
    float msKill=5; //5 Grams of sweetener kill the mouse
    float hmMass=45400;//Grams or about 100 lb. person
    float msSoda=350;//350 Grams is the mass of soda can content
    float consin=1e-3;//1/10th of 1% concentration in soda of sweetener
    int nCans;//Number of cans to kill dieter
    
    //Input data
    
    //Process data
    nCans=hmMass*msKill/(msMass*msSoda*consin);
    
    //Output data
    cout<<"The number of cans that a dieter with mass = ";
    cout<<hmMass<<"(grams) may consume is = "<<nCans<<"(cans)";
    cout<<endl;
    
    //Exit Stage Right!
    return 0;
}