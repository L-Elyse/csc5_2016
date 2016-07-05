/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on July 5, 2016, 12:24 PM
 * Purpose: Phone Charges
 */

//System Libraries
#include <iostream>//Input/Output Stream Library
#include <iomanip> //Format Library
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    int minutes;
    float hrsMin;
    int hrs, min;
    float charge;
    
    //Input data
    do{
        cout<<"Input the time at which the phone call starts"<<endl;
        cout<<"Format 00.00 to 23.59 -> hrs.min"<<endl;
        cin>>hrsMin;
        hrs=hrsMin;
        min=(hrsMin-hrs)*100+0.5; //Round up for float input problem
    }while(hrs<0||hrs>23||min<0||min>59);
    cout<<"Input the minutes on the phone"<<endl;
    cin>>minutes;
                
    
    //Process data
    if(hrs>=0&&hrs<=6){
        charge=.12*minutes;        
    }else if (hrs>=7&&hrs<=18||hrs==19&&min==0){
        charge=.55*minutes;
    }else{
        charge=.35*minutes;
    }
    
    //Output the processed data
    if(hrs==0)     cout<<"The phone call started at 00";
    else if(hrs<10)cout<<"The phone call started at 0"<<hrs;
    else           cout<<"The phone call started at "<<hrs;
    if(min==0)     cout<<":00"<<endl;
    else if(min<10)cout<<":0"<<min<<endl;
    else           cout<<":"<<min<<endl;
    cout<<"It lasted for "<<minutes<<" (mins)"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The total charge = $"<<charge<<endl;
    
    //Exit Stage Right!
    return 0;
}