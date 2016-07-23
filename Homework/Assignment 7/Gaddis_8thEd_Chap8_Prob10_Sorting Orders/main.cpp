/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on July 23, 2016, 3:00 PM
 * Purpose: Sorting Arrays using Bubble & Selection Sort
 */

//System Libraries
#include <iostream>//Input/Output Stream Library
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes
int bubSort(int [],int);
int selSort(int [],int);
void display(int [],int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    const int SIZE=8;
    int arry1[SIZE]={6, 3, 5, 4, 8, 2, 1, 7};
    int arry2[SIZE]={6, 3, 5, 4, 8, 2, 1, 7};
    int btimes,stimes;
    
    //Process &Output Data
    cout<<"The Bubble Sort"<<endl;
    btimes=bubSort(arry1,SIZE);
    cout<<"Number of Swaps: "<<btimes<<endl<<endl;
    cout<<"The Selection Sort"<<endl;
    stimes=selSort(arry2,SIZE);
    cout<<"Number of Swaps: "<<stimes<<endl;
    
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
            if(a[i]<minVal){
            minVal=a[i];
            minIndx=i;
            }
        } 
        a[minIndx]=a[scan];
        a[scan]=minVal; 
        count++;
        display(a,n);
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
                display(a,n);
            }
            
        }
    }while(swap);
    return count;
}

void display(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}