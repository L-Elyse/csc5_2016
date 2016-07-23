/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on June 20, 2016, 12:27 PM
 * Purpose: First Program
 */

//System Libraries
#include <iostream>//Input/Output Stream Library
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes
int bubSort(int [],int);
int selSort(int [],int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    const int SIZE=20;
    int arry[SIZE]={20,1,19,2,18,3,17,4,16,5,15,6,14,7,13,8,12,9,11,10};
    int btimes,stimes;
    
    //Input data
    cout<<"Let's see how many times it takes to sort the array list"<<endl;
    
    //Process data
    btimes=bubSort(arry,SIZE);
    stimes=selSort(arry,SIZE);
    
    //Output data
    cout<<"Bubble Sort   : "<<btimes<<" times"<<endl;
    cout<<"Selection Sort: "<<stimes<<" times"<<endl;
    
    //Exit Stage Right!
    return 0;
}

int selSort(int a[],int n){
    //Declare variables
    int scan,minIndx,minVal;
    int count=0;
    //Process
    for(scan=0;scan<(n-1);scan++){
        minIndx=scan;
        minVal=a[scan];
        for(int i=scan+1;i<n;i++){
            if(a[minIndx]<minVal){
            minVal=a[i];
            minIndx=i;
            }
        }
        a[minIndx]=a[scan];
        a[scan]=minVal;
        count++;
    }
    return count;
}

int bubSort(int a[],int n){
    //Declare variables
    bool swap;
    int temp;
    int count=0;
    //Process
    do{
        swap=false;
        for(int i=0;i<(n-1);i++){
            if(a[i]>a[i+1]){
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                swap=true;
                count++;
            }
        }
    }while(swap);
    return count;
}