#include <iostream>
#include <VectorClass.h>
#include <vector>
#include "test.h"

#include <iomanip>
#include <time.h>
#include <cmath>
#include <stdlib.h>
#include <cstdio>
#include <Windows.h>

/** Use to init the clock */
#define TIMER_INIT \
    LARGE_INTEGER frequency; \
    LARGE_INTEGER t1,t2; \
    QueryPerformanceFrequency(&frequency);


/** Use to start the performance timer */
#define TIMER_START \
QueryPerformanceCounter(&t1);

/** Use to stop the performance timer and output the result to the standard stream. Less verbose than \c TIMER_STOP_VERBOSE */
#define TIMER_STOP \
    QueryPerformanceCounter(&t2); \
    elapsedTime=(float)((t2.QuadPart-t1.QuadPart)*1000)/frequency.QuadPart; \

double elapsedTime;
using namespace std;



int test2(){

    //Sleep(1000);
    TIMER_INIT

    for(int n = 10; n <= 50 ; n+=10){
        VectorClass vecimpl;

        TIMER_START
        for(int i=0; i<n; i++){
            vecimpl.push_back(i);
        }
        TIMER_STOP
        cout<<"Adding "<<n<<"elements to vecimpl took "<<elapsedTime<<" seconds"<<endl;
        //cout<<vecimpl.size()<<endl;
        //vecimpl.clear();
    }


    for(int n = 10; n <= 50 ; n+=10){
        vector<int> veccpp;
        TIMER_START
        for(int i=0; i<n; i++){
            veccpp.push_back(i);
        }
        TIMER_STOP
        cout<<"Adding "<< n<<"elements to veccpp took "<<elapsedTime<<" seconds"<<endl;
        //cout<<veccpp.size()<<endl;
        //veccpp.clear();

    }

    for(int n = 100; n <= 500 ; n+=100){
        VectorClass vecimpl;

        TIMER_START
        for(int i=0; i<n; i++){
            vecimpl.push_back(i);
        }
        TIMER_STOP
        cout<<"Adding "<<n<<"elements to vecimpl took "<<elapsedTime<<" seconds"<<endl;
        //cout<<vecimpl.size()<<endl;
        //vecimpl.clear();


    }

    for(int n = 100; n <= 500 ; n+=100){
        vector<int> veccpp;

        TIMER_START
        for(int i=0; i<n; i++){
            veccpp.push_back(i);
        }
        TIMER_STOP
        cout<<"Adding "<< n<<"elements to veccpp took "<<elapsedTime<<" seconds"<<endl;
        //cout<<veccpp.size()<<endl;
        //veccpp.clear();


    }


    for(int n = 1000; n <= 5000 ; n+=1000){
        VectorClass vecimpl;

        TIMER_START
        for(int i=0; i<n; i++){
            vecimpl.push_back(i);
        }
        TIMER_STOP
        cout<<"Adding "<<n<<"elements to vecimpl took "<<elapsedTime<<" seconds"<<endl;
        //cout<<vecimpl.size()<<endl;
        //vecimpl.clear();


    }

    for(int n = 1000; n <= 5000 ; n+=1000){
        vector<int> veccpp;

        TIMER_START
        for(int i=0; i<n; i++){
            veccpp.push_back(i);
        }
        TIMER_STOP
        cout<<"Adding "<< n<<"elements to veccpp took "<<elapsedTime<<" seconds"<<endl;
        //cout<<veccpp.size()<<endl;
        //veccpp.clear();


    }

    for(int n = 10000; n <= 50000 ; n+=10000){
        VectorClass vecimpl;

        TIMER_START
        for(int i=0; i<n; i++){
            vecimpl.push_back(i);
        }
        TIMER_STOP
        cout<<"Adding "<<n<<"elements to vecimpl took "<<elapsedTime<<" seconds"<<endl;
        //cout<<vecimpl.size()<<endl;
        //vecimpl.clear();


    }

    for(int n = 10000; n <= 50000 ; n+=10000){
        vector<int> veccpp;

        TIMER_START
        for(int i=0; i<n; i++){
            veccpp.push_back(i);
        }
        TIMER_STOP
        cout<<"Adding "<< n<<"elements to veccpp took "<<elapsedTime<<" seconds"<<endl;
        //cout<<veccpp.size()<<endl;
        //veccpp.clear();


    }








    VectorClass vecimpl;
    vector<int> veccpp;
    for(int i=0; i < 1000000; i++){
        vecimpl.push_back(i);
        veccpp.push_back(i);
    }

    TIMER_START
    vecimpl.erase(0,500000);
    TIMER_STOP
    cout<<"ERASING vecimpl took "<<elapsedTime<<" seconds"<<endl;

    TIMER_START
    veccpp.erase(veccpp.begin(),veccpp.begin()+500000);
    TIMER_STOP
    cout<<"ERASING veccpp took "<<elapsedTime<<" seconds"<<endl;

    TIMER_START
    vecimpl.resize(200000,5);
    TIMER_STOP
    cout<<"RESIZING vecimpl took "<<elapsedTime<<" seconds"<<endl;

    TIMER_START
    veccpp.resize(200000,5);
    TIMER_STOP
    cout<<"RESIZING veccpp took "<<elapsedTime<<" seconds"<<endl;


    //vprint(vecimpl);
    //vectorprint(veccpp);


    return 0;

}

