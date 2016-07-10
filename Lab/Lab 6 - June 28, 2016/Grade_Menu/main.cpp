/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on June 28, 2016, 1:27 PM
 * Purpose: Menu with four different techniques to determine grade
 */

//System Libraries
#include <iostream>//Input/Output Stream Library
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    char choice;
    
    //Input data
    cout<<"Menu Program"<<endl;
    cout<<"Choose how to determine your grade"<<endl;
    cout<<"Type 1 for switch"<<endl;
    cout<<"Type 2 for ternary operator"<<endl;
    cout<<"Type 3 for independent if's"<<endl;
    cout<<"Type 4 for dependent if's"<<endl;
    cin>>choice;
    
    //Process data
    switch(choice){
        case '1':{
            //Declare variables, no doubles
            unsigned int score;  //Input[0,100]
            char grade;  //Output [A,B,C,D,F]

            //Input data
            cout<<"Input the score [0,100] output will be the grade"<<endl;
            cin>>score;

            //Process the data
            switch(score/10){           //This is a trick!
                case 11:
                case 10:
                case  9:grade='A';break;
                case  8:grade='B';break;
                case  7:grade='C';break;
                case  6:grade='D';break;
                default:grade='F';
            }

            //Output data
            cout<<score<<" equates to a "<<grade<<" grade!"<<endl;
            //Exit the switch
            break;
        }
        case '2':{
            //Declare variables, no doubles
            unsigned int score;  //Input[0,100]
            char grade;  //Output [A,B,C,D,F]

            //Input data
            cout<<"Input the score [0,100] output will be the grade"<<endl;
            cin>>score;

            //Format the data
            grade=(score>=90)?'A':      //Ternary operator
                  (score>=80)?'B':      //Ternary operator inside
                  (score>=70)?'C':      //Ternary operator inside 
                  (score>=60)?'D':'F';  //Ternary operator inside

            //Output data
            cout<<score<<" equates to a "<<grade<<" grade!"<<endl;
            //Exit the switch
            break;
        }
        case '3':{
            //Declare variables, no doubles
            unsigned int score;  //Input[0,100]
            char grade;  //Output [A,B,C,D,F]

            //Input data
            cout<<"Input the score [0,100] output will be the grade"<<endl;
            cin>>score;

            //Process the data
            grade='F';//Defaulted Value
            if(score<=120&&score>=90)grade='A';
            if(score<90&&score>=80)  grade='B';
            if(score<80&&score>=70)  grade='C';
            if(score<70&&score>=60)  grade='D';

            //Output data
            cout<<score<<" equates to a "<<grade<<" grade!"<<endl;
            //Exit the switch
            break;
        }
        case '4': {
            //Declare variables, no doubles
            unsigned int score;  //Input[0,100]
            char grade;  //Output [A,B,C,D,F]

            //Input data
            cout<<"Input the score [0,100] output will be the grade"<<endl;
            cin>>score;

            //Process data
            if      (score>=90)grade='A';
            else if (score>=80)grade='B';
            else if (score>=70)grade='C';
            else if (score>=60)grade='D';
            else               grade='F';

            //Output data
            cout<<score<<" equates to a "<<grade<<" grade!"<<endl;
            //Exit the switch
            break;
        }
        default:cout<<"Not option in menu"<<endl;
    }
    
    //Output data
    
    //Exit Stage Right!
    return 0;
}