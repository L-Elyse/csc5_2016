/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on July 23, 2016, 11:15 AM
 * Purpose: Charge Account Linear Search
 */

//System Libraries
#include <iostream>//Input/Output Stream Library
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes
int linSrch(long int [], int, int);

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
    index=linSrch(accnt,SIZE,number);
    
    //Output data
    if(index==-1)cout<<"Linear Value not found"<<endl;
    else cout<<"Linear Value found at index = "<<index<<endl;
    
    //Exit Stage Right!
    return 0;
}

int  linSrch(long int a[],int n,int val){
    for(int i=0;i<n;i++){
        if(a[i]==val)return i;
    }
    return -1;
}