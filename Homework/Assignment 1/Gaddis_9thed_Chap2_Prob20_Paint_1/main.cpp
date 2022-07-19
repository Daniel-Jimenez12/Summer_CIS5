
/* 
 * File:   main.cpp
 * Author: Daniel Jimenez
 *
 * Created on June 21, 2022, 12:02 PM
 */

//System libraries 

#include <iostream>

using namespace std;

//user libraries 

// Global Constants 
//Mathematical/physics/Conversions,Higher dimensions arrays 

//Function prototypes 


//execution begins here 

int main(int argc, char** argv) {
//initialize random number seed    
    //declare variables 
    float pCvg,//coverage of gallon paint ft^2
          fncHgt,//fence height
          fnclen;//fence length
    int nGalns;
    // initialize variables 
    pCvg = 3.4e2f;//340 square feet 
   fncHgt = 6.0e0f;
   fnclen = 1.0e2f;
    //map inputs to outputs -> The process 
   float surfaceA = fncHgt*fnclen;//surface area of 1 side of fence
   float surfaceCov =2*2*surfaceA;
   nGalns= surfaceCov/pCvg+1;//integer number of gallons
    //display results 
   cout<<"Fence Height : "<< fncHgt << " ft " << endl;
   cout<<"Fence Length: "<<fnclen<<" ft "<<endl;
   cout<<"Paint Coverage : "<<pCvg<<"ft^2"<<endl;
   cout<<"Number of Gallons of Paint required :"<<nGalns<<" gallons "<< endl;
    //exit stage fright 
    return 0;
}

