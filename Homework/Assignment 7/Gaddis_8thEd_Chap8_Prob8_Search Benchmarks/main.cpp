/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on June 23, 2016, 1:45 PM
 * Purpose: Comparing Linear and Binary Searches
 */

//System Libraries
#include <iostream>//Input/Output Stream Library
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes
int linSrch(int [],int,int);
int binSrch(int [],int,int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    const int SIZE=20;
    int arry[SIZE]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int ltimes,btimes,number;
    
    //Input data
    cout<<"Let's see how many times it takes to find a number"<<endl;
    cout<<"Enter Number between 1-20 to search"<<endl;
    cin>>number;
    
    //Process data
    cout<<endl;
    ltimes=linSrch(arry,SIZE,number);
    cout<<"Linear Search: "<<ltimes<<" times"<<endl;
    btimes=binSrch(arry,SIZE,number);
    cout<<"Binary Search: "<<btimes<<" times"<<endl;
    
    //Output data
    
    //Exit Stage Right!
    return 0;
}

int binSrch(int a[],int n,int val){
    //Declare variables
    int beg=0,end=n-1;
    int count=0;
    //Process
    do{
        count++;
        int middle=(beg+end)/2;
        if(a[middle]==val)return count;
        else if(a[middle]<val)beg=middle+1;
        else end=middle-1;
    }while(end>=beg);
    return -1;
}

int linSrch(int a[],int n,int val){
    for(int i=0;i<n;i++){
        int count=0;
        count+=(i+1);
        if(a[i]==val)
            return count;
    }
    return -1;
}
