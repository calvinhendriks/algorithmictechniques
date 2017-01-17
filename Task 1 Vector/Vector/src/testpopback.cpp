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


int testpopback(){
    ofstream testdata;
    testdata.open("testpopback.txt",ofstream::out | std::ofstream::app);

    TIMER_INIT                                          //initiate the timer
    vector<int> veccpp;
    VectorClass vecimpl;

    for(int i = 0; i < 1000; i++){                      //fill both vectors
        veccpp.push_back(i);
        vecimpl.push_back(i);

    }

    for(int n=10; n<60; n+=10){
        //pop_back veccpp 10X
        TIMER_START
        for(int i = 0; i < n; i++){
            veccpp.pop_back();
        }
        TIMER_STOP
        cout<<"veccpp: pop_back "<<n<<" times took "<<elapsedTime<<" microseconds"<<endl;

        //popback vecimpl 10X
        TIMER_START
        for(int i = 0; i < n; i++){
            vecimpl.pop_back();
        }
        TIMER_STOP
        cout<<"vecimpl: pop_back " <<n<<" times took "<<elapsedTime<<" microseconds"<<endl;

    }

    veccpp.clear();                                         //clear both vectors
    vecimpl.clear();

    for(int i = 0; i < 1000000; i++){                      //fill both vectors with 1,000,000 elements
        veccpp.push_back(i);
        vecimpl.push_back(i);

    }

    cout<<veccpp.size()<<endl;
    cout<<vecimpl.size()<<endl;

    for(int n=1000; n<6000; n+=1000){
        //pop_back veccpp 10X
        TIMER_START
        for(int i = 0; i < n; i++){
            //veccpp.pop_back();
        }
        TIMER_STOP
        cout<<"veccpp: pop_back "<<n<<" times took "<<elapsedTime<<" microseconds"<<endl;

        //popback vecimpl 10X
        TIMER_START
        for(int i = 0; i < n; i++){
            vecimpl.pop_back();
        }
        TIMER_STOP
        cout<<"vecimpl: pop_back " <<n<<" times took "<<elapsedTime<<" microseconds"<<endl;

    }





return 0;

}
