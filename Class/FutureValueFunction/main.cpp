
/* 
 * File:   main.cpp
 * Author: 2832229
 *
 * Created on June 21, 2022, 12:02 PM
 */

//System libraries 

#include <iostream>
#include<cmath>
using namespace std;

//user libraries 

// Global Constants 
//Mathematical/physics/Conversions,Higher dimensions arrays 
const unsigned int PERCENT =100;
//Function prototypes 

float fValue1(float pv,float i, int n);
float fValue2(float pv,float i, int n);
//execution begins here 

int main(int argc, char** argv) {
    float preVal,//present value
            intrate;//interest rate
    int numcmp;//number of compounding periods in years
    
    
    preVal==100;
    intrate=6;
    numcmp=12;
    
    
    
    intrate/=PERCENT;
    
    cout<<"Present value"<<preVal<<endl;
    cout<<"INterest Rate"<<intrate<<endl;
    cout<<"Number of years"<<numcmp;
    cout<<"Future value Power Function = 0"
            <<fValue1(preVal,intrate,numcmp );
    
    return 0;
}

float fValue1(float pv,float i, int n){
    
    return pv*pow(1+i,n);
}