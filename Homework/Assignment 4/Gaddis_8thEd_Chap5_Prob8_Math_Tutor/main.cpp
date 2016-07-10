/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on July 3, 2016, 8:00 PM
 * Purpose: Help Students with Math Homework (Modification)
 */

//System Libraries
#include <iostream> //Input/Output Stream Library
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
    unsigned int guess; //Input value 
    unsigned int sum;   //True answer to the addition problem
    const int MIN=100; //Minimum value to choose from
    const int MAX=999; //Maximum value to choose from
  
    
    //Process data
    srand(num1);
    srand(num2);
    num1 = (rand() % (MAX - MIN + 1) + MIN);
    num2 = (rand() % (MAX - MIN + 1) + MIN);
    sum = num1 + num2; 
    
    
    //Input data
    cout<<"This program helps you add two three-digit numbers together!"<<endl;
    cout<<"Try this addition: "<<endl;
    cout<<"  "<<num1<<endl;
    cout<<"+ "<<num2<<endl;
    cout<<"-----"<<endl;
    cin>>guess;
    
    
    //Conditional Statement
    if(guess==sum)
        cout<<"Congratulations! You got the correct answer!"<<endl;
    else
        cout<<"Sorry. The correct answer is "<<sum<<"."<<endl;
             
    
    //Exit Stage Right!
    return 0;
}