/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on July 10, 2016, 1:15 PM
 * Purpose: Help Students with Math Homework (Modification #2)
 */

//System Libraries
#include <iostream> //Input/Output Stream Library
#include <iomanip>  //Format Library
#include <string>   //Character Input Library
#include <cstdlib>  //Random Value Library
#include <ctime>    //Unique Seed Value Library
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    unsigned num1=time(0), num2=time(0);//Random numbers to be added together set to present time
    unsigned int choice; //User choice from menu
    float guess;     //Input value 
    float sum,       //True answer to the addition problem
          diff,      //True answer to the subtraction problem
          product,   //True answer to the multiplication problem
          quotient;  //True answer to the division probem
    const int MIN=1; //Minimum value to choose from
    const int MAX=999; //Maximum value to choose from
  
    
    //Set random number seed
    srand(num1);
    srand(num2);
    num1 = (rand() % (MAX - MIN + 1) + MIN);
    num2 = (rand() % (MAX - MIN + 1) + MIN);
    
    //Format Data
    cout<<showpoint;
    
    //Process the data
    do 
    {
        //Display the menu
        cout<<"Let's have some fun with math!"<<endl<<endl;
        cout<<"1. Addition"<<endl;
        cout<<"2. Subtraction"<<endl;
        cout<<"3. Multiplication"<<endl;
        cout<<"4. Division"<<endl;
        cout<<"5. Quit"<<endl<<endl;
        cout<<"Please select your choice"<<endl;
        cin>>choice;
        
        //Validate the input
        while(choice <1||choice>5){
            cout<<"I'm sorry you did not enter a valid option."<<endl;
            cout<<"Please input a number from the menu above"<<endl;
            cin>>choice;
        }
        
        //Process the choice
        if(choice != 5){
            switch(choice){
                case 1:{
                    cout<<"Try this addition: "<<endl;
                    cout<<"  "<<num1<<endl;
                    cout<<"+ "<<num2<<endl;
                    cout<<"-----"<<endl;
                    cin>>guess;
                    
                    sum=num1+num2;
                    
                    //Conditional Statement
                    if(guess==sum)
                        cout<<"Congratulations! You got the correct answer!"<<endl;
                    else
                        cout<<"Sorry. The correct answer is "<<sum<<"."<<endl;
                    break;
                }
                case 2:{
                    num1>num2;
                    cout<<"Try this subtraction: "<<endl;
                    cout<<"  "<<num1<<endl;
                    cout<<"- "<<num2<<endl;
                    cout<<"-----"<<endl;
                    cin>>guess;
                    
                    diff=num1-num2;
                    
                    //Conditional Statement
                    if(guess==diff)
                        cout<<"Congratulations! You got the correct answer!"<<endl;
                    else
                        cout<<"Sorry. The correct answer is "<<diff<<"."<<endl;
                    break;
                }
                case 3:{
                    cout<<"Try this multiplication: "<<endl;
                    cout<<"  "<<num1<<endl;
                    cout<<"x "<<num2<<endl;
                    cout<<"-----"<<endl;
                    cin>>guess;
                    
                    product=num1*num2;
                    
                    //Conditional Statement
                    if(guess==product)
                        cout<<"Congratulations! You got the correct answer!"<<endl;
                    else
                        cout<<"Sorry. The correct answer is "<<product<<"."<<endl;
                    break;
                }
                case 4:{
                    cout<<"Try this division: "<<endl;
                    cout<<"  "<<num1<<endl;
                    cout<<"/ "<<num2<<endl;
                    cout<<"-----"<<endl;
                    cin>>guess;
                    
                    quotient=num1/num2;
                    
                    //Conditional Statement
                    if(guess==quotient)
                        cout<<"Congratulations! You got the correct answer!"<<endl;
                    else
                        cout<<"Sorry. The correct answer is "<<quotient<<"."<<endl;
                    break;
                }
            }
        }
    } while(choice!=5);
    
    cout<<"Thanks! Come again!"<<endl;
    
            
    //Exit Stage Right!
    return 0;
}