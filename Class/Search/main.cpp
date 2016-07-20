/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on July 20, 2016, 11:00 AM
 * Purpose: Search
 *          Linear and Bisection Method
 */

//System Libraries
#include <iostream> //Input/Output Stream Library
#include <cstdlib>  //Random
#include <iomanip>  //Formatting
#include <ctime>    //Time
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes
int random(int,int);      //Random number with a beginning and end point
void filAray(int [],int);  //Ordered Random 4-Digit Numbers
void prntAry(int [],int,int);
int linSrch(int [],int,int);
int binSrch(int [],int,int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables, no doubles
    const int SIZE=100;
    int array[SIZE],value,lindx,bindx;
        
    //Input data
    filAray(array,SIZE);
    prntAry(array,SIZE,10);
    cout<<"What value would you like to find?"<<endl;
    cin>>value;
    
    //Process data
    lindx=linSrch(array,SIZE,value);
    bindx=binSrch(array,SIZE,value);
    
    //Output data
    if(lindx==-1)cout<<"Linear Value not found"<<endl;
    else cout<<"Linear Value found at index = "<<lindx<<endl;
    if(bindx==-1)cout<<"Binary Value not found"<<endl;
    else cout<<"Binary Value found at index = "<<bindx<<endl;
    
    //Exit Stage Right!
    return 0;
}

int binSrch(int a[],int n,int val){
    //Declare Variables
    int beg=0,end=n-1;
    //Loop until we find it
    do{
        int middle=(end+beg)/2;
        if(a[middle]==val)return middle;
        else if(a[middle]<val)beg=middle+1;
        else end=middle-1;        
    }while(end>=beg);
    return -1;
}

int linSrch(int a[],int n,int val){
    for(int i=0;i<n;i++){
        if (a[i]==val)return i;
    }
    return -1;
}

void prntAry(int a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<setw(5)<<a[i];
        if(i%perLine==(perLine-1))cout<<endl;
    }
}

void filAray(int a[],int n){
    //Declare Variables
    int step=10;
    for(int i=0,beg=1000;i<n;i++,beg+=step){
        a[i]=random(beg,beg+step);
    }
}

int random(int beg,int end){
  return rand()%(end-beg+1)+beg;  
}