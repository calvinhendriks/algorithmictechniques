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

int testpushback(){

    TIMER_INIT
//////////////////////////////////////////////////////

    for(int n = 10; n <= 50 ; n+=10){
        VectorClass vecimpl;
        int a=0;
        TIMER_START
        while(a<n){
            vecimpl.push_back(a);
            a++;
        }
        TIMER_STOP
        cout<<"Adding "<<n<<"elements to vecimpl took "<<elapsedTime<<" seconds"<<endl;
        //cout<<vecimpl.size()<<endl;
        //vecimpl.clear();
    }

    for(int n = 10; n <= 50 ; n+=10){
    vector<int> veccpp6;
    cout<<veccpp6.size()<<endl;
        int a=0;
        TIMER_START
        while(a<n){
            veccpp6.push_back(a);
            a++;
        }
        TIMER_STOP
        cout<<veccpp6.size()<<endl;
        cout<<"@@Adding "<<n<<"elements to vecimpl took "<<elapsedTime<<" seconds"<<endl;
        //veccpp6.clear();
        //cout<<vecimpl.size()<<endl;
        //vecimpl.clear();
    }



        vector<int> veccpp5;
        int a = 1;
        int n = 50;
        TIMER_START
        while(a<=n){
            veccpp5.push_back(a);


            if(a = 10){
                TIMER_STOP
                cout<<elapsedTime<<endl;
                veccpp5.clear();
            }
            if(a = 20){
                TIMER_STOP
                cout<<elapsedTime<<endl;
                veccpp5.clear();
            }
            if(a = 30){
                TIMER_STOP
                cout<<elapsedTime<<endl;
                veccpp5.clear();
            }
            if(a = 40){
                TIMER_STOP
                cout<<elapsedTime<<endl;
                veccpp5.clear();
            }
            if(a = 50){
                TIMER_STOP
                cout<<elapsedTime<<endl;
                veccpp5.clear();
            }
            a++;
        }

        //cout<<"Adding "<< n<<"elements to veccpp took "<<elapsedTime<<" seconds"<<endl;
        //cout<<veccpp.size()<<endl;
        //veccpp.clear();



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

