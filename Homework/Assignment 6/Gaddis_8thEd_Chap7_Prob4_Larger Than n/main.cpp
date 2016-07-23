/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on July 22, 2016, 10:10 PM
 * Purpose: Larger than a number
 */

//System Libraries
#include <iostream>//Input/Output Stream Library
#include <cstdlib>  //Random
#include <ctime>    //Time
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes
void array(int [],int,int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare variables, no doubles
    const int SIZE=10;
    int larger[SIZE];
    int choice;
    int MIN=1,MAX=10;
    
    //Input data
    cout<<"Enter any number between 1-50 and I will tell you what numbers";
    cout<<" in my array are bigger!"<<endl;
    cin>>choice;
    
    //Process data
    number = (rand() % (MAX - MIN + 1)) + MIN;
    array(larger,SIZE,choice);
    
    //Output data
    cout<<"Hello World"<<endl;
    
    //Exit Stage Right!
    return 0;
}

void array(int x[],int size,int number){
    for(int i=0;i<size;i++){
        x[i];
    }
    
}