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
    int score;
    char grade,
            pfScr;
    pfScr=70;
    score=rand()%51+50;
    
    grade=score>pfScr?'p':'F';
    
    cout<<score<<"="<<grade<<endl;
    return 0;
}

