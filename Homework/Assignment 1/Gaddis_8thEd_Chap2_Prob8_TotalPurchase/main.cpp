/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on June 23, 2016, 12:51 AM
 * Purpose: Calculate total purchase of items
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
    float item1=15.95f;     //Sales price of first item
    float item2=24.95f;     //Sales price of second item
    float item3=6.95f;      //Sales price of third item
    float item4=12.95f;     //Sales price of fourth item
    float item5=3.95f;      //Sales price of fifth item
    float subtotl;          //Subtotal of the sale    
    float tax=0.07f;        //Percentage of sales tax 
    float total;
    
    //Input data
    
    //Process data
    subtotl=item1+item2+item3+item4+item5;
    int pennies1=subtotl*100+0.5;  //Shift into pennies add a half to round up
    subtotl=pennies1/100.0f;
    tax=tax*subtotl;
    int pennies2=tax*100+0.5;      //Shift into pennies add a half to round up
    tax=pennies2/100.0f;
    total=subtotl+tax;
    int pennies3=total*100+0.5;    //Shift into pennies add a half to round up
    total=pennies3/100.0f;
    
    //Output data
    cout<<"The subtotal of the sale is = $"<<subtotl<<endl;
    cout<<"The tax on the sale is      = $"<<tax<<endl;
    cout<<"The total of the sale is    = $"<<total<<endl;
    
    //Exit Stage Right!
    return 0;
}