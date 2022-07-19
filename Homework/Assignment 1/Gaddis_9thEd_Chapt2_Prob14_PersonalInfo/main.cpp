
/* 
 * File:   main.cpp
 * Author: Daniel Jimenez
 *
 * Created on June 30, 2022, 12:02 PM
 prints personal information inputted by user 
 */

//System libraries 

#include <iostream>
# include <cstdlib>
using namespace std;

//user libraries 

// Global Constants 
//Mathematical/physics/Conversions,Higher dimensions arrays 

//Function prototypes 


//execution begins here 

int main(int argc, char** argv) {
//initialize random number seed 
    
    //declare variables 
    string name,
            city,
            state,
            telephone,
           major;
         
           int zip,
               address;
          
            
    // initialize variables 
           cout<<"what is your name"<<endl;
           cin>>name;
           cout<<"what is your city"<<endl;
           cin>>city;
           cout<<"what is your state"<<endl;
           cin >> state;
           cout<<"What is your zip"<<endl;
           cin>> zip;
           cout<<"What is your address"<<endl;
           cin>>address;
           cout<<" What is your phone number"<<endl;
           cin>>telephone;
           cout<<"What is your Major"<<endl;
           cin>>major;
    
    cout<<"Your info is "<<'\n'<<name<<'\n'<<address<<","<<city<<","<<state<<'\n'
            <<zip<<'\n'<<
            telephone<<'\n'<<
            major<<'\n'<<endl;
     

   
    //map inputs to outputs -> The process 
    
    //display results 
    return 0;
}

