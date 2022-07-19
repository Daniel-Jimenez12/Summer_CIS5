
/* 
 * File:   main.cpp
 * Author:Daniel Jimenez
 *
 * Created on July,7 2022, 11:18 AM
 * Calculate the percentage Gas Tax on a gallon of gas, 
 * and the profit made from a gallon of gas given
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
     //declare variables 
    float excise,//excise tax/gallon
            gallons,//gallons to fill car  
            ocost,//original cost per gallon to fill
            stax,//sales tax
            capfee,//cap and trade fee - tax on a tax/gallon
            profit,//oil company profit 
            fedtax;//federal excise tax/gallon
          
   //initialize variables 
    excise = .39;
    stax   = .08;
    capfee = .10;
    fedtax =.184;
    profit =.065;
   //map inputs to outputs -> The process 
    cout<<"Enter your the cost per gallon from last fill up."<<endl;
       cin>>ocost;//6
    cout<<"How many gallons did you fill up"<<endl;
        cin>>gallons;//10
        
        
        float newstax=stax*ocost;//finds sales tax per gallon
        float tottax=(newstax+excise+capfee+fedtax);//all gov taxes combined
        
 cout<<"The total Government tax paid was "<<tottax<<" per gallon."<<endl;
     float percent = ((tottax/ocost)*100);//cost of total profit in percent

 cout<<fixed<<setprecision(2)<<showpoint;
 
 cout<<"The percentage of Government Tax profit was "<<percent<<" %"<<endl;
 
     float newprofit=ocost*profit;//total profit made by gas companies
     
 cout<<"The oil companies made 6.5% profit from "
         <<newprofit<<" cents per gallon."<<endl;
   
    //exit stage fright 
    return 0;
}

