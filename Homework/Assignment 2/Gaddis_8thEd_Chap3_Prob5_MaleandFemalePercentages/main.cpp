/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on June 27, 2016, 9:35 PM
 * Purpose: Test Average
 */

//System Libraries
#include <iostream> //Input/Output Stream Library
#include <iomanip> //Format Library
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    float score1, score2, score3, score4, score5; //Test scores
    float average;
    
    
    //Input data
    cout<<"Please enter your first test score."<<endl;
    cin>>score1;
    cout<<"Please enter your second test score."<<endl;
    cin>>score2;
    cout<<"Please enter your third test score."<<endl;
    cin>>score3;
    cout<<"Please enter your fourth test score."<<endl;
    cin>>score4;
    cout<<"Please enter your fifth test score."<<endl;
    cin>>score5;
    
    //Process data
    average=(score1+score2+score3+score4+score5)/5;
    
    //Output data
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<"Your test average is = "<<average<<endl;
    
    //Exit Stage Right!
    return 0;
}