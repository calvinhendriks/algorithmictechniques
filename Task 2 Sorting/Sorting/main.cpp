#include <iostream>
#include <SortClass.h>
#include <vector>
#include <iomanip>
#include <time.h>
#include <cmath>
#include <stdlib.h>
#include <cstdio>
#include <Windows.h>

using namespace std;
void vprint(vector<int>);


int main()
{
    SortClass sc;
    srand(time(NULL));
    int n = 1000;
    vector<int> myvector(n);
    vector<int> myvector2 (n);
    vector<int> myvector3 (n);
    vector<int> myvector4 (n);
    vector<int> myvector5 (n);
    std::vector<int>::size_type sz = myvector.size();



    //assign some random values:
    for (unsigned i=0; i<sz; i++){
            myvector[i]=myvector2[i]=myvector3[i]=myvector4[i]=myvector5[i]=rand();
    }



    //bubblesort
    TIMER_INIT;
    TIMER_START;
    sc.bubbleSort(myvector);
    TIMER_STOP;
    cout<<"bubblesort took: " <<elapsedTime <<" picoseconds"<<endl;

    //insertionsort
    TIMER_START;
    sc.insertionSort(myvector4);
    TIMER_STOP;
    cout<<"insertionsort took: "<<elapsedTime<<" picoseconds"<<endl;


    //mergesort
    TIMER_START;
    sc.mergeSort(myvector2, 0, myvector2.size()-1);
    TIMER_STOP;
    cout<<"mergesort took: " <<elapsedTime <<" picoseconds"<<endl;

    //quicksort
    TIMER_START;
    sc.quickSort(myvector3, 0, myvector3.size()-1);
    TIMER_STOP;
    cout<<"quicksort took: "<<elapsedTime <<" picoseconds"<<endl;

    //selectionsort
    TIMER_START;
    sc.selectionSort(myvector5);
    TIMER_STOP;
    cout<<"selectionsort took: "<<elapsedTime<<" picoseconds"<<endl;

    return 0;


}

