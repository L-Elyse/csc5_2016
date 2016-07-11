/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on July 10, 2016, 11:15 PM
 * Purpose: Assignment 4 Menu
 */

//System Libraries
#include <iostream> //Input/Output Stream Library
#include <iomanip>  //Format Library
#include <ctime>    //Unique Seed Value Library
#include <cstdlib>  //Random Number Library
#include <string>   //Character Input Library
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    int choice;
    
    //Process the data
    do 
    {
        //Display the menu
        cout<<"Menu Program"<<endl;
        cout<<"This program contains 10 problems solved from Gaddis, ";
        cout<<"8th Edition, Chapter 5."<<endl;
        cout<<"Please choose which problem you would like to see solved"<<endl;
        cout<<"1. Sum of Numbers"<<endl;                          //Problem #1
        cout<<"2. Calories Burned"<<endl;                         //Problem #4
        cout<<"3. Membership Fees Increase"<<endl;                //Problem #5
        cout<<"4. Distance Traveled"<<endl;                       //Problem #6
        cout<<"5. Pennies for Pay"<<endl;                         //Problem #7
        cout<<"6. Math Tutor"<<endl;                              //Problem #8
        cout<<"7. Average Rainfall"<<endl;                        //Problem #10
        cout<<"8. Celsius to Fahrenheit Table"<<endl;             //Problem #12
        cout<<"9. Random Number Guessing Game"<<endl;             //Problem #20
        cout<<"10. Random Number Guessing Game Enhancement"<<endl;//Problem #21
        cout<<"11. Quit Program"<<endl;
        cin>>choice;
        
        //Validate the input
        while(choice <1||choice>11){
            cout<<"I'm sorry you did not enter a valid option."<<endl;
            cout<<"Please input a number from the menu above"<<endl;
            cin>>choice;
        }
        
        //Process the choice
        if(choice != 11){
            switch(choice){
                case 1:{
                    //Declare variables, no doubles
                    int number, sum;
                    int maximum; //User's input value

                    //Input Data
                    cout<<"Let's do a sum of numbers starting at 1."<<endl;
                    cout<<"Please enter an integer that you would like to use as a ";
                    cout<<"maximum value."<<endl;
                    cin>>maximum;

                    //Input Validation
                    while(maximum<1){
                        //Get Input Again!
                        cout<<"Please enter an integer larger than 1"<<endl;
                        cin>>maximum;
                    }

                    //Process Data and Loop        
                    for(number=1,sum=0;number<=maximum; number++){
                        sum += number;
                    }

                    //Output Data
                    cout<<"The sum of all the integers from 1 to "<<maximum<<" is "<<sum<<endl;
                    cout<<endl;
                    break;
                }
                case 2:{
                    //Declare variables, no doubles
                    float calpmin=3.6; //Calories burned per minute
                    int minutes;
                    float calburn; //Total calories burned after n minutes

                    //Process Data and Loop   
                    cout<<"This table shows how many calories you burn per minute:"<<endl;
                    cout<<"Minutes \t Calories Burned"<<endl;

                    for(minutes=5;minutes<=30;minutes+=5){
                        calburn =calpmin*minutes;

                        cout<<"  "<<setw(2)<<minutes<<"\t\t\t"<<setw(3)<<calburn<<endl;
                    }
                    cout<<endl;
                    break;
                }
                case 3:{
                    //Declare variables, no doubles
                    float member=2500;    //Membership per year
                    const float MEM_FEE=0.04f; //Fee increase on membership
                    int year;

                    //Format Data
                    cout<<fixed<<setprecision(2)<<showpoint;

                    //Process Data and Loop   
                    cout<<"Welcome to the Country Club!"<<endl;
                    cout<<"Today you will pay $"<<member<<endl;
                    cout<<"However, we intend to increase our rates by "<<MEM_FEE*100;
                    cout<<"% for the next six years."<<endl;
                    cout<<"Here is what you can expect to pay for the next six years:"<<endl;
                    cout<<endl;

                    for(year=1;year<=6;year++){
                        member=(member*MEM_FEE)+member;

                        cout<<"After year "<<year<<" -- ";
                        cout<<"$ "<<member<<endl;
                    }
                    cout<<endl;
                    break;
                }
                case 4:{
                    //Declare variables, no doubles
                    float speed, hours;    //User input data
                    float hour, distance;

                    //Input Data
                    cout<<"This program helps to calculate how far you have traveled."<<endl;
                    cout<<"What is the speed of the vehicle in mph?"<<endl;
                    cin>>speed;
                    cout<<"How many hours has it traveled?"<<endl;
                    cin>>hours;

                    //Input Validation
                    while(speed<0 || hours<1){
                        cout<<"Error. Please enter a positive number for speed and ";
                        cout<<"a number greater than 1 for hours"<<endl<<endl;
                        cout<<"What is the speed of the vehicle in mph?"<<endl;
                        cin>>speed;
                        cout<<"How many hours has it traveled?"<<endl;
                        cin>>hours;
                    }

                    //Process Data and Loop
                    cout<<endl;
                    cout<<"Distance Traveled Per Hour:"<<endl;
                    cout<<"---------------------------"<<endl;
                    cout<<"Hour \t Distance Traveled"<<endl;

                    for(hour=1;hour<=hours;hour++){
                        distance=hour*speed;

                        cout<<" "<<hour<<"\t\t"<<setw(4)<<distance<<endl;
                    }
                    cout<<endl;
                    break;
                }
                case 5:{
                    //Declare variables, no doubles
                    float pennies=0.01;
                    int totlday;
                    int daysWkd;
                    float salary=0.0f;  //Running Total Accumulator for Salary


                    //Input Data
                    cout<<"This program helps to calculate your salary if your "<<endl;
                    cout<<"pay doubled everyday starting with one penny on day 1."<<endl;
                    cout<<"How many days have you worked?"<<endl;
                    cin>>daysWkd;


                    //Input Validation
                    while(daysWkd<1){
                        cout<<"Error. Please enter a positive integer greater than one."<<endl;
                        cout<<"How many days have you worked?"<<endl;
                        cin>>daysWkd;
                    }

                    //Format Data
                    cout<<fixed<<setprecision(2)<<showpoint;

                    //Process Data and Loop
                    cout<<endl;
                    cout<<"Day \t Salary Per Day \t Total Salary"<<endl;
                    cout<<"---------------------------------------------"<<endl;

                    for(totlday=1;totlday<=daysWkd;totlday++,pennies*=2){

                        salary+=pennies;

                        //Output the data
                        cout<<" "<<setw(2)<<totlday<<"\t $"<<setw(10);
                        cout<<pennies<<"\t\t $"<<setw(10)<<salary<<endl;
                    }
                    cout<<endl;
                    break;
                }
                case 6:{
                    //Declare variables, no doubles
                    unsigned num1=time(0), num2=time(0);//Random numbers to be added together set to present time
                    unsigned int choice; //User choice from menu
                    float guess;     //Input value 
                    float sum,       //True answer to the addition problem
                          diff,      //True answer to the subtraction problem
                          product,   //True answer to the multiplication problem
                          quotient;  //True answer to the division probem
                    const int MIN1=1; //Minimum value of number 2
                    const int MAX1=499; //Maximum value to choose number 2
                    const int MIN2=500; //Minimum value of number 1
                    const int MAX2=999; //Maximum value of number 1


                    //Set random number seed
                    srand(num1);
                    srand(num2);
                    num1 = (rand() % (MAX2 - MIN2 + 1) + MIN2);
                    num2 = (rand() % (MAX1 - MIN1 + 1) + MIN1);


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
                                    cout<<"+ "<<setw(3)<<num2<<endl;
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
                                    cout<<"Try this subtraction: "<<endl;
                                    cout<<"  "<<num1<<endl;
                                    cout<<"- "<<setw(3)<<num2<<endl;
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
                                    cout<<"x "<<setw(3)<<num2<<endl;
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
                                    cout<<"/ "<<setw(3)<<num2<<endl;
                                    cout<<"-----"<<endl;
                                    cin>>guess;


                                    quotient=static_cast<float>(num1)/num2;

                                    //Format Output
                                    cout<<fixed<<setprecision(2)<<showpoint;

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
                    cout<<endl;
                    break;
                }
                case 7:{
                    //Declare variables, no doubles
                    float rainavg;  //Average Rainfall
                    float rainyrs;  //Rainfall per year
                    int nummon;     //Total number of months
                    float sumrain=0;  //Total inches of rainfall Accumulator
                    float inchmon;  //Amount of monthly rainfall in inches
                    int months;     //Total months in a year
                    int years;      //Number of years user desires to find average

                    //Input Data
                    cout<<"Let's calculate the average rainfall"<<endl;
                    cout<<"Please enter the number of years that you would like to measure"<<endl;
                    cin>>years;

                    //Input Validation
                    while(years<1){
                        //Get Input Again!
                        cout<<"Please enter an integer larger than 1"<<endl;
                        cin>>years;
                    }

                    //Format Data
                    cout<<fixed<<setprecision(1)<<showpoint;

                    //Process Data and Loop        
                    for(rainyrs=1;rainyrs<=years; rainyrs++){
                        for(months=1;months<=12;months++){
                            cout<<"How many inches of rainfall for month "<<months<<"?"<<endl;
                            cin>>inchmon;

                            //Input Validation
                            if(inchmon<0){
                                cout<<"Error. Please enter a number larger than 0"<<endl;
                                cin>>inchmon;
                            }
                            else

                            //Calculate total inches of rainfall
                            sumrain+=inchmon;
                        }

                        //Convert Years to Months
                        nummon=12*years;         

                        //Calculate Average Rainfall
                        rainavg=sumrain/nummon;
                    }

                    //Output Data
                    cout<<"Number of months                                 : "<<nummon<<endl;
                    cout<<"Total inches of rainfall                         : "<<setw(3)<<sumrain<<endl;
                    cout<<"Average rainfall per month for the entire period : "<<setw(4)<<rainavg<<endl;
                    cout<<endl;
                    break;
                }
                case 8:{
                    //Declare variables, no doubles
                    float F;  //Degrees Fahrenheit
                    float C;  //Degrees Celsius

                    //Format Data
                    cout<<fixed<<setprecision(1)<<showpoint;

                    //Process data and Loop
                        cout<<"This table shows the Fahrenheit conversions of the ";
                        cout<<"Celsius temperatures 0-20."<<endl<<endl;
                        cout<<"  Degrees Celsius \t Degrees Fahrenheit"<<endl;

                    for(C=0;C<=20;C++){
                        //Celsius to Fahrenheit Conversion
                        F=C*(9.0/5)+32;

                        cout<<"\t"<<setw(4)<<C<<"\t\t\t"<<F<<endl;
                    }
                    cout<<endl;
                    break;
                }
                case 9:{
                    //Declare variables, no doubles
                    int guess;
                    int number=time(0);  //Random numbers to be added together set to present time
                    const int MIN=1; //Minimum value to choose from
                    const int MAX=20; //Maximum value to choose from

                    //Input Data
                    cout<<"Let's play a game."<<endl;
                    cout<<"I'm thinking of a number between 1 and 20."<<endl;
                    cout<<"Can you guess what it is?"<<endl;
                    cin>>guess;

                    //Input Validation
                    if(guess<1||guess>20){
                        //Get Input Again!
                        cout<<"Please enter an integer between 1 and 20!"<<endl;
                        cin>>guess;
                    }

                    //Process Data and Loop 
                    srand(number);
                    number = (rand() % (MAX - MIN + 1) + MIN);

                    while(guess != number){
                        if(guess>number){
                           cout<<"Too high, try again."<<endl;
                           cin>>guess;
                        }else{
                            cout<<"Too low, try again."<<endl;
                           cin>>guess; 
                        }
                    }

                    //For a correct guess
                    cout<<"Congratulations!! You got it."<<endl;
                    cout<<endl;
                    break;
                }
                case 10:{
                    //Declare variables, no doubles
                    int guess;
                    int nguess;
                    int number=time(0);  //Random numbers to be added together set to present time
                    const int MIN=1; //Minimum value to choose from
                    const int MAX=20; //Maximum value to choose from

                    //Input Data
                    cout<<"Let's play a game."<<endl;
                    cout<<"I'm thinking of a number between 1 and 20."<<endl;
                    cout<<"Can you guess what it is?"<<endl;
                    cin>>guess;

                    //Input Validation
                    if(guess<1||guess>20){
                        //Get Input Again!
                        cout<<"Please enter an integer between 1 and 20!"<<endl;
                        cin>>guess;
                    }

                    //Process Data and Loop 
                    srand(number);
                    number = (rand() % (MAX - MIN + 1) + MIN);

                    for(nguess=1;guess != number;nguess+=1){
                        if(guess>number){
                           cout<<"Too high, try again."<<endl;
                           cin>>guess;
                        }else{
                            cout<<"Too low, try again."<<endl;
                           cin>>guess; 
                        }
                    }

                    cout<<"Congratulations!! You got it."<<endl;
                    cout<<"It only took you "<<nguess<<" tries!"<<endl;
                    cout<<endl;
                    break;
                }
            }
        }
    } while(choice!=11);
    
    cout<<"Thanks! Come again!"<<endl;
    
            
    //Exit Stage Right!
    return 0;
}