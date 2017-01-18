#include <iostream>
#include <VectorClass.h>
#include <vector>
#include "test.h"
#include <fstream>

#include <iomanip>
#include <time.h>
#include <cmath>
#include <stdlib.h>
#include <cstdio>
#include <Windows.h>
using namespace std;
int teststuff(){

    ofstream testdata;
    testdata.open("testdata2.txt",ofstream::out | std::ofstream::app);
    TIMER_INIT

    /*

    //for loop 10 elements
    vector<int> veccpp1;
    TIMER_START
    for(int i = 0; i < 10; i++){
            veccpp1.push_back(100);
    }
    TIMER_STOP
    testdata<<"!!!Adding 10 elements to veccpp1 took "<<elapsedTime<<" seconds"<<endl;

    //for loop 20 elements
    vector<int> veccpp2;
    TIMER_START
    for(int i = 0; i < 20; i++){
            veccpp2.push_back(100);
    }
    TIMER_STOP
    testdata<<"!!!Adding 20 elements to veccpp2 took "<<elapsedTime<<" seconds"<<endl;

    //for loop 30 elements
    vector<int> veccpp7;
    TIMER_START
    for(int i = 0; i < 30; i++){
            veccpp7.push_back(100);
    }
    TIMER_STOP
    testdata<<"!!!Adding 30 elements to veccpp7 took "<<elapsedTime<<" seconds"<<endl;

    //for loop 40 elements
    vector<int> veccpp8;
    TIMER_START
    for(int i = 0; i < 40; i++){
            veccpp8.push_back(100);
    }
    TIMER_STOP
    testdata<<"!!!Adding 40 elements to veccpp8 took "<<elapsedTime<<" seconds"<<endl;

    */

    //while loop 10 elements
    int b = 0;
    vector<int> veccpp3;
    TIMER_START
    while(b < 10){
        veccpp3.push_back(100);
        b++;
    }
    TIMER_STOP
    testdata<<"Adding 10 elements std::vector took:"<<elapsedTime<<endl;

    //while loop 20 elements
    b = 0;
    vector<int> veccpp4;
    TIMER_START
    while(b < 20){
        veccpp4.push_back(100);
        b++;
    }
    TIMER_STOP
    testdata<<"Adding 20 elements std::vector took:"<<elapsedTime<<endl;

    //while loop 30 elements
    b = 0;
    vector<int> veccpp5;
    TIMER_START
    while(b < 30){
        veccpp5.push_back(100);
        b++;
    }
    TIMER_STOP
    testdata<<"Adding 30 elements std::vector took:"<<elapsedTime<<endl;

    //while loop 40 elements
    b = 0;
    vector<int> veccpp6;
    TIMER_START
    while(b < 40){
        veccpp6.push_back(100);
        b++;
    }
    TIMER_STOP
    testdata<<"Adding 40 elements std::vector took:"<<elapsedTime<<endl;

    //while loop 50 elements
    b = 0;
    vector<int> veccpp9;
    TIMER_START
    while(b < 50){
        veccpp9.push_back(100);
        b++;
    }
    TIMER_STOP
    testdata<<"Adding 50 elements std::vector took:"<<elapsedTime<<endl;


    //while loop 10000 elements
    b = 0;
    vector<int> veccpp33;
    TIMER_START
    while(b < 10000){
        veccpp33.push_back(100);
        b++;
    }
    TIMER_STOP
    testdata<<"Adding 10000 elements std::vector took:"<<elapsedTime<<endl;

    //while loop 20000 elements
    b = 0;
    vector<int> veccpp44;
    TIMER_START
    while(b < 20000){
        veccpp44.push_back(100);
        b++;
    }
    TIMER_STOP
    testdata<<"Adding 20000 elements std::vector took:"<<elapsedTime<<endl;

    //while loop 30000 elements
    b = 0;
    vector<int> veccpp55;
    TIMER_START
    while(b < 30000){
        veccpp55.push_back(100);
        b++;
    }
    TIMER_STOP
    testdata<<"Adding 30000 elements std::vector took:"<<elapsedTime<<endl;

    //while loop 40000 elements
    b = 0;
    vector<int> veccpp66;
    TIMER_START
    while(b < 40000){
        veccpp66.push_back(100);
        b++;
    }
    TIMER_STOP
    testdata<<"Adding 40000 elements std::vector took:"<<elapsedTime<<endl;

    //while loop 50000 elements
    b = 0;
    vector<int> veccpp99;
    TIMER_START
    while(b < 50000){
        veccpp99.push_back(100);
        b++;
    }
    TIMER_STOP
    testdata<<"Adding 50000 elements to std::vector took:"<<elapsedTime<<endl;


}
