/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: 2832229
 *
 * Created on June 23, 2022, 1:11 PM
 */

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    srand(static_cast<unsigned int>(time(0)));
    int score;//score 50-100
    char grade,//pass/fail
         pfScr;///pass fail score
    //initialize
    pfScr=70;
    score=rand()%51+50;//[50-100]
   //map inputs to outputs  
    //grade=score>=90?'A':score>=80?'B':score>=70?:score>='C':score>=60?'D':'F';
    grade=score>90?'A':
    score>=80?'B':
    score>=70?'C':
    score>=60?'D':'f';//Ternary Operator
    
    //display results 
    cout<<score<<"="<<grade<<endl;
    return 0;
}

