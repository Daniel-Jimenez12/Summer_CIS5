
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
    
   float pprice,//original untaxed purchase price 
        stax,//state tax
          ctax;//county tax
    //initialize variables
    pprice=95;
    stax =pprice*(4/PERCENT);
    ctax =pprice*(2/PERCENT);
    //map outputs 
    float totprice = pprice+stax+ctax;
   //display results
    cout<<setprecision(2)<<fixed;
    cout<<"The total price on purchase of $ "<<pprice<<" dollars"<<endl;
    cout<<"will be:$ "<< totprice<<" dollars"<<endl;
    return 0;
}

