#ifndef SORTCLASS_H
#define SORTCLASS_H
#include <vector>

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
        void selectionSort(vector<int>&);
        void quickSort(vector<int>&, int, int);
        void printVector(vector<int>);
        void swap(int* , int* );


        //int* insertionsort();
        //int* mergesort();
        //int* quicksort();

    protected:

    private:
    //double elapsedTime;
};


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
