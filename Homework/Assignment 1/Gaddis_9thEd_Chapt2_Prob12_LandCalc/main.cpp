
/* 
 * File:   main.cpp
 * Author: Daniel Jimenez
 *
 * Created on June 30, 2022, 4:00 PM
 * A Land Calculation
 */

//System libraries 

#include <iostream>
#include <iomanip>
using namespace std;

//user libraries 

// Global Constants 
//Mathematical/physics/Conversions,Higher dimensions arrays 

//Function prototypes 


//execution begins here 

int main(int argc, char** argv) {
//initialize random number seed 
 const int ACRE= 43560;
         float AcLand,//one acre in square feet 
         Sqft;//square feet 
     
        
   
    // initialize variables 
    Sqft = 391876;//square ft that needs to be converted to acres
   
    //map inputs to outputs -> The process 
    AcLand= Sqft/ACRE;//the acres of land converted from original square feet
    //display results 
    cout<<setprecision(4)<<showpoint;
    cout<<static_cast <int> (Sqft)<<" ft"<<" In acres is : "<<AcLand<<endl;
    //exit stage fright 
    return 0;
}

