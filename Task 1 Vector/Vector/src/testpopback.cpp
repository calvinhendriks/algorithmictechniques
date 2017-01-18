#include <VectorClass.h>
#include "test.h"

using namespace std;


int testpopback(){
    ofstream testdata;
    testdata.open("testpopback.txt",ofstream::out | std::ofstream::app);

    TIMER_INIT                                          //initiate the timer
    vector<int> veccpp;
    VectorClass vecimpl;

    //steps of 1
    for(int i = 0; i < 100; i++){                      //fill both vectors
        veccpp.push_back(i);
        vecimpl.push_back(i);

    }

    for(int n=1; n<6; n+=1){

        TIMER_START
        for(int i = 0; i < n; i++){
            veccpp.pop_back();
        }
        TIMER_STOP
        cout<<"veccpp: pop_back "<<n<<" times took "<<elapsedTime<<" microseconds"<<endl;
        //testdata<<"veccpp: pop_back "<<n<<" times took "<<elapsedTime<<" microseconds"<<endl;

        TIMER_START
        for(int i = 0; i < n; i++){
            vecimpl.pop_back();
        }
        TIMER_STOP
        cout<<"vecimpl: pop_back " <<n<<" times took "<<elapsedTime<<" microseconds"<<endl;
        //testdata<<"vecimpl: pop_back " <<n<<" times took "<<elapsedTime<<" microseconds"<<endl;

    }

    veccpp.clear();                                         //clear both vectors
    vecimpl.clear();

    //steps of 10
    for(int i = 0; i < 1000; i++){                      //fill both vectors
        veccpp.push_back(i);
        vecimpl.push_back(i);

    }

    for(int n=10; n<60; n+=10){

        TIMER_START
        for(int i = 0; i < n; i++){
            veccpp.pop_back();
        }
        TIMER_STOP
        cout<<"veccpp: pop_back "<<n<<" times took "<<elapsedTime<<" microseconds"<<endl;

        TIMER_START
        for(int i = 0; i < n; i++){
            vecimpl.pop_back();
        }
        TIMER_STOP
        cout<<"vecimpl: pop_back " <<n<<" times took "<<elapsedTime<<" microseconds"<<endl;

    }

    veccpp.clear();                                         //clear both vectors
    vecimpl.clear();

    //steps of 100

    for(int i = 0; i < 10000; i++){                      //fill both vectors with 1,000,000 elements
        veccpp.push_back(i);
        vecimpl.push_back(i);

    }


    for(int n=100; n<600; n+=100){

        TIMER_START
        for(int i = 0; i < n; i++){
            veccpp.pop_back();
        }
        TIMER_STOP
        cout<<"veccpp: pop_back "<<n<<" times took "<<elapsedTime<<" microseconds"<<endl;


        TIMER_START
        for(int i = 0; i < n; i++){
            vecimpl.pop_back();
        }
        TIMER_STOP
        cout<<"vecimpl: pop_back " <<n<<" times took "<<elapsedTime<<" microseconds"<<endl;

    }





return 0;

}
