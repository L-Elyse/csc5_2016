/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on July 13, 2016, 12:18 PM
 * Purpose: Rock Paper Scissors_v1
 */

//System Libraries
#include <iostream>//Input/Output Stream Library
#include <cstdlib>  //Random and Seed
#include <ctime>    //Time
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables, no doubles
    char player,compter;
    int win=0,loss=0,tie=0;
    
    //Play until user wants to stop
    do{
    //Input Data
        cout<<"RPS Game, what is your move? R or P or S?"<<endl;
        cin>>player;
    
    //Process the Data
        do{
            compter=rand()%4+80;//[P,Q,R,S]
        }while(compter=='Q');
        cout<<"Player = "<<player<<" : Computer = "<<compter<<endl;
        switch(player){
            case 'P':{
                if(compter=='P')cout<<"Ties so far = "<<++tie<<endl;
                else if (compter=='R')cout<<"Win so far = "<<++win<<endl;
                else cout<<"Loss so far = "<<++loss<<endl;
                break;
            }
            case 'R':{
                if(compter=='P')cout<<"Loss so far = "<<++loss<<endl;
                else if (compter=='R')cout<<"Ties so far = "<<++tie<<endl;
                else cout<<"Win so far = "<<++win<<endl;
                break;
            }
            case 'S':{
                if(compter=='P')cout<<"Win so far = "<<++win<<endl;
                else if (compter=='R')cout<<"Loss so far = "<<++loss<<endl;
                else cout<<"Ties so far = "<<++tie<<endl;
                break;
            }
            default: cout<<"You are Quitting with "<<player<<endl;
        }
    
    //Output the processed Data
    }while(player=='P'||player=='R'||player=='S');
    cout<<"Total Wins = "<<win<<endl;
    cout<<"Total Loss = "<<loss<<endl;
    cout<<"Total Ties = "<<tie<<endl;
        
    //Exit Stage Right!
    return 0;
}