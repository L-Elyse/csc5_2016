/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on July 18, 2016, 1:40 PM
 * Purpose: Generate a Standard Normal - z with a Vector
 */

//System Libraries
#include <iostream> //Input/Output Stream Library
#include <cstdlib>  //Random Numbers
#include <ctime>    //Time
#include <cmath>    //Math Library
#include <vector>   //Vector
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants
const int MAXRND=pow(2,31)-1;//Max unsigned int value
const int MXRND=(1<<31)-1;     //Same max unsigned int value

//Function Prototypes
float normal();
float fillAry(vector<float> &,int);
void  maxmin(vector<float> &,int,float &,float &);
float mean(vector<float> &,int);
float stdDev(vector<float> &,int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables, no doubles
    const int SIZE=100000;
    vector<float> x(SIZE);
    float min,max,avg,std;
    
    //Input data
    fillAry(x,SIZE);
    
    //Process data
    maxmin(x,SIZE,min,max);
    avg=mean(x,SIZE);
    std=stdDev(x,SIZE);
    
    //Output data
    cout<<"Integer Maximum Random Number = "<<MAXRND<<endl;
    cout<<"Integer Maximum Random Number = "<<MXRND<<endl;
    cout<<"The Minimum Random Normal Number = "<<min<<endl;
    cout<<"The Maximum Random Normal Number = "<<max<<endl;
    cout<<"The Average Random Normal Value = "<<avg<<endl;
    cout<<"The Std Dev Random Normal Value = "<<std<<endl;
    
    //Exit Stage Right!
    return 0;
}

float stdDev(vector<float> &x,int n){
    //Declare and initialize
    float sum=0,avg=mean(x,n);
    for(int i=0;i<n;i++){
        sum+=((x[i]-avg)*(x[i]-avg));
    }
    return sqrt(sum/(n-1));
}

float mean(vector<float> &x,int n){
    //Declare and initialize
    float sum=0;
    for(int i=0;i<n;i++){
        sum+=x[i];
    }
    return sum/n;
}

void  maxmin(vector<float> &x,int n,float &min,float &max){
    min=max=x[0];
    for(int i=1;i<n;i++){
        if(max<x[i])max=x[i];
        if(min>x[i])min=x[i];
    }
}

float fillAry(vector<float> &x,int n){
    for(int i=0;i<n;i++){
        x[i]=normal();
    }
}

float normal(){
    //Declare and initialize
    float sum=0;
    //Add 12 uniformly distributed numbers
    for(int i=1;i<=12;i++){
        sum+=static_cast<float>(rand())/MAXRND;//[0,1]
    }
    //Scale a number[0,12]-6 = [-6,6]
    return sum-6;
}