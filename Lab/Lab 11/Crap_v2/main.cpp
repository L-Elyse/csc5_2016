/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on July 7, 2016, 1:00 PM
 * Purpose: Version 2 Craps
 */

//System Libraries
#include <iostream>  //Input/Output Stream Library
#include <ctime>     //Time for random seed
#include <cstdlib>   //Random number seed
#include <iomanip>   //Format Library
#include <cmath>     //Math Library
#include <fstream>   //File I/O
#include <string>    //String Object
using namespace std; //Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare variables, no doubles
    int nGames, nWins=0, nLose=0;
    
    //Input data
    do{
        cout<<"The Game of Craps"<<endl;
        cout<<"How many games to Play"<<endl;
        cin>>nGames;
    }while(nGames<0);
    
    //Process data
    for(int game=1;game<=nGames;game++){
        //Throw a pair of die
        char die1=rand()%6+1;
        char die2=rand()%6+1;
        char sum=die1+die2;
        //Determine Win or Loss
        switch(sum){
            case 7:
            case 11:nWins++;break;
            case 2:
            case 3:
            case 12:nLose++;break;
            default:{    
                //When to roll again
                bool rollAgn=true;
                while(rollAgn){
                    //Throw another set of dice
                    die1=rand()%6+1;
                    die2=rand()%6+1;
                    char sumAgn=die1+die2;
                    if(sum==sumAgn){
                        nWins++;
                        rollAgn=false;
                    }else if(sumAgn==7){
                        nLose++;
                        rollAgn=false;
                    }else rollAgn=true;
                }
            }
        }
    }
    
    //Output data
    cout<<"Number of Games = "<<nGames<<endl;
    cout<<"Number of Wins  = "<<nWins<<endl;
    cout<<"Number of Losses= "<<nLose<<endl;
    if(nWins>=nLose){
        cout<<"You are doing better than statistics";
        cout<<"determines is possible!!!"<<endl;
    }
    
    //Exit Stage Right!
    return 0;
}