/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on July 23, 2016, 11:45 AM
 * Purpose: Lottery Winner Simulation with Binary Search
 */

//System Libraries
#include <iostream>//Input/Output Stream Library
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes
int binSrch(int [],int,int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    const int SIZE=10;
    int lottery[SIZE]={13579, 26791, 26791, 33445, 55555,
                       62483, 77777, 79422, 85647, 93121};
    int index,value;
    
    //Input data
    cout<<"Let's simulate playing the lottery."<<endl;
    cout<<"Enter a 5 digit integer and I will tell you if you won"<<endl;
    cin>>value;
    
    //Process data
    index=binSrch(lottery,SIZE,value);
    
    //Output data
    if(index==-1)cout<<"I'm sorry, you did not win";
    else cout<<"You won!"<<endl;
    
    //Exit Stage Right!
    return 0;
}

int binSrch(int a[],int n,int val){
    //Declare variables
    int beg=0,end=n-1;
    //Loop until we find
    do{
        int middle=(end+beg)/2;
        if(a[middle]==val)return middle;
        else if(a[middle]<val)beg=middle+1;
        else end=middle-1;
    }while(end>=beg);
    return -1;
}