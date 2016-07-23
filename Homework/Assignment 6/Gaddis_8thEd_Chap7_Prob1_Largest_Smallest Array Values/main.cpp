/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on July 22, 2016, 6:45 PM
 * Purpose: Find Largest/Smallest Array Values
 */

//System Libraries
#include <iostream>//Input/Output Stream Library
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    const int SIZE=10;
    int number[SIZE];
    int highest,lowest;
    int count;

    //Input data
    for(count=0;count<SIZE;count++){
        cout<<"Please enter number "<<count+1<<endl;
        cin>>number[count];
    }
    
    //Display & Process data
    highest=number[0];
    for(count=1;count<SIZE;count++){
        if (number[count]>highest) 
            highest=number[count];
    }
    
    lowest=number[0];
    for(count=1;count<SIZE;count++){
        if (number[count]<lowest) 
            lowest=number[count];
    }
    
    //Output data
    cout<<endl;
    cout<<"Highest Number: "<<highest<<endl;
    cout<<"Lowest Number : "<<lowest<<endl;
    
    //Exit Stage Right!
    return 0;
}