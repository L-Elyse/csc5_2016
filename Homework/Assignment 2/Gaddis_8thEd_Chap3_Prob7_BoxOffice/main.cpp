/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on June 27, 2016, 11:45 PM
 * Purpose: Calculating Box Office Profit
 */

//System Libraries
#include <iostream> //Input/Output Stream Library
#include <iomanip>  //Format Library
#include <string>   //String Library
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    float acost=10;  //Cost per adult ticket
    float ccost=6;   //Cost per child ticket
    float percent=0.2f;  //Percentage of profit retained by the theatre
    int aticks, cticks; //number of adult and child tickets sold
    string movie;   //Name of movie
    float gross, net;  //Gross Profit and Net Profit from movie
    float distr;   //Amount of gross profit paid to distributor
    
    //Input data
    cout<<"What is the name of the movie?"<<endl;
    getline (cin, movie);
    cout<<"How many adult tickets were sold?"<<endl;
    cin>>aticks;
    cout<<"How many child tickets were sold?"<<endl;
    cin>>cticks;
    
    //Process data
    gross=(acost*aticks)+(ccost*cticks);
    net=gross*percent;
    distr=gross-net;
    
    //Output data
    cout<<"Movie Name:                "<<movie<<endl;
    cout<<"Adult Tickets Sold:             "<<aticks<<endl;
    cout<<"Child Tickets Sold:             "<<cticks<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Gross Box Office Profit:    $"<<setw(8)<<gross<<endl;
    cout<<"Net Box Office Profit:      $"<<setw(8)<<net<<endl;
    cout<<"Amount Paid to Distributor: $"<<setw(8)<<distr<<endl;
    
    //Exit Stage Right!
    return 0;
}