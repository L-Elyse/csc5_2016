/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on July 16, 2016, 8:45 PM
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
    //Set the Random Number Seed 
    srand(static_cast<unsigned int>(time(0)));
    //Declare variables, no doubles
    char choice;         //User input representing card they want to play
    int nwins=0,nlosses=0,nwars=0;
    int number;  //Random numbers set to present time
    int value;           //Value of each card
    int warcnt;          //Number of cards to throw before flipping one in war
    int warnum,cwarnum;   //Card choice during war
    int times;
    int score=0,wrscore=0,cscore=0,cwscore=0;
    const int MIN=2;     //Minimum value to choose from
    const int MAX=14;    //Maximum value to choose from
    
    
    //Input Data
    cout<<"The name of the game? WAR!"<<endl;
    cout<<"How many cards do you want to throw down before you flip one?"<<endl;
    cin>>warcnt;
    
    //Process and Output the Data
    do{
        cout<<endl;
        cout<<"Pick a card the you would like to play"<<endl;
        cin>>choice;
        
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
        number = (rand() % (MAX - MIN + 1)) + MIN;
        if(value>number){
            nwins+=1;
            score=score+value+number;
            cscore-=number;
            cout<<"You won!"<<endl;
            }
        else if(value<number){
            nlosses+=1;
            score-=value;
            cscore=cscore+value+number;
            cout<<"Sorry. You lost."<<endl;
            }
        else{
            nwars+=1;
            cout<<"War!!!"<<endl;
            
            //Player's "Faced Down" Cards
            for(times=1;times<=warcnt;times++){
                cout<<"Enter card "<<times<<endl;
                cin>>warnum;
                wrscore+=warnum;
            }
            
            //Player's War Card
            cout<<"Now enter your war card"<<endl;
            cin>>warnum;
            
            //Computer's "Faced Down" Cards
            cwarnum = (rand() % (MAX - MIN + 1)) + MIN; 
            for(times=1;times<=warcnt;times++){
                cwarnum = (rand() % (MAX - MIN + 1)) + MIN;
                cwscore+=cwarnum;
                cout<<"Computer's Card "<<times<<": "<<cwarnum<<endl;
            }
            
            //Computer's War Card
            cout<<"Computer's war card: "<<cwarnum<<endl;
            
            if(warnum>cwarnum){
                nwins+=1;
                score=score+value+number+wrscore+cwscore+warnum+cwarnum;
                cscore=cscore-number-cwscore-cwarnum;
                cout<<"You won the battle!"<<endl;
            }
            else if (warnum<cwarnum){
                nlosses+=1;
                score=score-value-warnum-wrscore;
                cscore=cscore+value+number+cwscore+wrscore+cwarnum+warnum;
                cout<<"You lost this battle."<<endl;
            }
            else{
                while(warnum==cwarnum){  //Must War Again!
                    nwars+=1;
                    cout<<"War!!!"<<endl;

                    //Player's "Faced Down" Cards
                    for(times=1;times<=warcnt;times++){
                        cout<<"Enter card "<<times<<endl;
                        cin>>warnum;
                        wrscore+=warnum;
                    }

                    //Player's War Card
                    cout<<"Now enter your war card"<<endl;
                    cin>>warnum;

                    //Computer's "Faced Down" Cards
                    cwarnum = (rand() % (MAX - MIN + 1)) + MIN; 
                    for(times=1;times<=warcnt;times++){
                        cwarnum = (rand() % (MAX - MIN + 1)) + MIN;
                        cwscore+=cwarnum;
                        cout<<"Computer's Card "<<times<<": "<<cwarnum<<endl;
                    }

                    //Computer's War Card
                    cout<<"Computer's war card: "<<cwarnum<<endl;

                    if(warnum>cwarnum){
                        nwins+=1;
                        score=score+value+number+wrscore+cwscore+warnum+cwarnum;
                        cscore=cscore-number-cwscore-cwarnum;
                        cout<<"You won the battle!"<<endl;
                    }
                    else if (warnum<cwarnum){
                        nlosses+=1;
                        score=score-value-warnum-wrscore;
                        cscore=cscore+value+number+cwscore+wrscore+cwarnum+warnum;
                        cout<<"You lost this battle."<<endl;
                    }
                }
            }
        }
            
        //Game Stats
        cout<<endl;
        cout<<"Computer's score: "<<cscore<<endl;
        cout<<"Your score:       "<<score<<endl;
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