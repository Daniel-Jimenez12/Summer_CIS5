
/* 
 * File:   main.cpp
 * Author:Daniel Jimenez
 *
 * Created on June 30, 2022,5:30 PM
 * Calculate the total price of 5 purchases and their sales tax 
 */

//System libraries 

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
   const float PERCENT = 1e2f;
    
   float pp1,
         pp2,
         pp3,
         pp4,
         pp5,//original untaxed purchase price/subtotal
        stax;//sales tax
        
    //initialize variables
    pp1=15.95,
    pp2=24.95,
    pp3=6.95,
    pp4=12.95,
    pp5=3.95;//prices of original subtotal
    stax=(7/PERCENT);
    //map outputs 
    float tax1=pp1*stax,  
          tax2=pp1*stax,             
          tax3=pp1*stax,
          tax4=pp1*stax,
          tax5=pp1*stax;//tax that is included for each purchase 
   //display results
    cout<<setprecision(2)<<fixed;
    cout<<"subtotal of $"<<pp1<<" with an additional tax of $"<<tax1
                   <<" makes the total price: $"<<pp1+tax1<<endl;
    cout<<"subtotal of $"<<pp2<<" with an additional tax of $"<<tax2
                   <<" makes the total price: $"<<pp2+tax2<<endl;
    cout<<"subtotal of $"<<pp3<<" with an additional tax of $"<<tax3
                   <<" makes the total price: $"<<pp3+tax3<<endl;
    cout<<"subtotal of $"<<pp4<<" with an additional tax of $"<<tax4
                   <<" makes the total price: $"<<pp4+tax4<<endl;
    cout<<"subtotal of $"<<pp5<<" with an additional tax of $"<<tax5
                   <<" makes the total price: $"<<pp5+tax5<<endl;
    return 0;
}

