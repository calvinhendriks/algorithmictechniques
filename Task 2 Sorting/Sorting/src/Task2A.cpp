#include "SortClass.h"

int task2a(){

    SortClass sc;
    srand(time(NULL));
    int n = 1000;
    vector<int> myvector1;
    vector<int> myvector2;
    vector<int> myvector3;
    vector<int> myvector4;

    ofstream writefile;
    writefile.open("task2a.txt",ofstream::out | std::ofstream::app);

    //std::vector<int>::size_type sz = myvector.size();



    //assign some random values:
    for(int n = 5; n<=50; n+=5){
        for (int i=0; i<n; i++){
            //myvector[i]=myvector2[i]=myvector3[i]=myvector4[i]=myvector5[i]=rand();
            int n = rand();
            myvector1.push_back(n);
            myvector2.push_back(n);
            myvector3.push_back(n);
            myvector4.push_back(n);
        }

         //bubblesort
        TIMER_INIT;
        TIMER_START;
        sc.bubbleSort(myvector1);
        TIMER_STOP;
        writefile<<"Bubblesort: "<<n<<" elements took:       " <<elapsedTime <<" microseconds"<<endl;

        //insertionsort
        TIMER_START;
        sc.insertionSort(myvector4);
        TIMER_STOP;
        writefile<<"Insertionsort: "<<n<<" elements took:    "<<elapsedTime<<" microseconds"<<endl;


        //mergesort
        TIMER_START;
        sc.mergeSort(myvector2, 0, myvector2.size()-1);
        TIMER_STOP;
        writefile<<"Mergesort: "<<n<<" elements took:        " <<elapsedTime <<" microseconds"<<endl;

        //quicksort
        TIMER_START;
        sc.quickSort(myvector3, 0, myvector3.size()-1);
        TIMER_STOP;
        writefile<<"Quicksort: "<<n<<" elements took:        "<<elapsedTime <<" microseconds"<<endl;


        myvector1.clear();
        myvector2.clear();
        myvector3.clear();
        myvector4.clear();


    }


    for(int n = 1000; n<=10000; n+=1000){
        for (int i=0; i<n; i++){
            //myvector[i]=myvector2[i]=myvector3[i]=myvector4[i]=myvector5[i]=rand();
            int n = rand();
            myvector1.push_back(n);
            myvector2.push_back(n);
            myvector3.push_back(n);
            myvector4.push_back(n);
        }

         //bubblesort
        TIMER_INIT;
        TIMER_START;
        sc.bubbleSort(myvector1);
        TIMER_STOP;
        writefile<<"Bubblesort: "<<n<<" elements took:       " <<elapsedTime <<" picoseconds"<<endl;

        //insertionsort
        TIMER_START;
        sc.insertionSort(myvector4);
        TIMER_STOP;
        writefile<<"Insertionsort: "<<n<<" elements took:    "<<elapsedTime<<" picoseconds"<<endl;


        //mergesort
        TIMER_START;
        sc.mergeSort(myvector2, 0, myvector2.size()-1);
        TIMER_STOP;
        writefile<<"Mergesort: "<<n<<" elements took:        " <<elapsedTime <<" picoseconds"<<endl;

        //quicksort
        TIMER_START;
        sc.quickSort(myvector3, 0, myvector3.size()-1);
        TIMER_STOP;
        writefile<<"Quicksort: "<<n<<" elements took:        "<<elapsedTime <<" picoseconds"<<endl;


        myvector1.clear();
        myvector2.clear();
        myvector3.clear();
        myvector4.clear();


    }




    /*
    for(int i = 0; i <= 10; i++){
        cout<<myvector1[i]<<endl;
        cout<<myvector2[i]<<endl;
        cout<<myvector3[i]<<endl;
        cout<<myvector4[i]<<endl;

    }
    */





    return 0;
}
