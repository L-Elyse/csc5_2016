/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on June 28, 2016, 1:00 PM
 * Purpose: Calculating Grade using ternary operator
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
    unsigned int score;  //Input[0,100]
    char grade;  //Output [A,B,C,D,F]
    
    //Input data
    cout<<"Input the score [0,100] output will be the grade"<<endl;
    cin>>score;
    
    //Format the data
    grade=(score>=90)?'A':      //Ternary operator
          (score>=80)?'B':      //Ternary operator inside
          (score>=70)?'C':      //Ternary operator inside 
          (score>=60)?'D':'F';  //Ternary operator inside
    
    //Output data
    cout<<score<<" equates to a "<<grade<<" grade!"<<endl;
    
    
    //Exit Stage Right!
    return 0;
}