/* 
 * File:   main.cpp
 * Author: Laurie Guimont
 * Created on July 15, 2016, 1:20 AM
 * Purpose: Midterm Menu
 */

//System Libraries
#include <iostream> //Input/Output Stream Library
#include <iomanip>  //Formatting Library
#include <cstdlib>  //Setting random number seed
#include <ctime>    //Time library
using namespace std;//Iostream uses the standard namespace

//User Libraries

//Global Constants - PI, Gravity, Conversions

//Function Prototypes
void prob1();
void prob2();
void prob3();
void prob4();
void prob5();
void prob6();
void menu();

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    char choice;
    
    //Input data
    do{
    menu();
    cin>>choice;
    
    //Process the Data and Display Results
        switch(choice){
            case '1':prob1();break;
            case '2':prob2();break;
            case '3':prob3();break;
            case '4':prob4();break;
            case '5':prob5();break;
            case '6':prob6();break;
            default:cout<<"Not option in menu"<<endl;
        }
    }while(choice>='1'&&choice<='6');
        
    //Exit Stage Right!
    return 0;
}

//000000111111122222223333333344444444455555555556666666667777777788888899999990
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                  Problem 1
//000000111111122222223333333344444444455555555556666666667777777788888899999990
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//
//X Marks the Spot Problem
//      Inputs - Argument list void
//      Internal Input
//          choice
//      Outputs - Return void
//      Internal Output
//          rows,columns,spaces
void prob1(){
    //Declare variables, no doubles
    int choice;
    int temp;
    int rows,columns;
    char space=32;
    
    //Input data
    cout<<"Enter any number"<<endl;
    cin>>choice;
    
    //Input Validation
    while(choice<1){
        cout<<"NO! Enter a number greater than 1!"<<endl;
        cin>>choice;
    }
    
    //For Odd Numbers
    cout<<endl;
    if(choice%2!=0){
        for(int rows=1;rows<=choice;rows++){
            for(int columns=1,temp=choice;columns<=choice;columns++,temp--){
                if(rows==columns||columns==(choice+1)-rows)
                    cout<<temp;
                else
                    cout<<space;          
            }
            cout<<endl;
        }
    }
    
    //For Even Numbers
    else{
        cout<<endl;
        for(int rows=1;rows<=choice;rows++){
            for(int columns=1,temp=choice;columns<=choice;columns++,temp--){
                if(rows==columns||columns==(choice+1)-rows)
                    cout<<columns;
                else
                    cout<<space;          
            }
            cout<<endl;
        }
    }
   
    //Return from X Marks the Spot Problem
    return;
}

//000000111111122222223333333344444444455555555556666666667777777788888899999990
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                  Problem 2
//000000111111122222223333333344444444455555555556666666667777777788888899999990
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//
//Strings, Characters, and Stars
//      Inputs - Argument list void
//      Internal Input
//          number1,number2,number3,number4
//      Outputs - Return void
//      Internal Output
//          number1,number2,number3,number4,star,"?"
void prob2(){
    //Declare variables
    char number1,number2,number3,number4;
    char star=42;
    int times;
    
    //Input the Data
    cout<<"Please input any 4 Digit Number"<<endl;
    cin>>number4>>number3>>number2>>number1;
    
    //Process and Output Data
    //Number 1 Output
    cout<<number1<<" ";
        if(number1<48||number1>57){
            cout<<"?";
        }else{
            for(times=1;times<=number1-48;times++)
                cout<<star;
        }
    cout<<endl;
    
    //Number 2 Output
    cout<<number2<<" ";
        if(number2<48||number2>57){
            cout<<"?";
        }else{
            for(times=1;times<=number2-48;times++)
                cout<<star;
        }
    cout<<endl;
    
    //Number 3 Output        
    cout<<number3<<" ";
        if(number3<48||number3>57){
            cout<<"?";
        }else{
            for(times=1;times<=number3-48;times++)
                cout<<star;
        }
    cout<<endl;
            
    //Number 4 Output
    cout<<number4<<" ";
        if(number4<48||number4>57){
            cout<<"?";
        }else{
            for(times=1;times<=number4-48;times++)
                cout<<star; 
        }
    cout<<endl;
    
    //Return from Strings, Characters, and Stars
    return;
}

//000000111111122222223333333344444444455555555556666666667777777788888899999990
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                  Problem 3
//000000111111122222223333333344444444455555555556666666667777777788888899999990
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//
//Writing a Check Problem
//      Inputs - Argument list void
//      Internal Input
//          date,payeefn,payeeln,holdrfn,holdrln,amount
//      Outputs - Return void
//      Internal Output
//          date,payeefn,payeeln,holdrfn,holdrln,amount
void prob3(){
     //Declare variables, no doubles
    string date,
           payeefn,payeeln,
           holdrfn,holdrln;
    int amount;
    int n1000s,n100s,n10s,n1s;

    //Input Data
    cout<<"Let's write someone a check."<<endl;
    cout<<"Please enter the date in the form MM/DD/YY"<<endl;
    cin>>date;
    cout<<"Now enter the fist and last name of the payee"<<endl;
    cin>>payeefn>>payeeln;
    cout<<"Account holder's first and last name?"<<endl;
    cin>>holdrfn>>holdrln;
    cout<<"And finally please enter the amount of the check"<<endl;
    cin>>amount;
    
    //Process and Output Data
    cout<<endl;
    cout<<holdrfn<<" "<<holdrln<<endl;
    cout<<"Street Address"<<endl;
    cout<<"City, State, Zip \t\t\t\t Date: "<<date<<endl;
    cout<<endl;
    cout<<"Pay to the Order of: "<<payeefn<<" "<<payeeln<<"\t\t\t $";
    cout<<amount<<endl;
        
    if(amount<2000){
        n1000s=(amount-amount%1000)/1000;
        switch(n1000s){
            case 1:cout<<"One thousand ";break;  
        }
        amount-=n1000s*1000;
        n100s=(amount-amount%100)/100;
        if(amount<1000){
            switch(n100s){
                case 9:cout<<"Nine hundred ";break;
                case 8:cout<<"Eight hundred ";break;
                case 7:cout<<"Seven hundred ";break;
                case 6:cout<<"Six hundred ";break;
                case 5:cout<<"Five hundred ";break;
                case 4:cout<<"Four hundred ";break;
                case 3:cout<<"Three hundred ";break;
                case 2:cout<<"Two hundred ";break;
                case 1:cout<<"One hundred ";break;
            }
            amount-=n100s*100;
            n10s=(amount-amount%10)/10;
            if(amount<100){
                switch(n10s){
                    case 9:cout<<"Ninety ";break;
                    case 8:cout<<"Eighty ";break;
                    case 7:cout<<"Seventy ";break;
                    case 6:cout<<"Sixty ";break;
                    case 5:cout<<"Fifty ";break;
                    case 4:cout<<"Forty ";break;
                    case 3:cout<<"Thirty ";break;
                    case 2:cout<<"Twenty ";break;
                    case 1:{
                        amount-=n10s*10;
                        n1s=(amount-amount%1)/1;
                        switch(n1s){
                            case 0:cout<<"Ten ";break;
                            case 1:cout<<"Eleven ";break;
                            case 2:cout<<"Twelve ";break;
                            case 3:cout<<"Thirteen ";break;
                            case 4:cout<<"Fourteen ";break;
                            case 5:cout<<"Fifteen ";break;
                            case 6:cout<<"Sixteen ";break;
                            case 7:cout<<"Seventeen ";break;
                            case 8:cout<<"Eighteen ";break;
                            case 9:cout<<"Nineteen ";break;
                        }
                    }           
                }
                amount-=n10s*10;
                n1s=(amount-amount%1)/1;
                if(amount<10){
                    switch(n1s){
                        case 9:cout<<"Nine ";break;
                        case 8:cout<<"Eight ";break;
                        case 7:cout<<"Seven ";break;
                        case 6:cout<<"Six ";break;
                        case 5:cout<<"Five ";break;
                        case 4:cout<<"Four ";break;
                        case 3:cout<<"Three ";break;
                        case 2:cout<<"Two ";break;
                        case 1:cout<<"One ";break;
                    }
                }
            }
        }
    }
    
    //Output data
    cout<<"and no/100s Dollars"<<endl;
    cout<<endl;
    cout<<"Bank of CSC5"<<endl;
    cout<<endl;
    cout<<"For: Gotta Pay the Rent \t\t\t "<<holdrfn<<" "<<holdrln<<endl;
    

    //Return from Writing a Check
    return;
}

//000000111111122222223333333344444444455555555556666666667777777788888899999990
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                  Problem 4
//000000111111122222223333333344444444455555555556666666667777777788888899999990
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//
//Internet Service Provider Packages Problem
//      Inputs - Argument list void
//      Internal Input
//          choice, hours
//      Outputs - Return void
//      Internal Output
//          bill,save
void prob4(){
     //Declare variables, no doubles
    float pack1=16.75f; 
    float pack2=23.75f; 
    float pack3=29.95f; 
    char choice;         //Subscription Choice
    float bill;          //Monthly bill
    float save=0.0f;     //Money saved by upgrading
    int hours, xtrahrs; 
    int times,temp;
    
    //Input data
    cout<<"Let's calculate your monthly bill"<<endl;
    cout<<"Please enter the package you have already purchased"<<endl;
    cout<<"1. $16.75 per month, 5 hour access"<<endl;
    cout<<"2. $23.75 per month, 15 hour access"<<endl;
    cout<<"3. $29.95 per month, unlimited access"<<endl;
    cin>>(choice);
        //Input Validation 
        while(choice<'1'||choice>'3'){
            cout<<"Error. Please enter a number corresponding to one of the";
            cout<<" choices above"<<endl;
            cin>>choice;
        }
    cout<<"On average, how many hours have you spent online?"<<endl;
    cin>>hours;
        //Input Validation
        while(hours<1){
            cout<<"Error. Please enter a number greater than 1"<<endl;
            cin>>hours;
        }
  
    //Process the data
    switch(choice){
        case '1':
            if (hours<=5){
                bill=pack1;
            }
            else if (hours>5 && hours<=20){
                xtrahrs=hours-5;
                bill=pack1+xtrahrs*0.75;
            }else{
                xtrahrs=hours-20;
                bill=pack1+xtrahrs*1+15*0.75;
            }
            
            //Recommendation
            if(hours>=15){
                cout<<endl;
                cout<<"Hmm. Have you thought about switching packages?"<<endl;
                cout<<"You could be saving money!"<<endl;

                //Money Saved by Switching
                if(hours>=15 && hours<=20){
                    temp=hours-15;

                    for(times=1,save=0.5;times<=temp;times++)
                        save+=0.2;

                    cout<<"Package 2 is better!"<<endl;
                }
                else if (hours==21){
                    save=1.95;
                    cout<<"Package 2 is better!"<<endl;
                }
                else{      
                    save=bill-pack3;
                    cout<<"Package 3 is better!"<<endl;
                } 
            }
            break;
        case '2':
            if (hours<=15){
                bill=pack2;
            }else if (hours>15 && hours<=25){
                xtrahrs=hours-15;
                bill=pack2+xtrahrs*0.55;
            }else{
                xtrahrs=hours-25;
                bill=pack2+xtrahrs*0.70+10*0.55;
            }

            //Recommendation
            if(hours>=26){
                cout<<"Why not save money with unlimited access?"<<endl;
                cout<<"You should upgrade to package 3!"<<endl;

                save=bill-pack3;
            }
            break;
        case '3':
            bill=pack3;
            break;
    }
        
    //Output data
    cout<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Monthly bill = $"<<bill<<endl;
    cout<<"Money saved by upgrading = $"<<save<<" per month";
    cout<<" or $"<<save*12<<" per year!"<<endl;
    
    //Return from Internet Service Provider Packages
    return;
}

//000000111111122222223333333344444444455555555556666666667777777788888899999990
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                  Problem 5
//000000111111122222223333333344444444455555555556666666667777777788888899999990
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//
//Employee Gross Pay with Regular, Double & Triple Time Problem
//      Inputs - Argument list void
//      Internal Input
//          hrsWrkd,payrate
//      Outputs - Return void
//      Internal Output
//          grosspy
void prob5(){
     //Declare variables, no doubles
    float grosspy;              //Gross Pay Accumulator
    float hrsWrkd, payrate;     //User input total hours worked & pay rate
    int time,dbltime,trptime;   //Straight time, double time, triple time
    int hours,dblhrs,trplhrs;
    
    //Input data
    cout<<"This program calculates employee gross pay for a week"<<endl;
    cout<<"Please enter the hours worked"<<endl;
    cin>>hrsWrkd;
    
        //Input Validation
        while(hrsWrkd<1 || hrsWrkd>168){
            cout<<"Error. Please enter a number between 1 and 168"<<endl;
            cin>>hrsWrkd;
        }
    
    cout<<"Please enter the pay rate"<<endl;
    cin>>payrate;
    
        //Input Validation
        while (payrate<0){
            cout<<"Error. Please enter a number greater than 0"<<endl;
            cin>>payrate;
        }
    
    //Format Data
    cout<<fixed<<setprecision(2)<<endl;
    
    //Process the Data 
    if(hrsWrkd<=20)
        grosspy=hrsWrkd*payrate;
    else if(hrsWrkd>20&&hrsWrkd<40){
        dblhrs=hrsWrkd-20;
        grosspy=dblhrs*payrate*2+20*payrate;
    }
    else if(hrsWrkd>=40){
        trplhrs=hrsWrkd-39;
        grosspy=trplhrs*payrate*3+19*payrate*2+20*payrate;
    }
    
    //Output data //
    cout<<"Hours worked: "<<hrsWrkd<<endl;
    cout<<"Pay rate = $"<<payrate<<endl;
    cout<<"Your gross pay = $"<<grosspy<<endl;
    
    //Return from Employee Gross Pay with Regular, Double & Triple Time
    return;
}

//000000111111122222223333333344444444455555555556666666667777777788888899999990
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                  Problem 6
//000000111111122222223333333344444444455555555556666666667777777788888899999990
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//
//Sine as a MacLaurin/Taylor Series Problem
//      Inputs - Argument list void
//      Internal Input
//          x,n
//      Outputs - Return void
//      Internal Output
//          sum
void prob6(){
     //Declare variables, no doubles
    unsigned int fact;   //Factorial
    unsigned int n,x;    //Number of terms to be displayed and x
    int i;               //Iterations of the factorial
    float sumTerm,sum=0;
    int terms;
    int xtimes,temp;     //Temporary Variables
    float denom, numratr;//Numerator and Denominator
    
    //Input data
    cout<<"Please enter an x value"<<endl;
    cin>>x;
    cout<<"Please enter the number of terms you would like displayed"<<endl;
    cin>>n;
    
        //Input Validation
        while(n<1){
            cout<<"Error. Please enter a number greater than 1"<<endl;
            cin>>n;
        }
    
    //Process the Data
    cout<<endl;   
    for(terms=1,temp=1;terms<=n;terms++,temp+=2){
        //Denominator
        for(i=1,fact=1;i<=temp;i++){
            fact*=i;
        }
        denom=fact;
        
        //Numerator
        for(xtimes=1,numratr=1;xtimes<=temp;xtimes++){
            numratr*=x;
        }
        
        //Conditional Statement
        if(terms%2==0){
            sumTerm=(numratr/denom)*(-1);    
        }
        else{
            sumTerm=(numratr/denom);
        }
        
        //Accumulator
        sum+=sumTerm;
    }
                
    //Output the Data
    cout<<"The resulting sum is = "<<sum<<endl;

    //Return from Sine as MacLaurin/Taylor Series
    return;
}

//000000111111122222223333333344444444455555555556666666667777777788888899999990
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                  MENU
//000000111111122222223333333344444444455555555556666666667777777788888899999990
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//
//Displays Menu
//      Inputs - None
//      Outputs - The Menu
void menu(){
    cout<<endl;
    cout<<"Menu Program for Midterm Example Test"<<endl;
    cout<<"Simply choose the number for the problem to display"<<endl;
    cout<<"Type 1 for Problem 1 X Marks the Spot"<<endl;
    cout<<"Type 2 for Problem 2 Strings, Characters, and Stars"<<endl;
    cout<<"Type 3 for Problem 3 Writing a Check"<<endl;
    cout<<"Type 4 for Problem 4 Internet Service Provider Packages"<<endl;
    cout<<"Type 5 for Problem 5 Employee Gross Pay with Regular, Double & Triple Time"<<endl;
    cout<<"Type 6 for Problem 6 Sine as a MacLaurin/Taylor Series"<<endl;
    cout<<endl;
}