/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on July 23, 2016, 7:00 PM
 * Purpose: War Card Game Enhancement
 */

//System Libraries
#include <iostream> //Input/Output Stream Library
#include <iomanip>  //Formatting Library
#include <ctime>    //Unique Seed Value Library
#include <cstdlib>  //Random Value Library
#include <string>   //String Library
#include <fstream>  //File I/O
#include <cmath>    //Math Library
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
int facdDwn(int &);
int menuOpt(unsigned int &);
int cardVal(char,int &);
void win(string, int);
void loss(string, int);
int warArry(int [],int,int &,int,int);
int sumArry(int [],int,int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the Random Number Seed 
    srand(static_cast<unsigned int>(time(0)));
    //Declare variables, no doubles
    string oppnent;      //Who you will be playing
    unsigned int choice; //User menu option
    char cchoice;        //User input representing card they want to play
    int number;          //Random number chosen set to present time
    int value;           //Value of each card
    const int MIN=2;     //Minimum value to choose from
    const int MAX=14;    //Maximum value to choose from
    int warcnt;          //Number of faced down cards before flipping in war
    int warnum,cwarnum;  //Card choice during war
    unsigned int times;  //for Loop counter
    unsigned int nwins=0,nlosses=0,nwars=0,ngames;
    int score=0,wrscore=0,cscore=0,cwscore=0;
    float pwins,plosses;
    string winner;
    ofstream out;
     
    //Open File & Enter Primary Input Data
    out.open("stats.dat");
    cout<<"The name of the game? WAR!"<<endl;
    cout<<"Give your opponent a name. You didn't think you were ";
    cout<<"playing against the computer now, did you?"<<endl;
    getline(cin,oppnent);
    
    //Establish Number of "Faced Down" Cards for the Game
    facdDwn(warcnt);
    
    //Process and Output the Data in the Loop
    do{
        //Get Menu
        menuOpt(choice);
        
        if(choice==1){
            cout<<"Please enter the number of your choice (2-9)"<<endl;
            cin>>cchoice;
            
            //Input Validation
            while(cchoice<'2'||cchoice>'9'){
                cout<<"Invalid entry! Please enter (2-9)"<<endl;
                cin>>cchoice;
            }
        }
        else if(choice==2){
            cout<<"Please enter T, J, Q, K, or A"<<endl;
            cin>>cchoice;
            
            //Input Validation
            while(cchoice!='a'&&cchoice!='A'&&cchoice!='k'&&cchoice!='K'&&
                    cchoice!='q'&&cchoice!='Q'&&cchoice!='j'&&cchoice!='J'&&
                    cchoice!='t'&&cchoice!='T'){
                cout<<"Invalid entry! Please enter one of the choices "
                        "above"<<endl;
                cin>>cchoice;
            }
        }
        
        //Process the card choice
        if(choice!=3){
            
            //Call Function & Return Value
            cardVal(cchoice,value);

            //Determine win, loss, or war
            number = (rand() % (MAX - MIN + 1)) + MIN;
            if(value>number){
                nwins+=1;
                score=score+value+number;
                cscore-=number;
                win(oppnent,number); //Function Call
            }
            else if(value<number){
                nlosses+=1;
                score-=value;
                cscore=cscore+value+number;
                loss(oppnent,number); //Function Call
            }
            else{ //----------------------------------------------------------------------------
                nwars+=1;
                //Declare Array Variables
                const int SIZE=warcnt;
                int war[SIZE];
                
                wrscore=warArry(war,SIZE,warnum,MIN,MAX);
                
                //Player's War Card
                cout<<"Now enter your war card"<<endl;
                cin>>warnum;
                
                //Input Validation    
                while(!(warnum)||warnum<MIN||warnum>MAX){ 
                    cin.clear();
                    cin.ignore();          
                    cout<<"Invalid input. Please type in an integer";
                    cout<<" between 2 and 14."<<endl;
                    cin>>warnum;
                }

                //Opponent's "Faced Down" Cards
                cwarnum = (rand() % (MAX - MIN + 1)) + MIN; 
                for(times=1;times<=warcnt;times++){
                    cwarnum = (rand() % (MAX - MIN + 1)) + MIN;
                    cwscore+=cwarnum;
                    cout<<oppnent<<"'s Card "<<times<<": "<<cwarnum<<endl;
                }

                //Opponent's War Card
                cout<<oppnent<<"'s war card: "<<cwarnum<<endl;

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
                        wrscore=warArry(war,SIZE,warnum,MIN,MAX);

                        //Player's War Card
                        cout<<"Now enter your war card"<<endl;
                        cin>>warnum;
                        
                        //Input Validation    
                        while(!(warnum)||warnum<MIN||warnum>MAX){ 
                            cin.clear();  //Used to stop infinite loop
                            cin.ignore();          
                            cout<<"Invalid input. Please type in an integer";
                            cout<<" between 2 and 14."<<endl;
                            cin>>warnum;
                        }

                        //Opponent's "Faced Down" Cards
                        cwarnum = (rand() % (MAX - MIN + 1)) + MIN; 
                        for(times=1;times<=warcnt;times++){
                            cwarnum = (rand() % (MAX - MIN + 1)) + MIN;
                            cwscore+=cwarnum;
                            cout<<oppnent<<"'s Card "<<times<<": ";
                            cout<<cwarnum<<endl;
                        }

                        //Computer's War Card
                        cout<<oppnent<<"'s war card: "<<cwarnum<<endl;

                        if(warnum>cwarnum){
                            nwins+=1;
                            score=score+value+number+wrscore+cwscore+warnum+
                                    cwarnum;
                            cscore=cscore-number-cwscore-cwarnum;
                            cout<<"You won the battle!"<<endl;
                        }
                        else if (warnum<cwarnum){
                            nlosses+=1;
                            score=score-value-warnum-wrscore;
                            cscore=cscore+value+number+cwscore+wrscore+
                                    cwarnum+warnum;
                            cout<<"You lost this battle."<<endl;
                        }
                    }
                }
            }

            //Game Stats
            cout<<endl;
            cout<<oppnent<<"'s score: "<<setw(4)<<cscore<<endl;
            cout<<"Your score:        "<<setw(4)<<score<<endl;
            cout<<"Point difference:  "<<setw(4)<<abs(score-cscore)<<endl;
            
            if(score<0){
                cout<<"Oh no! You're in the negative!"<<endl;
                cout<<"You need to score "<<abs(score)<<" points to get out ";
                cout<<"the red zone"<<endl;
            }
            cout<<endl;
            cout<<"Wins:   "<<setw(3)<<nwins<<endl;
            cout<<"Losses: "<<setw(3)<<nlosses<<endl;
            cout<<"Wars:   "<<setw(3)<<nwars<<endl;
        }
    }
    while(choice!=3);
    
    cout<<"Thank you for playing!"<<endl;
    
    //Finishing Stats - Output to a File
    out<<"Here are your Final Game Stats:"<<endl<<endl;
    out<<"Opponent: "<<oppnent<<endl;
    out<<"Wins:    "<<setw(4)<<nwins<<endl;
    out<<"Losses:  "<<setw(4)<<nlosses<<endl;
    out<<endl;
    out<<"Your final score: "<<setw(4)<<score<<endl;
    out<<oppnent<<"'s final score: "<<setw(4)<<cscore<<endl;
    
    //Determine Winner of Game
    if(score>cscore)
        winner="You!";
    else
        winner=oppnent;
    out<<"Winner:  "<<winner<<endl;
    
    //Calculate Number of Games
    ngames=nwins+nlosses;
    out<<"Total games played: "<<ngames<<endl;
    
    //Calculate Percentage of Wins and Losses
    pwins=static_cast<float>(nwins)/ngames;
    plosses=static_cast<float>(nlosses)/ngames;
    
    out<<fixed<<setprecision(1)<<showpoint;
    out<<"You won  "<<pwins*100<<"% of the hands you played"<<endl;
    out<<"You lost "<<plosses*100<<"% of the hands you played"<<endl;
         
    //Close File & Exit Stage Right!
    out.close();
    return 0;
    }

int sumArry(int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    return sum;
}

int warArry(int a[],int n,int &val,int min, int max){
    cout<<"War!!!"<<endl;
    cout<<"Please enter the integer value of the card you ";
    cout<<"would like to draw."<<endl;
    cout<<"Number cards are simply their own value, while T = 10,"
            " J = 11, Q = 12, K = 13, A = 14"<<endl;
    
    //Player's "Faced Down" Cards
    for(int i=0;i<n;i++){
        cout<<"Enter card "<<i+1<<endl;
        cin>>a[i];

        //Input Validation
        while(!(a[i])||a[i]<min||a[i]>max){ 
            cin.clear();  
            cin.ignore();          
            cout<<"Invalid input. Please type in an integer";
            cout<<" between 2 and 14."<<endl;
            cin>>a[i];
        }
        //Add Elements in Array
        val=sumArry(a,n);

    }return val;
}

void loss(string name,int number){
    cout<<"Sorry. You lost."<<endl;
    cout<<name<<"'s card:  "<<number<<endl;
    return;
}

void win(string name,int number){
    cout<<"You won!"<<endl;
    cout<<name<<"'s card:  "<<number<<endl;
    return;
}

int cardVal(char choice,int &number){
    switch(choice){ 
        case 'a':
        case 'A':number=14;break;
        case 'k':
        case 'K':number=13;break;
        case 'q':
        case 'Q':number=12;break;
        case 'j':
        case 'J':number=11;break;
        case 't':
        case 'T':number=10;break;
        case '9':
        case '8':
        case '7':
        case '6':
        case '5':
        case '4':
        case '3':
        case '2':number=(choice-48);break;
    }
    return number;
}

int menuOpt(unsigned int &option){
    cout<<endl;
    cout<<"What type of card would you like to play?"<<endl;
    cout<<"1. Number Card"<<endl;
    cout<<"2. Face Card (includes 10)"<<endl;
    cout<<"3. End game"<<endl<<endl;
    cin>>option;

    //Input Validation
    while(option<1||option>3){
        cout<<"Invalid entry! Please enter an option from the menu"<<endl;
        cin>>option;
    }
    return option;
}

int facdDwn(int &number){
    cout<<"How many cards do you want to put down before you flip one?"<<endl;
    cout<<"Please pick a number from 2-4"<<endl;
    cin>>number;
    
    //Input Validation
    while(number<2||number>4){
        cout<<"Error. Please enter 2,3, or 4"<<endl;
        cin>>number;
    } 
    return number;
}