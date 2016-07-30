/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on July 24, 2016, 11:15 PM
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

//Global Constants--ONLY for 2D Array
const int COL=1;

//Function Prototypes
int facdDwn(int &);
unsigned int menuOpt(unsigned int &);
int pckCard(int, char &);
int cardVal(char,int &);
void win();
void loss();
int warArry(int [],int,int &,int,int);
int sumArry(int [],int,int);
int warCard(int &,int,int);
int cwrArry(int [],int,int &,int,int,string);
int cwrCard(int &,int,int,string);
void stats(string,int,int,int,int,int);
void ldrbrd(const int [][COL],int);
void sortBrd(int [][COL],int);
void readldr(char [],int [][COL],int);
void prntldr(int [][COL],int);
int  binSrch(int [][COL],int,int);

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
        //Get Menu & Select Card
        menuOpt(choice);
        pckCard(choice,cchoice);
        
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
                win();
                cout<<oppnent<<"'s card:  "<<number<<endl;
            }
            else if(value<number){
                nlosses+=1;
                score-=value;
                cscore=cscore+value+number;
                loss();
                cout<<oppnent<<"'s card:  "<<number<<endl;
            }
            else{ 
                nwars+=1;
                //Declare Array Variables
                const int SIZE=warcnt;
                int war[SIZE];
                int cwar[SIZE];
                
                //Player Process
                wrscore=warArry(war,SIZE,warnum,MIN,MAX);
                warCard(warnum,MIN,MAX);  
                
                //Comp Process
                cwscore=cwrArry(cwar,SIZE,cwarnum,MIN,MAX,oppnent);
                cwrCard(cwarnum,MIN,MAX,oppnent);

                //Compare Cards
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
                        warCard(warnum,MIN,MAX);
                        
                        cwscore=cwrArry(cwar,SIZE,cwarnum,MIN,MAX,oppnent);
                        cwrCard(cwarnum,MIN,MAX,oppnent);

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
            stats(oppnent,score,cscore,nwins,nlosses,nwars);
        }
    }
    while(choice!=3);
    
    //End Game
    cout<<"Thank you for playing!"<<endl<<endl;
    
    //Show Leaderboard to Screen
    const int ROW=5;
    int board[ROW][COL];
    
    cout<<"Warrior Leaderboard"<<endl;
    readldr("leaderboard.dat",board,ROW);
    sortBrd(board,ROW);
    prntldr(board,ROW);
    
    //Finishing Stats - Output to a File
    out<<"Here are your Final Game Stats:"<<endl<<endl;
    out<<"Opponent: "<<oppnent<<endl;
    out<<"Wins:    "<<setw(4)<<nwins<<endl;
    out<<"Losses:  "<<setw(4)<<nlosses<<endl;
    out<<endl;
    out<<"Your final score: "<<setw(4)<<score<<endl;
    out<<oppnent<<"'s final score: "<<setw(4)<<cscore<<endl;
    
    //Determine Winner of Game
    if(score>cscore){
        winner="You!";
        int bindx=binSrch(board,ROW,score);
        if(bindx==-1)cout<<"However, you don't qualify for a top score"<<endl;
        else cout<<"Congratulations! You qualify for a top score!"<<endl;
    }
    else
        winner=oppnent;
    out<<"Winner:  "<<winner<<endl;
    
    //Calculate Number of Games
    ngames=nwins+nlosses;
    out<<"Total games played: "<<ngames<<endl;
    
    //Calculate Percentage of Wins and Losses
    pwins=static_cast<float>(nwins)/ngames;
    plosses=static_cast<float>(nlosses)/ngames;
    
    //Output Percentage
    out<<fixed<<setprecision(1)<<showpoint;
    out<<"You won  "<<pwins*100<<"% of the hands you played"<<endl;
    out<<"You lost "<<plosses*100<<"% of the hands you played"<<endl;
         
    //Close File & Exit Stage Right!
    out.close();
    return 0;
    }

int  binSrch(int a[][COL],int n,int val){
    //Declare variables
    int beg=0,end=n-1;
    //Loop until we find
    do{
        int middle=(end+beg)/2;
        if(a[middle][0]==val)return middle;
        else if(a[middle][0]<val)beg=middle+1;
        else end=middle-1;
    }while(end>=beg);
    return -1;
}

void sortBrd(int a[][COL],int r){
    //Declare Variables
    bool swap;
    int temp;
    //Sort
    do{
        swap=false;
        for(int i=0;i<r-1;i++){
            for(int j=0;j<COL;j++){
                if(a[i][j]<a[i+1][j]){
                    temp=a[i][j];
                    a[i][j]=a[i+1][j];
                    a[i+1][j]=temp;
                    swap=true;
                }
            }
        }
    }
    while(swap);
}

void readldr(char fn[],int a[][COL],int r){
    //Declare the file
    ifstream in;
    //Open the file
    in.open(fn);
    //Send the array to the file
    for(int i=0;i<r;i++){
        in>>a[i][0];
    }
    //Close the file
    in.close();
}
void prntldr(int a[][COL],int r){
    for(int i=0;i<r;i++){
        cout<<a[i][0]<<endl;
    }
}

void ldrbrd(const int a[][COL],int r){
    for(int i=0;i<r;i++){
        for(int j=0;j<COL;j++){
            cout<<"Player "<<i+1<<" : "<<setw(4)<<a[i][j]<<endl;
        }
    }  
}

void stats(string name,int x,int y,int win,int loss,int war){
    cout<<endl;
    cout<<name<<"'s score: "<<setw(4)<<y<<endl;
    cout<<"Your score:        "<<setw(4)<<x<<endl;
    cout<<"Point difference:  "<<setw(4)<<abs(x-y)<<endl;

    if(x<0){
        cout<<"Oh no! You're in the negative!"<<endl;
        cout<<"You need to score "<<abs(x)<<" points to get out ";
        cout<<"the red zone"<<endl;
    }
    cout<<endl;
    cout<<"Wins:   "<<setw(3)<<win<<endl;
    cout<<"Losses: "<<setw(3)<<loss<<endl;
    cout<<"Wars:   "<<setw(3)<<war<<endl;
}

int cwrCard(int &number,int min,int max,string name){
    //Opponent's War Card
    number = (rand() % (max - min + 1)) + min;
    cout<<name<<"'s war card: "<<number<<endl;
}

int warCard(int &number,int min, int max){
    //Player's War Card
    cout<<"Now enter your war card"<<endl;
    cin>>number;

    //Input Validation    
    while(!(number)||number<min||number>max){ 
        cin.clear();
        cin.ignore();          
        cout<<"Invalid input. Please type in an integer";
        cout<<" between 2 and 14."<<endl;
        cin>>number;
    }
    return number;
}

int sumArry(int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    return sum;
}

int cwrArry(int a[],int n,int &val,int min,int max,string name){
    //Opponent's "Faced Down" Cards
    cout<<name<<"'s 'Faced Down' Cards: ";
    for(int i=0;i<n;i++){
        a[i] = (rand() % (max - min + 1)) + min;
        cout<<a[i]<<" ";
    }
    cout<<endl;
    val=sumArry(a,n);
    return val;
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

void loss(){
    cout<<"Sorry. You lost."<<endl;
    return;
}

void win(){
    cout<<"You won!"<<endl;
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

int pckCard(int menu, char &card){
    if(menu==1){
        cout<<"Please enter the number of your choice (2-9)"<<endl;
        cin>>card;

        //Input Validation
        while(card<'2'||card>'9'){
            cout<<"Invalid entry! Please enter (2-9)"<<endl;
            cin>>card;
        }
    }
    else if(menu==2){
        cout<<"Please enter T, J, Q, K, or A"<<endl;
        cin>>card;

        //Input Validation
        while(card!='a'&&card!='A'&&card!='k'&&card!='K'&&
                card!='q'&&card!='Q'&&card!='j'&&card!='J'&&
                card!='t'&&card!='T'){
            cout<<"Invalid entry! Please enter one of the choices "
                    "above"<<endl;
            cin>>card;
        }
    }
    return card;
}

unsigned int menuOpt(unsigned int &option){
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