/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on July 10, 2016, 4:30 PM
 * Purpose: Membership Fee Increase
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
    float member=2500;    //Membership per year
    const float MEM_FEE=0.04f; //Fee increase on membership
    int year;
    
    //Format Data
    cout<<fixed<<setprecision(2)<<showpoint;
    
    //Process Data and Loop   
    cout<<"Welcome to the Country Club!"<<endl;
    cout<<"Today you will pay $"<<member<<endl;
    cout<<"However, we intend to increase our rates by "<<MEM_FEE*100;
    cout<<"% for the next six years."<<endl;
    cout<<"Here is what you can expect to pay for the next six years:"<<endl;
    cout<<endl;
    
    for(year=1;year<=6;year++){
        member=(member*MEM_FEE)+member;
        
        cout<<"After year "<<year<<" -- ";
        cout<<"$ "<<member<<endl;
    }
        
    //Exit Stage Right!
    return 0;
}