
/* 
 * File:   main.cpp
 * Author: Daniel Jimenez
 *
 * Created on June 28, 2022, 12:37 PM
 */

//System libraries 

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
   const float PERCENT = 1e2f;
    
   float bill,//untaxed bill price 
         tax,//sales tax
          tip;//county tax
    //initialize variables
    bill=88.67;
    tax=bill*(6.75/PERCENT);//6.75 tax on bill
    float billtax=bill+tax ;//new subtotal that combines tax and the billprice
          tip= billtax*(20/PERCENT);
    //map outputs 
    float totbill = billtax+tip;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The bill of :$"<<bill<<endl;
    cout<<"Will have a 6.75 % tax of :$ "<<tax<<endl;
    cout<<"The Tip will be :$ "<<tip<<endl;
    cout<<"This makes the total bill :$ "<<totbill<<endl;
   //display results
   
    return 0;
}

