
/* 
 * File:   main.cpp
 * Author: Daniel Jimenez
 *
 * Created on July 7, 2022, 10:20 AM
 * Analyze data in a file 
 */

//System libraries 

#include <iostream>//Input Output library
#include <fstream>//file I/O library
#include <iomanip>//format library
#include <cstring>//string library
using namespace std;

//user libraries 

// Global Constants 
//Mathematical/physics/Conversions,Higher dimensions arrays 

//Function prototypes 


//execution begins here 

int main(int argc, char** argv) {
//initialize random number seed 
    
    //declare variables 
    fstream in;
    const int size =80;//max size file name
char  filName[size];//name of output string file 
       int    random,//random number to read from file 
               nrand,
              max,//maximum number in file 
              min,//minimum number in file 
              sum;//sum of all n of all numbers in file 
     float avg;// average
    // initialize variables 
  
    strcpy(filName,"random.dat");
    in.open(filName,ios::in);
    nrand=sum=0;
    //map inputs to outputs -> The process 
 in>>random;
 max=min=random;
 nrand++;
 sum+=random;
 while(in>>random){
     if(max<random)min=random;
     if(min>random)min=random;
     sum+=random;
     nrand++ ;
    
    }
 avg=static_cast <float> 'sum'/;
    //display results 
 cout<<"The total numbers in file = "<<nrand<<endl;
 cout<<"The max numbers in file = "<<max<<endl;
 cout<<"The min numbers in file = "<<min<<endl;
 cout<<"The sum of all numbers  = "<<sum<<endl;
 cout<<"Average of all numbers  = "<<avg<<endl;
 //close file 
 in.close();
    //exit stage fright 
    return 0;
}

