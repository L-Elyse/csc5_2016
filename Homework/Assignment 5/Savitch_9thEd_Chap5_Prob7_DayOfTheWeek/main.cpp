/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 11th, 2016, 8:45 PM
 * Purpose:  Day of the Week
 * https://en.wikipedia.org/wiki/Determination_of_the_day_of_the_week
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>    //String Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
bool isLpYr(int);
int  centVal(int);
int  yearVal(int);
int  monVal(int,int);
int  dayVal(int,int,int);
string dayWeek(int,int,int);
int  cvnMon(string);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    string month;
    int day;
    int year;
    
    //Input Data
    cout<<"Find the day of the week given and date"<<endl;
    cout<<"Input the month first, i.e. January, February, etc..."<<endl;
    cin>>month;
    cout<<"Input the day of the month 1-31"<<endl;
    cin>>day;
    cout<<"Input the year"<<endl;
    cin>>year;
    
    //Output the processed Data
    cout<<month<<" "<<day<<","<<year<<" is a "
            <<dayWeek(day,cvnMon(month),year)<<endl;
    
    //Exit Stage Right!
    return 0;
}

int  cvnMon(string month){
    if(month=="January")  return 1;
    if(month=="February") return 2;
    if(month=="March")    return 3;
    if(month=="April")    return 4;
    if(month=="May")      return 5;
    if(month=="June")     return 6;
    if(month=="July")     return 7;
    if(month=="August")   return 8;
    if(month=="September")return 9;
    if(month=="October")  return 10;
    if(month=="November") return 11;
                          return 12;
}

string dayWeek(int day,int month,int year){
    switch(dayVal(day,month,year)){
        case 0:return  "Sunday";
        case 1:return  "Monday";
        case 2:return  "Tuesday";
        case 3:return  "Wednesday";
        case 4:return  "Thursday";
        case 5:return  "Friday";
        default:return "Saturday";
    }
}

int  dayVal(int day,int month,int year){
    return (day+monVal(month,year)+yearVal(year)+centVal(year))%7;
}

int  monVal(int month,int year){
    switch(month){
        case 1: return (isLpYr(year)?6:0);
        case 2: return (isLpYr(year)?2:3);
        case 3:
        case 11:return 3;
        case 4:
        case 7: return 6;
        case 5: return 1;
        case 6: return 4;
        case 8: return 2;
        case 9:
        case 12:return 5;
        default:return 0;
    }
}

int  yearVal(int year){
    return year%100+year%100/4;
}

int  centVal(int year){
    return (3-(year/100)%4)*2;
}

bool isLpYr(int year){
    if(year%400==0||(year%4==0&&!(year%100==0)))return true;
    else return false;
}