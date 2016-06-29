/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on June 28, 2016, 10:30 PM
 * Purpose: Currency Conversion
 */

//System Libraries
#include <iostream> //Input/Output Stream Library
#include <iomanip>  //Format Library
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    float EUROS=0.90f;  //http://www.xe.com/currencyconverter/convert/?Amount=1&From=USD&To=EUR
    float YEN=102.24f;  //http://www.xe.com/currencyconverter/convert/?Amount=1&From=USD&To=JPY
    float dollars;
    
    
    //Input data
    cout<<"Input the amount of money you want converted."<<endl;
    cin>>dollars;
    
    
    //Process data
    EUROS *= dollars;
    YEN *= dollars;
    
    
    //Output data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"$"<<dollars<<" is equivalent to "<<EUROS<<" euros"<<endl;
    cout<<"$"<<dollars<<" is equivalent to "<<YEN<<" yen"<<endl;
    
    
    //Exit Stage Right!
    return 0;
}