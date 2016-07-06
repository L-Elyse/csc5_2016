/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on July 6, 2016, 10:46 AM
 * Purpose: Savings with dowhile Loop
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
    //Declare Variables, no doubles
    float pv, fv, iRate;
    int nYears;
    
    //Input Data
    cout<<"Input the present value in $'s, interest rate in %, number of ";
    cout<<"years in (yrs)"<<endl;
    cin>>pv>>iRate>>nYears;
    
    //Process the Data
    iRate/=100.0f; //Convert to decimal form
    fv=pv;         //Initialize the future value with the present
    
    
    //Loop to Display the Yearly Result
    cout<<fixed;
    cout<<"Table produced with "<<setprecision(2)<<iRate*100<<"% interest"<<endl;
    cout<<"Year   Date   Savings $"<<endl;
    int year=0, dateYr=2016;
    do{
        cout<<setw(4)<<year<<setw(7)<<dateYr<<setw(12)<<setprecision(2)<<fv<<endl;
        fv*=(1+iRate);//Each year pay yourself some interest
        int ifv=fv*100;
        fv=ifv/100.0f;//Truncating to the nearest penny
        year++;
        dateYr++;
    }while(year<=nYears);
    
    
    //Exit Stage Right!
    return 0;
}