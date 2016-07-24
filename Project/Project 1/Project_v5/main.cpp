/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on July 16, 2016, 4:45 PM
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
    char choice;         //User input representing card they want to play
    int nwins=0,nlosses=0,nwars=0;
    int number=time(0);  //Random numbers set to present time
    int value;           //Value of each card
    int warcnt;          //Number of cards to throw before flipping one in war
    int warnum;          //Card choice during war
    int times;
    int compwar=time(0);
    int score=0;
    const int MIN=2;     //Minimum value to choose from
    const int MAX=14;    //Maximum value to choose from
    
    
    //Input Data
    cout<<"The name of the game? WAR!"<<endl;
    cout<<"How many cards do you want to throw down before you flip one?"<<endl;
    cin>>warcnt;
    
    do{
        cout<<endl;
        cout<<"Pick a card the you would like to play"<<endl;
        cin>>choice;
 
        //Set the Random Number Seed 
        srand(number);
        number = (rand() % (MAX - MIN + 1) + MIN);

        //Process the card choice
        switch(choice){ 
            case 'a':
            case 'A':value=14;break;
            case 'k':
            case 'K':value=13;break;
            case 'q':
            case 'Q':value=12;break;
            case 'j':
            case 'J':value=11;break;
            case 't':
            case 'T':value=10;break;
            case '9':
            case '8':
            case '7':
            case '6':
            case '5':
            case '4':
            case '3':
            case '2':value=(choice-48);break;
        }

        //Determine win, loss, or war
        if(value>number){
            nwins+=1;
            score=score+value+number;
            cout<<"You won!"<<endl;
            }
        else if(value<number){
            nlosses+=1;
            score-=value;
            cout<<"Sorry. You lost."<<endl;
            }
        else{
            //War!
            nwars+=1;
            cout<<"War!!! Pick your card!";
            cin>>warnum;
            
            //Set Another Random Number Seed
            srand(compwar);
            compwar = (rand() % (MAX - MIN + 1) + MIN);
            
            for(times=1;times<=warcnt;times++){
                srand(compwar);
                compwar = (rand() % (MAX - MIN + 1) + MIN);
                cout<<"Card "<<times<<": "<<compwar<<endl;
            }

            cout<<"Computer's war card: "<<compwar<<endl;
        }
        
                
        //Game Stats
        cout<<"Computer's card: "<<number<<endl;
        cout<<"Your score: "<<score<<endl;
        cout<<endl;
        cout<<"Wins:   "<<nwins<<endl;
        cout<<"Losses: "<<nlosses<<endl;
        cout<<"Wars:   "<<nwars<<endl;
    }
    while(choice>='2'||choice<='9'||choice=='a'||choice=='A'||choice=='k'||
            choice=='K'||choice=='q'||choice=='Q'||choice=='j'||choice=='J'||
            choice=='t'||choice=='T');
    
         
    //Exit Stage Right!
    return 0;
}