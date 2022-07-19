
/* 
 * File:   main.cpp
 * Author: 2832229
 *Miles per gallon
 * calculate # of miles per gallon of gas
 * Created on June 28, 2022, 12:00 PM
 */

//System libraries 

#include <iostream>
#include <iomanip>
const float PERCENT = 100;
const float TRILL=1e12f;
const float BILL=1e9f;

using namespace std;

int main(int argc, char** argv) {
    float fedb,
          milb,
         nasab,
        percmil,//Percent Military
       percnasa;//Percent Nasa Budget
    //initial variables 
    fedb=6.011e12;//Daniel Chvat found
    milb=778e9;//Fernando found 
    nasab=24e9;//Moni found on internet
    //Map inputs to outputs 
    percmil =milb/fedb*PERCENT;
    percnasa = nasab/fedb*PERCENT;
    //display
    cout<<fixed<<setprecision(3)<<showpoint;
    cout<<" Federal Budget  = $"<<setw(7)<<fedb/TRILL<<"Trillion"<<endl;
    cout<<" Military Budget = $"<<setw(7)<<nasab/BILL<<"Billion "<<endl;
    cout<<"Military Budget Percent"<<setw(7)<<percmil<<" %"<<endl;
    cout<<"Nasa Budget Percent"<<setw(7)<<percnasa<<" %"<<endl;
    return 0;
}

