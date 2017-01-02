#include "SortClass.h"
#include <iostream>
#include <windows.h>

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
    elapsedTime=(float)((t2.QuadPart-t1.QuadPart)*1000000000)/frequency.QuadPart; \

using namespace std;

SortClass::SortClass()
{
    //ctor
}

SortClass::~SortClass()
{
    //dtor
}


void SortClass::bubblesort(int arr[], int n){
    TIMER_INIT;
    TIMER_START;

    int i,j,temp;

     for(i=1;i<n;++i)
    {
        for(j=0;j<(n-i);++j)
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
    }

    TIMER_STOP;
    cout<<"bubblesort took: " <<elapsedTime <<" nanoseconds"<<endl;




}

void SortClass::bubbleSort(vector<int>& a)
{
        TIMER_INIT;
        TIMER_START;

        int temp;
        bool swapp = true;
        while(swapp){
        swapp = false;
        for (int i = 0; i < a.size()-1; i++) {
            if (a[i]>a[i+1] ){
                temp = a[i];
                a[i]=a[i+1];
                a[i+1]=temp;





                //a[i] += a[i+1];
                //a[i+1] = a[i] - a[i+1];
                //a[i] -=a[i+1];
                swapp = true;
            }
        }
    }

    TIMER_STOP;
    cout<<"bubblesort took: " <<elapsedTime <<" nanoseconds"<<endl;

}

void SortClass::printVector(vector<int> a){
    for (size_t i=0;  i <a.size();  i++) {
        cout<<a[i]<<" ";

    }
  cout<<endl;
}
