/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on July 10, 2016, 8:55 PM
 * Purpose: Random Number Guessing Game (Enhancement)
 */

//System Libraries
#include <iostream> //Input/Output Stream Library
#include <ctime>    //Unique Seed Value Library
#include <cstdlib>  //Random Value Library
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    int guess;
    int nguess;
    int number=time(0);  //Random numbers to be added together set to present time
    const int MIN=1; //Minimum value to choose from
    const int MAX=20; //Maximum value to choose from
    
    //Input Data
    cout<<"Let's play a game."<<endl;
    cout<<"I'm thinking of a number between 1 and 20."<<endl;
    cout<<"Can you guess what it is?"<<endl;
    cin>>guess;
    
    //Input Validation
    if(guess<1||guess>20){
        //Get Input Again!
        cout<<"Please enter an integer between 1 and 20!"<<endl;
        cin>>guess;
    }
          
    //Process Data and Loop 
    srand(number);
    number = (rand() % (MAX - MIN + 1) + MIN);
    
    for(nguess=1;guess != number;nguess+=1){
        if(guess>number){
           cout<<"Too high, try again."<<endl;
           cin>>guess;
        }else{
            cout<<"Too low, try again."<<endl;
           cin>>guess; 
        }
    }
    
    cout<<"Congratulations!! You got it."<<endl;
    cout<<"It only took you "<<nguess<<" tries!"<<endl;
         
    //Exit Stage Right!
    return 0;
}