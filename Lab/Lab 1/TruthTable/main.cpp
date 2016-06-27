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

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    bool x,y;
    
    //Input data
    
    //Process data
    
    //Output data
    //Heading
    cout<<"The Truth Table"<<endl;
    cout<<"X Y !X !Y X||Y X&&Y X^Y X^Y^Y X^Y^X !(X||Y) !X&&!Y ";
    cout<<"!(X&&Y) !X||!Y"<<endl;
    
    //First Row
    x=true;y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y? 'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x||y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"       ";
  
    
    //Exit Stage Right!
    return 0;
}