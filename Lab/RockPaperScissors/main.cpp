
/* 
 * File:   main.cpp
 * Author: Daniel Jimenez
 *
 * Created on July 12, 2022, 12:02 PM
 * rock paper scissors 
 */

//System libraries 

#include <iostream>
#include <cstdlib>//random seed/random function library
#include <ctime> //time library 
using namespace std;

//user libraries 

// Global Constants 
//Mathematical/physics/Conversions,Higher dimensions arrays 

//Function prototypes 


//execution begins here 

int main(int argc, char** argv) {
unsigned char p1,
         p2;
  cout<<"Rock Paper Scissors Game"<<endl;
  cout<<"Input Player 1 and Player 2 Choices"<<endl;
  cin>>p1>>p2;
    //map inputs to outputs -> The process 
    
     if(p1=='P'&& p2=='R'|| p1=='p'&& p2=='r'){
    
        cout<<"Paper covers rock.";
    }else if(p1=='R'&& p2=='P'|| p1=='r'&& p2=='p'){
        
        cout<<"Paper covers rock.";
    }else if(p1=='R'&& p2=='S'|| p1=='r'&& p2=='s'){
        
        cout<<"Rock breaks scissors.";
  
    }else if(p1=='P'&& p2=='S' || p1=='p'&& p2=='s'){
     
         cout<<"Scissors cuts paper.";
    }else if(p2=='P' && p1=='R'||p2=='p' && p1=='r'){
       
        cout<<"Paper covers rock.";
    }else if(p2=='R'&& p1=='P'||p2=='r' && p1=='p'){

        cout<<"Rock covers paper.";
   } else if(p2=='R'&& p1=='S'||p2=='r' && p1=='s'){
      cout<<"Rock breaks scissors";
        cout<<"Scissors cuts paper.";
   }else if(p2=='P'&& p1=='S' || p2=='p'&& p2=='s'){
     
         cout<<"Scissors cuts paper.";     

}
  else {
   cout<<"Nobody wins.";
  }
  return 0;
}