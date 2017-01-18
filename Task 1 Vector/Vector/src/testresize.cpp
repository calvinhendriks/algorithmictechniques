#include <VectorClass.h>
#include "test.h"

using namespace std;


int testresize(){

    TIMER_INIT
    ofstream testdata;
    testdata.open("testresize.txt",ofstream::out | std::ofstream::app);

    vector<int> veccpp;
    VectorClass vecimpl;

    for(int i=0; i<100; i++){                       //fill both vectors with 100 elements
        veccpp.push_back(i);
        vecimpl.push_back(i);
    }

    //resize bigger NO ARGUMENTS
    TIMER_START
    veccpp.resize(5000);
    TIMER_STOP
    cout<<"veccpp: resizing from 100 to 5000 elements (no value type arg.) took "<<elapsedTime<<" microseconds"<<endl;
    //testdata<<"veccpp: resizing from 100 to 5000 elements (no value type arg.) took "<<elapsedTime<<" microseconds"<<endl;

    TIMER_START
    vecimpl.resize(5000);
    TIMER_STOP
    cout<<"vecimpl: resizing from 100 to 5000 elements (no value type arg.) took "<<elapsedTime<<" microseconds"<<endl;
    //testdata<<"vecimpl: resizing from 100 to 5000 elements (no value type arg.) took "<<elapsedTime<<" microseconds"<<endl;


    veccpp.clear();                                 //clear both vectors.
    vecimpl.clear();

    for(int i=0; i<100; i++){                       //fill both vectors with 100 elements
        veccpp.push_back(i);
        vecimpl.push_back(i);
    }

    TIMER_START
    veccpp.resize(500000);
    TIMER_STOP
    cout<<"veccpp: resizing from 100 to 500000 elements (no value type arg.) took "<<elapsedTime<<" microseconds"<<endl;
    //testdata<<"veccpp: resizing from 100 to 500000 elements (no value type arg.) took "<<elapsedTime<<" microseconds"<<endl;

    TIMER_START
    vecimpl.resize(500000);
    TIMER_STOP
    cout<<"vecimpl: resizing from 100 to 500000 elements (no value type arg.) took "<<elapsedTime<<" microseconds"<<endl;
    //testdata<<"vecimpl: resizing from 100 to 500000 elements (no value type arg.) took "<<elapsedTime<<" microseconds"<<endl;

    //resizing bigger WITH ARGUMENTS

    veccpp.clear();                                 //clear both vectors.
    vecimpl.clear();

    for(int i=0; i<100; i++){                       //fill both vectors with 100 elements
        veccpp.push_back(i);
        vecimpl.push_back(i);
    }


    TIMER_START
    veccpp.resize(5000, 5);
    TIMER_STOP
    cout<<"veccpp: resizing from 100 to 5000 elements (valuetype arg = 5) took "<<elapsedTime<<" microseconds"<<endl;
    //testdata<<"veccpp: resizing from 100 to 5000 elements (valuetype arg = 5) took "<<elapsedTime<<" microseconds"<<endl;

    TIMER_START
    vecimpl.resize(5000, 5);
    TIMER_STOP
    cout<<"vecimpl: resizing from 100 to 5000 elements (valuetype arg = 5) took "<<elapsedTime<<" microseconds"<<endl;
    //testdata<<"vecimpl: resizing from 100 to 5000 elements (valuetype arg = 5) took "<<elapsedTime<<" microseconds"<<endl;

    veccpp.clear();                                 //clear both vectors.
    vecimpl.clear();

    for(int i=0; i<100; i++){                       //fill both vectors with 100 elements
        veccpp.push_back(i);
        vecimpl.push_back(i);
    }

    TIMER_START
    veccpp.resize(500000,5);
    TIMER_STOP
    cout<<"veccpp: resizing from 100 to 500000 elements (valuetype arg = 5) took "<<elapsedTime<<" microseconds"<<endl;
    //testdata<<"veccpp: resizing from 100 to 500000 elements (valuetype arg = 5) took "<<elapsedTime<<" microseconds"<<endl;

    TIMER_START
    vecimpl.resize(500000,5);
    TIMER_STOP
    cout<<"vecimpl: resizing from 100 to 500000 elements (valuetype arg = 5) took "<<elapsedTime<<" microseconds"<<endl;
    //testdata<<"vecimpl: resizing from 100 to 500000 elements (valuetype arg = 5) took "<<elapsedTime<<" microseconds"<<endl;

    //resizing smaller NO ARG

    veccpp.clear();                                 //clear both vectors.
    vecimpl.clear();

    for(int i=0; i<5000; i++){                       //fill both vectors with 5000 elements
        veccpp.push_back(i);
        vecimpl.push_back(i);
    }

    TIMER_START
    veccpp.resize(100);
    TIMER_STOP
    cout<<"veccpp: resizing from 5000 to 100 elements took "<<elapsedTime<<" microseconds"<<endl;
    //testdata<<"veccpp: resizing from 5000 to 100 elements took "<<elapsedTime<<" microseconds"<<endl;

    TIMER_START
    vecimpl.resize(100);
    TIMER_STOP
    cout<<"vecimpl: resizing from 5000 to 100 elements took "<<elapsedTime<<" microseconds"<<endl;
    //testdata<<"vecimpl: resizing from 5000 to 100 elements took "<<elapsedTime<<" microseconds"<<endl;

    veccpp.clear();                                 //clear both vectors.
    vecimpl.clear();

    for(int i=0; i<500000; i++){                       //fill both vectors with 500,000 elements
        veccpp.push_back(i);
        vecimpl.push_back(i);
    }

    TIMER_START
    veccpp.resize(100);
    TIMER_STOP
    cout<<"veccpp: resizing from 500000 to 100 elements took "<<elapsedTime<<" microseconds"<<endl;
    //testdata<<"veccpp: resizing from 500000 to 100 elements took "<<elapsedTime<<" microseconds"<<endl;

    TIMER_START
    vecimpl.resize(100);
    TIMER_STOP
    cout<<"vecimpl: resizing from 500000 to 100 elements took "<<elapsedTime<<" microseconds"<<endl;
    //testdata<<"vecimpl: resizing from 500000 to 100 elements took "<<elapsedTime<<" microseconds"<<endl;

    /*
    //resizing smaller WITH ARGUMENTS

    veccpp.clear();                                 //clear both vectors.
    vecimpl.clear();

    for(int i=0; i<1000; i++){                       //fill both vectors with 1000 elements
        veccpp.push_back(i);
        vecimpl.push_back(i);
    }

    TIMER_START
    veccpp.resize(50,5);
    TIMER_STOP
    cout<<"veccpp: resizing from 1000 to 50 elements (valuetype arg = 5) took "<<elapsedTime<<" microseconds"<<endl;

    TIMER_START
    vecimpl.resize(50,5);
    TIMER_STOP
    cout<<"vecimpl: resizing from 1000 to 50 elements (valuetype arg = 5) took "<<elapsedTime<<" microseconds"<<endl;
    */
}
