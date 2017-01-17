#ifndef TEST_H
#define TEST_H
#include<vector>
using namespace std;

    int test();
    int testpopback();
    int testpushback();
    int testresize();
    int testerase();
    int teststuff();
    void vprint(VectorClass);
    void vectorprint(vector<int>);


#define TIMER_INIT \
    LARGE_INTEGER frequency; \
    LARGE_INTEGER t1,t2; \
    QueryPerformanceFrequency(&frequency);\
    double elapsedTime;


/** Use to start the performance timer */
#define TIMER_START \
QueryPerformanceCounter(&t1);

/** Use to stop the performance timer and output the result to the standard stream. Less verbose than \c TIMER_STOP_VERBOSE */
#define TIMER_STOP \
    QueryPerformanceCounter(&t2); \
    elapsedTime=(float)((t2.QuadPart-t1.QuadPart)*1000)/frequency.QuadPart; \



#endif // TEST_H
