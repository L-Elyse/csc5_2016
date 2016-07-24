/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on July 20, 2016, 12:30 PM
 * Purpose: Calculate Retail Price Markup
 */

//System Libraries
#include <iostream> //Input/Output Stream Library
#include <iomanip>  //Formatting Library
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes
float convert(float);
void calcRet(float,float,float);


//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    float cost,percent;
    float price;
    
    //Input data
    cout<<"Please enter the wholesale cost of the item"<<endl;
    cin>>cost;
    cout<<"Please enter the item's markup percentage"<<endl;
    cin>>percent;
    
    //Input Validation
    while(cost<0||percent<0){
        cout<<"Error. Please do not enter negative numbers"<<endl;
        cout<<"Enter cost and percent now"<<endl;
        cin>>cost>>percent;
    }
    
    //Process and Output Data
    calcRet(cost,percent,price);
    
    //Exit Stage Right!
    return 0;
}

void calcRet(float c,float perc,float price){
    //Calculate Retail Price
    price=c+(c*convert(perc));
    
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The retail price is $"<<price<<endl;
    return; 
}

float convert(float p){
    //Convert Percent to Decimal
    p/=100;
    return p;
}


