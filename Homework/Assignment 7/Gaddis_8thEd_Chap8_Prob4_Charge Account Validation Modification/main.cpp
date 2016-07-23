/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on July 23, 2016, 12:05 PM
 * Purpose: Charge Account Binary Search & Selection Sort
 */

//System Libraries
#include <iostream>//Input/Output Stream Library
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes
long int selSort(long int [],int);
int binSrch(long int [], int, int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    const int SIZE=18;
    long int accnt[SIZE]={5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
                          8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
                          1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
    int number,index;
    
    //Input data
    cout<<"Enter a number and I will tell you if it is in my list"<<endl;
    cin>>number;
    
    //Process data
    selSort(accnt,SIZE);
    index=binSrch(accnt,SIZE,number);
    
    //Output data
    if(index==-1)cout<<"Binary Value not found"<<endl;
    else cout<<"Binary Value found at index = "<<index<<endl;
    
    //Exit Stage Right!
    return 0;
}

int  binSrch(long int a[],int n,int val){
    //Declare variables
    int beg=0,end=n-1;
    //Process
    do{
        int middle=(beg+end)/2;
        if(a[middle]==val)return middle;
        else if(a[middle]<val)beg=middle+1;
        else end=middle-1;
    }while(end>=beg);
    return -1;
}

long int selSort(long int a[], int n){
    //Declare variables
    int scan,minIndx,minVal;
    //Process
    for(scan=0;scan<n-1;scan++){
        minIndx=scan;
        minVal=a[scan];
        for(int i=scan+1;i<n;i++){
            if(a[i]<minVal){
                minVal=a[i];
                minIndx=i;
            }
        }
        a[minIndx]=a[scan];
        a[scan]=minVal;
    }
    return a[scan];
}
