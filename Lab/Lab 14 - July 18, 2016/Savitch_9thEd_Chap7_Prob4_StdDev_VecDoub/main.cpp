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
double normal();
double fillAry(vector<double> &,int);
void  maxmin(vector<double> &,int,double &,double &);
double mean(vector<double> &,int);
double stdDev(vector<double> &,int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables, no doubles
    const int SIZE=100000;
    vector<double> x(SIZE);
    double min,max,avg,std;
    
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

double stdDev(vector<double> &x,int n){
    //Declare and initialize
    double sum=0,avg=mean(x,n);
    for(int i=0;i<n;i++){
        sum+=((x[i]-avg)*(x[i]-avg));
    }
    return sqrt(sum/(n-1));
}

double mean(vector<double> &x,int n){
    //Declare and initialize
    double sum=0;
    for(int i=0;i<n;i++){
        sum+=x[i];
    }
    return sum/n;
}

void  maxmin(vector<double> &x,int n,double &min,double &max){
    min=max=x[0];
    for(int i=1;i<n;i++){
        if(max<x[i])max=x[i];
        if(min>x[i])min=x[i];
    }
}

double fillAry(vector<double> &x,int n){
    for(int i=0;i<n;i++){
        x[i]=normal();
    }
}

double normal(){
    //Declare and initialize
    double sum=0;
    //Add 12 uniformly distributed numbers
    for(int i=1;i<=12;i++){
        sum+=rand()/static_cast<double>(rand())/MAXRND;//[0,1]
    }
    //Scale a number[0,12]-6 = [-6,6]
    return sum-6;
}