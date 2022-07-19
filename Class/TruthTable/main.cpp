
/* 
 * File:   main.cpp
 * Author: 2832229
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
    bool x,
         y;
    cout<<"x y !x !y x&&y x||y x^y x^y^x x^y^y !x&&!y"
    <<" !(X||Y) !X||!Y  !(X&&Y)"<<endl;
    //declare variables 
    x=y=true;
    
   // first row
      x=y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<(x^y^x? 'T':'F')<<"      ";
    cout<<(x^y^y? 'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<"     ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<endl;
    
    //Second Row
    y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<(x^y^x? 'T':'F')<<"      ";
    cout<<(x^y^y? 'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<"     ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<endl;
    //map inputs to outputs -> The process 
    
    //display results 
    
    //exit stage fright 
    return 0;
}

