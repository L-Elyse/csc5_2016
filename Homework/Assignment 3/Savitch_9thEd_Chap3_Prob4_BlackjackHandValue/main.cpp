/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on June 30, 2016, 1:45 PM
 * Purpose: Blackjack Hand Value
 */

//System Libraries
#include <iostream> //Input/Output Stream Library
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    char card;
    int value=0, excess=0;
    
    //Input data for the first card
    cout<<"Input a card A,T,J,Q,K,2-9"<<endl;
    cin>>card;
        
    //Evaluate the first card
    switch(card){
        case 'K':
        case 'Q':
        case 'J':
        case 'T':value+=10;break;
        case '9':
        case '8':
        case '7':
        case '6':
        case '5':
        case '4':
        case '3':
        case '2':value+=(card-48);break;
        case 'A':value+=11;excess=10;
    }
    
    //Output the value
    cout<<"The value of the hand at this point = "<<value<<endl;
    
    //Input data for the second card
    cout<<"Input a card A,T,J,Q,K,2-9"<<endl;
    cin>>card;
        
    //Evaluate the second card
    switch(card){
        case 'K':
        case 'Q':
        case 'J':
        case 'T':value+=10;break;
        case '9':
        case '8':
        case '7':
        case '6':
        case '5':
        case '4':
        case '3':
        case '2':value+=(card-48);break;
        case 'A':value+=11;excess=10;
    }
    if(value>21)value-=excess;
     
    //Output the value
    cout<<"The value of the hand at this point = "<<value<<endl;
    
    //Input data for the third card
    cout<<"Input a card A,T,J,Q,K,2-9"<<endl;
    cin>>card;
        
    //Evaluate the third card
    switch(card){
        case 'K':
        case 'Q':
        case 'J':
        case 'T':value+=10;break;
        case '9':
        case '8':
        case '7':
        case '6':
        case '5':
        case '4':
        case '3':
        case '2':value+=(card-48);break;
        case 'A':value+=11;excess=10;
    }
    if(value>21)value-=excess;
     
    //Output the value
    cout<<"The value of the hand at this point = "<<value<<endl;
    
    //Exit Stage Right!
    return 0;
}