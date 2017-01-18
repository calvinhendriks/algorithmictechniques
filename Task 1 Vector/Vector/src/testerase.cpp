#include "VectorClass.h"
#include "test.h"

using namespace std;

int testerase(){

    ofstream testdata;
    testdata.open("testerase.txt",ofstream::out | std::ofstream::app);

    TIMER_INIT                                          //initiate the timer
    vector<int> veccpp;
    VectorClass vecimpl;

    for(int i=0; i<100; i++){                       //fill both vectors with 100 elements
        veccpp.push_back(i);
        vecimpl.push_back(i);
    }




    TIMER_START
    veccpp.erase(veccpp.begin()+50);
    TIMER_STOP
    cout<<"veccpp: erasing one element      took "<<elapsedTime<<" microseconds"<<endl;
    //testdata<<"veccpp: erasing one element      took "<<elapsedTime<<" microseconds"<<endl;



    TIMER_START
    vecimpl.erase(50);
    TIMER_STOP
    cout<<"vecimpl: erasing one element     took "<<elapsedTime<<" microseconds"<<endl;
   //testdata<<"vecimpl: erasing one element     took "<<elapsedTime<<" microseconds"<<endl;

    vecimpl.clear();
    veccpp.clear();

    for(int i=0; i<100000; i++){                       //fill both vectors with 100000 elements
        veccpp.push_back(i);
        vecimpl.push_back(i);
    }

    TIMER_START
    veccpp.erase(veccpp.begin()+25000,veccpp.end()-24999);
    TIMER_STOP
    cout<<"veccpp: erasing 50000 elements   took "<<elapsedTime<<" microseconds"<<endl;
    //testdata<<"veccpp: erasing 50000 elements   took "<<elapsedTime<<" microseconds"<<endl;



    TIMER_START
    vecimpl.erase(25000,75000);
    TIMER_STOP
    cout<<"vecimpl: erasing 50000 elements  took "<<elapsedTime<<" microseconds"<<endl;
    //testdata<<"vecimpl: erasing 50000 elements  took "<<elapsedTime<<" microseconds"<<endl;

    //cout<<veccpp[25000]<<endl;
    //cout<<vecimpl[25000]<<endl;






return 0;
}
