/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 20th, 2016, 6:50 PM
 * Purpose:  Mark Sort Vector
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random
#include <iomanip>   //Formatting
#include <ctime>     //Time
#include <vector>    //Vector
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
void filAray(vector<int> &);//Ordered Random 4 digit numbers
void prntAry(vector<int> &,int);
void markSrt(vector<int> &);


//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    vector<int> array(SIZE);
    
    //Input Data
    filAray(array);
    prntAry(array,10);
    
    //Process the Data
    markSrt(array);
    
    //Output the processed Data
    prntAry(array,10);
    
    //Exit Stage Right!
    return 0;
}
void markSrt(vector<int> &a){
    for(int i=0;i<a.size()-1;i++){
        for(int j=i+1;j<a.size();j++){
            if(a[i]>a[j]){
                a[i]=a[i]^a[j];
                a[j]=a[i]^a[j];
                a[i]=a[i]^a[j];
            }
        }
    }
}

void prntAry(vector<int> &a,int perLine){
    cout<<endl;
    for(int i=0;i<a.size();i++){
        cout<<setw(5)<<a[i];
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void filAray(vector<int> &a){
    //Declare variables
    int step=10;
    for(int i=0,beg=1000;i<a.size();i++,beg+=step){
        a[i]=rand()%90+10;//[10,99]
    }
}