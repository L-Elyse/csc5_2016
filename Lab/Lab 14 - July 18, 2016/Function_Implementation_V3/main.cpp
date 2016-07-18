/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 18th, 2016, 12:15 AM
 * Purpose:  Function Review V3
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formatting
#include <cmath>     //Math
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
float save1(float,float,int);
float save1(float,float,float);
float save2(float,float,int);
float save3(float,float,int);
float save4(float,float,int);
float save5(float,float,int);
float save6(float,float,int);
float save7(float,float,int=12);
void  save8(float &,float,float,int);
void  save9(float [],float,float,int);
void display(float [],int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float fv,pv,intRate;
    int nComPds;
    float fComPds;
    const int SIZE=nComPds+1;
    float fvArry[SIZE];
    
    //Input Data
    pv=100.0f;//Fix the principle in $'s
    intRate=0.06f;//Municipal bond rate risky 6 percent
    nComPds=12;//Number of compounding periods 12 yrs
    fComPds=12;//To show overloading
    
    //Process the Data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Function call 1 deep    F1 = $"<<save1(pv,intRate,nComPds)<<endl;
    cout<<"Function call Overload  F1 = $"<<save1(pv,intRate,fComPds)<<endl;
    cout<<"Function call 2 deep    F2 = $"<<save2(pv,intRate,nComPds)<<endl;
    cout<<"Function with a loop    F3 = $"<<save3(pv,intRate,nComPds)<<endl;
    cout<<"Function calling itself F4 = $"<<save4(pv,intRate,nComPds)<<endl;
    cout<<"Example Correct Answer  F5 = $"<<save5(pv,intRate,nComPds)<<endl;
    cout<<"Example Static Variable F6 = $"<<save6(pv,intRate,nComPds)<<endl;
    for(int i=1;i<=5;i++){
        save6(pv,intRate,nComPds);
    }
    cout<<"Defaulted Parameter F7 = $"<<save7(pv,intRate)<<endl;
    save8(fv,pv,intRate,nComPds);
    cout<<"Reference Parameter F8 = $"<<fv<<endl;
    save9(fvArry,pv,intRate,nComPds);
    display(fvArry,nComPds);
    
    //Output the processed Data
    
    //Exit Stage Right!
    return 0;
}

void display(float fv[],int nYears){
    //Header
    cout<<endl<<"Year Savings"<<endl;
    //Display data
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    for(int year=0;year<=nYears;year++){
        cout<<setw(4)<<year<<" $"<<setw(6)<<fv[year]<<endl;
    }
}

void  save9(float fv[],float pv, float intRate, int nYears){
   //Fill the entire array 
    for(int year=0;year<=nYears;year++){
        fv[year]=save1(pv,intRate,year);
    }
}

float save1(float p,float i,float n){
    cout<<"Overloaded Function Call"<<endl;
    return p*pow((1+i),n);
}

void save8(float &fv,float p,float i,int n){
    for(int year=1;year<=n;year++){
        p*=(1+i);
    }
    fv=p;
}

float save7(float p,float i,int n){
    for(int year=1;year<=n;year++){
        p*=(1+i);
    }
    return p;
}

float save6(float p,float i,int n){
    static int calls=0;
    calls++;
    cout<<"Save6 has been called "<<calls<<" times"<<endl;
    return p*pow((1+i),n);
}

float save5(float p,float i,int n){
    int ip=p*100;
    p=ip/100.0f;
    for(int year=1;year<=n;year++){
        p*=(1+i);
        ip=p*100;
        p=ip/100.0f;
    }
    return p;
}

float save4(float p,float i,int n){
    if(n<=0)return p;
    return save4(p,i,n-1)*(1+i);
}

float save3(float p,float i,int n){
    for(int year=1;year<=n;year++){
        p*=(1+i);
    }
    return p;
}

float save2(float p,float i,int n){
    return p*exp(n*log(1+i));
}

float save1(float p,float i,int n){
    return p*pow((1+i),n);
}