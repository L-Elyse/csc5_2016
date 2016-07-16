/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on July 15, 2016, 9:30 PM
 * Purpose: War Card Game
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
    char choice;
    int nwins=0,nlosses=0,nwars=0;
    int number=time(0);  //Random numbers to be added together set to present time
    int warnum;          //Number of cards to throw before flipping in war
    const int MIN=1;     //Minimum value to choose from--TESTING VALUE ONLY--CHANGE!
    const int MAX=14;    //Maximum value to choose from--TESTING VALUE ONLY--CHANGE!
    
    //Input Data
    cout<<"The name of the game? WAR!"<<endl;
    cout<<"Pick a card the you would like to play"<<endl;
    cin>>choice;
    
    //Input Validation--will be taken care of with a switch!
//    if(choice<'1'||choice>'9'){
//        //Get Input Again!
//        cout<<"Please enter an integer between 1 and 20!"<<endl;
//        cin>>choice;
//    }
          
    //Set Random Number Seed 
    srand(number);
    number = (rand() % (MAX - MIN + 1) + MIN);
    
    //Processing Choice--loop here!
    if(choice>number){
        nwins+=1;
        cout<<"You won!"<<endl;
        }
    else if(choice<number){
        nlosses+=1;
        cout<<"Sorry. You lost."<<endl;
        }
    else{
        nwars+=1;
        cout<<"War!!! How many cards do you want to throw down ";
        cout<<"before you flip one?"<<endl;
        cin>>warnum;       
    }
    
    //Game Stats
    cout<<"Computer's card: "<<number<<endl;
    cout<<endl;
    cout<<"Wins:   "<<nwins<<endl;
    cout<<"Losses: "<<nlosses<<endl;
    cout<<"Wars:   "<<nwars<<endl;
         
    //Exit Stage Right!
    return 0;
}