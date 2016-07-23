/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on July 23, 2016, 12:55 AM
 * Purpose: Lottery Simulation
 */

//System Libraries
#include <iostream> //Input/Output Stream Library
#include <cstdlib>  //Random
#include <ctime>    //Time
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables, no doubles
    const int SIZE=5;
    int lottery[SIZE];
    int user[SIZE];
    int match=0;
    int index,number;
    const int MIN=0,MAX=9;
    
    //Input data
    cout<<"This program will simulate you playing the lottery"<<endl;
    cout<<"I will ask you to enter 5 different numbers"<<endl;
    for(index=0;index<SIZE;index++){
        cout<<"Number "<<index+1<<" : ";
        cin>>user[index];
    }
    cout<<endl;
    
    //Process data
    cout<<"Lottery Numbers: ";
    //Computer Fill Array
    for(index=0;index<SIZE;index++){
        number = (rand() % (MAX - MIN + 1)) + MIN;
        lottery[index]=number;
        cout<<lottery[index]<<" ";
    }
    
    //Compare Arrays
    for(index=0;index<SIZE;index++){
        if(lottery[index]==user[index])
            match++;
    }
    
    //Output data
    cout<<endl;
    cout<<"Total number of matching numbers: "<<match<<endl;
    if(match==5)
        cout<<"Congratulations! You just won the lottery!!"<<endl;
    
    //Exit Stage Right!
    return 0;
}