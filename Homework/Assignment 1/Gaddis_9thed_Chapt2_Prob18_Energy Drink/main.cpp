
/* 
 * File:   main.cpp
 * Author: Daniel Jimenez
 *
 * Created on June 30, 7:00 PM
 * energy drink problem 
 */

//System libraries 

#include <iostream>

using namespace std;

//user libraries 

// Global Constants 
//Mathematical/physics/Conversions,Higher dimensions arrays 
const unsigned char PERCENT = 100;//conversion to percentage 
//Function prototypes 


//execution begins here 

int main(int argc, char** argv) {
//initialize random number seed 
    
    //declare variables 
   unsigned short cstSr,//customers surveyed
           nED,//number of customers energy drinkers  
           nCD;//number of citrus drinkers
   unsigned char pED,//percent of energy drinkers
                 pCD;//percent citrus drinkers 
   
    // initialize variables 
   cstSr=16500;
   pED=15;
   pCD=58;
    //map inputs to outputs -> The process 
   nED=cstSr*pED/PERCENT;
   nCD=nED*pCD/PERCENT;
    //display results 
   cout<<"Number of Customers that use Energy Drinks = "<<nED<<endl;
   cout<<"Number of Customers that prefer Citrus Drinks = "<<nCD<<endl;
    //exit stage fright 
    return 0;
}

