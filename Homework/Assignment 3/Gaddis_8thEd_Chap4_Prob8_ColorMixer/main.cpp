/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on July 3, 2016, 7:00 PM
 * Purpose: Mixing Primary Colors
 */

//System Libraries
#include <iostream> //Input/Output Stream Library
#include <string>   //Character Library
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    string color1, color2; //Color input
    
    
    //Input data
    cout<<"Let's mix some colors, shall we?"<<endl;
    cout<<"Pick two from the following list:"<<endl;
    cout<<"red, blue, yellow"<<endl;
    cin>>color1>>color2;
            
    
    //Process data
    //Red-Blue Combination
    if(color1=="red"&&color2=="blue"||color1=="blue"&&color2=="red")
        cout<<"Congratulations! You made purple!"<<endl;
    
    //Red-Yellow Combination
    else if (color1=="red"&&color2=="yellow"||color1=="yellow"&&color2=="red")
        cout<<"Congratulations! You made orange!"<<endl;
    
    //Blue-Yellow Combination
    else if (color1=="blue"&&color2=="yellow"||color1=="yellow"&&color2=="blue")
        cout<<"Congratulations! You made green!"<<endl;
    else
        cout<<"Error. Please pick colors from the list provided"<<endl;
                            
    
    //Exit Stage Right!
    return 0;
}