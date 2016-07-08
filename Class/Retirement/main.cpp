/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on July 6, 2016, 11:00 AM
 * Purpose: Retirement
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
    float pv, fv, invRate,depRate,deposit,salary,retSav;
    
    //Input Data
    cout<<"Input the salary $'s, deposit %, interest rate in %"<<endl;
    cin>>salary>>depRate>>invRate;
    
    //Process the Data
    invRate/=100.0f;   //Convert to decimal form
    depRate/=100.0f; //Convert to decimal form
    deposit=depRate*salary;
    retSav=salary/invRate;
    fv=pv=0;           //Initialize the future value with the present
    
    //Loop to Display the Yearly Result
    cout<<fixed;
    cout<<"Our Salary             = $"<<setprecision(2)<<salary<<endl;
    cout<<"Yearly Bond Purchase   = $"<<setprecision(2)<<deposit<<endl;
    cout<<"Savings at Retirement  = $"<<setprecision(2)<<retSav<<endl;
    cout<<"Table produced with Investment Rate = "<<setprecision(2)
            <<invRate*100<<"% interest"<<endl;
    cout<<"Year   Date   Savings $"<<endl;
    int year=0, dateYr=2016;
    do{
        cout<<setw(4)<<year<<setw(7)<<dateYr<<setw(12)<<setprecision(2)<<fv<<endl;
        fv*=(1+invRate);//Each year pay yourself some interest
        fv+=deposit;
        int ifv=fv*100;
        fv=ifv/100.0f;//Truncating to the nearest penny
        year++;
        dateYr++;
    }while(fv<retSav);
    cout<<setw(4)<<year<<setw(7)<<dateYr<<setw(12)<<setprecision(2)<<fv<<endl;
    
    //Exit Stage Right!
    return 0;
}