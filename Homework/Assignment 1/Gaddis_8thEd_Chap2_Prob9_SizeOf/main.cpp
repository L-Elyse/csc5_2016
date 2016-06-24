/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on June 22, 2016, 1:44 PM
 * Purpose: Size of all the Data Types
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
    char a;
    unsigned char b;
    short c;
    unsigned short d;
    int e;
    unsigned int f;
    bool g;
    float h;
    double i;//This just gave you an FFFFFFF
    long double j;//This is an even bigger F, special place for you!!!!
    long k;
    unsigned long l;
    
    //Input data
    
    //Process data
    
    
    //Output data
    cout<<"Character has            "<<sizeof(a)<<" bytes"<<endl;
    cout<<"Unsized Character has    "<<sizeof(b)<<" bytes"<<endl;
    cout<<"Short has                "<<sizeof(c)<<" bytes"<<endl;
    cout<<"Unsigned Short has       "<<sizeof(d)<<" bytes"<<endl;
    cout<<"Integer has              "<<sizeof(e)<<" bytes"<<endl;
    cout<<"Unsigned Integer has     "<<sizeof(f)<<" bytes"<<endl;
    cout<<"Boolean has              "<<sizeof(g)<<" bytes"<<endl;
    cout<<"Float has                "<<sizeof(h)<<" bytes"<<endl;
    cout<<"Double has               "<<sizeof(i)<<" bytes"<<endl;
    cout<<"Long Double has          "<<sizeof(j)<<" bytes"<<endl;
    cout<<"Long has                 "<<sizeof(k)<<" bytes"<<endl;
    cout<<"Unsigned Long has        "<<sizeof(l)<<" bytes"<<endl;
    
    
    //Exit Stage Right!
    return 0;
}