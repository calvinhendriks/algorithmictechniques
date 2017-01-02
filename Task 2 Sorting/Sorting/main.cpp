#include <iostream>
#include <SortClass.h>
#include <vector>
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
#define TIMER_START QueryPerformanceCounter(&t1);

/** Use to stop the performance timer and output the result to the standard stream. Less verbose than \c TIMER_STOP_VERBOSE */
#define TIMER_STOP \
    QueryPerformanceCounter(&t2); \
    elapsedTime=(float)((t2.QuadPart-t1.QuadPart)*1000000000000)/frequency.QuadPart; \

    double elapsedTime;

using namespace std;
void vprint(vector<int>);


int main()
{
    SortClass sc;
    srand(time(NULL));
    vector<int> myvector (1);
    //assign some random values:
    for (int i=0; i<20; i++) myvector[i]=rand();
    //bubblesort
    TIMER_INIT;
    TIMER_START;
    sc.bubbleSort(myvector);
    TIMER_STOP;
    cout<<"bubblesort took: " <<elapsedTime <<" picoseconds"<<endl;
    //mergesort
    //TIMER_INIT;
    TIMER_START;
    sc.mergeSort(myvector, 0, myvector.size()-1);
    TIMER_STOP;
    cout<<"mergesort took: " <<elapsedTime <<" picoseconds"<<endl;
    return 0;


}

void vprint(vector<int> v){
for (int i=0; i<v.size();i++){
    cout << v[i] << endl;
}
}
