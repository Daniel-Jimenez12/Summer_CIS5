
/* 
 * File:   main.cpp
 * Author: Daniel Jimenez
 *
 * Created on July 7, 2022, 10:20 AM
 * Generate random data then save in a file 
 */

//System libraries 

#include <iostream>//Input Output library
#include <fstream>//file I/O library
#include <cstdlib>//for random number function
#include<ctime>//time the set random seed
#include <iomanip>//format library
using namespace std;

//user libraries 

// Global Constants 
//Mathematical/physics/Conversions,Higher dimensions arrays 

//Function prototypes 


//execution begins here 

int main(int argc, char** argv) {
//initialize random number seed 
    srand(static_cast<unsigned int>(time(0)));
    //declare variables 
    fstream out;//file stream containing random number data
    string  filName;//name of output string file 
       int     random,//random number to print to file 
                nRand;//number of random integers to generate
    // initialize variables 
    nRand = 100;
    filName ="random.dat";
    out.open(filName,ios::out);
    //map inputs to outputs -> The process 
    for(int i=1;i<= nRand;i++){
        random = rand()%90+10;//(10-100)
        out<<random<<endl;
        cout<<setw(3)<<i<<endl;
    }
    //display results 
    //close file 
    out.close();
    //exit stage fright 
    return 0;
}

