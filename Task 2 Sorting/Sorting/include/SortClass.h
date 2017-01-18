#ifndef SORTCLASS_H
#define SORTCLASS_H
#include <vector>
#include <iostream>
#include <iomanip>
#include <time.h>
#include <cmath>
#include <stdlib.h>
#include <cstdio>
#include <Windows.h>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>
#include <algorithm>
using namespace std;

class SortClass
{
    public:
        SortClass();
        ~SortClass();
        //void bubblesort(int* , int);
        void bubbleSort(vector<int>&);
        void insertionSort(vector<int>&);

        void merge(vector<int>&, int, int, int);
        void mergeSort(vector<int>&, int , int);

        int partition(vector<int>&, int, int);
        void quickSort(vector<int>&, int, int);

        void selectionSort(vector<int>&);

        void countSort(vector<int>&);

        int getMax(vector<int>);
        void expcountSort(vector<int>&, int);
        void radixSort(vector<int>&);

        void bucketSort(vector<int>&);


        void printVector(vector<int>);
        void swap(int* , int* );


        //int* insertionsort();
        //int* mergesort();
        //int* quicksort();

    protected:

    private:
    //double elapsedTime;
};

int task2a();
int task2b();
int testalgorithms();


/** Use to init the clock */
#define TIMER_INIT \
    LARGE_INTEGER frequency; \
    LARGE_INTEGER t1,t2; \
    QueryPerformanceFrequency(&frequency);\
    double elapsedTime;


/** Use to start the performance timer */
#define TIMER_START QueryPerformanceCounter(&t1);

/** Use to stop the performance timer and output the result to the standard stream. Less verbose than \c TIMER_STOP_VERBOSE */
#define TIMER_STOP \
    QueryPerformanceCounter(&t2); \
    elapsedTime=(float)((t2.QuadPart-t1.QuadPart)*1000)/frequency.QuadPart; \

#endif // SORTCLASS_H
