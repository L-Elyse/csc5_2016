/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on July 21, 2016, 12:40 PM
 * Purpose: Coin Toss Game
 */

//System Libraries
#include <iostream> //Input/Output Stream Library
#include <cstdlib>  //Random Number
#include <ctime>    //Time
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes
void cnToss(int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    int times;
    
    //Input data
    cout<<"How many times would you like to flip a coin?"<<endl;
    cin>>times;            
    
    //Process and Output Data
    cout<<endl;
    cout<<"Your results are: "<<endl;
    cnToss(times);
    
    //Exit Stage Right!
    return 0;
}

void cnToss(int loops){
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int times,number;
    const int MIN=1;     //Minimum value to choose from
    const int MAX=2;    //Maximum value to choose from
    
    //Process & Output Data
    for(times=1;times<=loops;times++){
        number = (rand() % (MAX - MIN + 1)) + MIN;
        cout<<"Flip "<<times<<": ";
        if(number==1)cout<<"Heads"<<endl;
        else if(number==2)cout<<"Tails"<<endl;
    }
    return;    
}