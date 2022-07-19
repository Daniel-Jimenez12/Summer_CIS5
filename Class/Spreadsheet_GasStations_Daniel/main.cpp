
/* 
 * File:   main.cpp
 * Author: Daniel Jimenez
 *
 * Created on June 30, 2022, 8:00 PM
 * calculates cost of filling up at gas stations 
 */

//System libraries 

#include <iostream>
#include <iomanip>

using namespace std;

//user libraries 

// Global Constants 
//Mathematical/physics/Conversions,Higher dimensions arrays 
//conversion to percentage 
//Function prototypes 


//execution begins here 

int main(int argc, char** argv) {
    const float PERCENT = 1e2f;
    //initialize random number seed 
    float gageperc =75/PERCENT,
         sizeTank = 22,//size of tank
         gasmile=17,//gas mileage 
         gReq =sizeTank*(1-gageperc);//gallons needed to fill up
    
     //station 1 variables 
     float pG1=4.25,//price per gallon at station 1
        cFill1 =pG1*gReq;//cost to fill at station 1
    int milestoo1 =10,//miles to station 1
             totdist1=20;//total distance driven to and from station 1
     float distcost1=(totdist1/gasmile)*pG1;//total cost to drive to and from station 
     float stat1Tot=cFill1+distcost1,//cost to fill including the cost to drive
             totPriceper1=stat1Tot/gReq;//The price per gallon with mileage cost

     
     
   //station 1 variables 
     float pG2=4.09,//price per gallon at station 2
        cFill2 =pG2*gReq;//cost to fill at station 2
     int milestoo2 = 20,//miles too station 2
             totdist2=40;//total distance driven to and from station 2
     float distcost2=(totdist2/gasmile)*pG2;//total cost to drive to and from station 
     float stat2Tot= cFill2+distcost2,//cost to fill including the cost to drive
             totPriceper2=stat2Tot/gReq;//The price per gallon with mileage cost
     
     
   //map inputs to outputs -> The process 
    //display results 
   cout<<setprecision(2)<<fixed<<endl;
   cout<<"The Gallons needed to fill up is "<<gReq<<endl;
   cout<<endl;
   cout<<"Station 1 calculations : "<<endl;
   cout<<"The cost to fill at station 1 is $ " <<cFill1<<endl;
   cout<<"The cost to drive to and from station 1 is $ "<<distcost1<<endl;
   cout<<"The total cost with mileage mileage to station is $ "<<stat1Tot<<endl;
   cout<<"The total price per gallon including cost of mileage to station 1 is "
           <<totPriceper1<<endl;
   cout<<endl;
   
   cout<<"Station 2 calculations : "<<endl;
   cout<<"The cost to fill at station 2 is $ " <<cFill2<<endl;
   cout<<"The cost to drive to and from station 2 is $ "<<distcost2<<endl;
   cout<<"The total cost with mileage mileage to station 2 is $ "<<stat2Tot
           <<endl;
   cout<<"The total price per gallon including cost of mileage to station 2 is "
           <<totPriceper2<<endl;
    //exit stage fright 
    return 0;
}

