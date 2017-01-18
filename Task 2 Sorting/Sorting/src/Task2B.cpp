#include "SortClass.h"

int task2b(){

    SortClass sc;
    vector<int> myvector1,myvector2,myvector3,myvector4,myvector5,myvector6,myvector7,myvector8;

    ofstream pins;
    pins.open("PINcodes.txt",ofstream::out | std::ofstream::app);

    ofstream writefile;
    writefile.open("task2b.txt",ofstream::out | std::ofstream::app);

    ifstream infile("creditcardnumbers.txt");
    string line;
    int count = 0;

    //getting the pinnumbers from the textfile and putting them in the vector.
    while (getline(infile, line, '-'))
    {
          istringstream iss(line);
          int n;


          while (iss >> n)
          {
                count++;
                if(count == 5){
                    myvector1.push_back(n);
                    myvector2.push_back(n);
                    myvector3.push_back(n);
                    myvector4.push_back(n);
                    myvector5.push_back(n);
                    myvector6.push_back(n);
                    myvector7.push_back(n);
                    myvector8.push_back(n);
                    //pins<<setfill('0')<<setw(4)<<n<<endl;
                    count = 0;
                }
          }
    }
    /*
    cout<<myvector1[20000]<<endl;
    cout<<myvector2[19999]<<endl;
    cout<<myvector3[19998]<<endl;
    cout<<myvector4[19997]<<endl;
    cout<<myvector5[19996]<<endl;
    cout<<myvector6[19995]<<endl;
    cout<<myvector7[19994]<<endl;
    cout<<myvector8[19993]<<endl;
    */

    //bubblesort
    TIMER_INIT
    TIMER_START
    sc.bubbleSort(myvector1);
    TIMER_STOP
    cout<<"Bubblesort       took "<<elapsedTime<<" microseconds"<<endl;
    writefile<<"Bubblesort       took "<<elapsedTime<<" microseconds"<<endl;

    //insertionsort
    TIMER_START;
    sc.insertionSort(myvector2);
    TIMER_STOP;
    cout<<"Insertionsort    took: "<<elapsedTime<<" microseconds"<<endl;
    writefile<<"Insertionsort    took: "<<elapsedTime<<" microseconds"<<endl;

    //mergesort
    TIMER_START;
    sc.mergeSort(myvector3, 0, myvector3.size()-1);
    TIMER_STOP;
    cout<<"Mergesort        took: " <<elapsedTime <<" microseconds"<<endl;
    writefile<<"Mergesort        took: " <<elapsedTime <<" microseconds"<<endl;

    //quicksort
    TIMER_START;
    sc.quickSort(myvector4, 0, myvector4.size()-1);
    TIMER_STOP;
    cout<<"Quicksort        took: "<<elapsedTime <<" microseconds"<<endl;
    writefile<<"Quicksort        took: "<<elapsedTime <<" microseconds"<<endl;

    //selectionsort
    TIMER_START;
    sc.selectionSort(myvector5);
    TIMER_STOP;
    cout<<"Selectionsort    took: "<<elapsedTime<<" microseconds"<<endl;
    writefile<<"Selectionsort    took: "<<elapsedTime<<" microseconds"<<endl;


    //countsort
    TIMER_START;
    sc.countSort(myvector6);
    TIMER_STOP
    cout<<"Countsort        took: "<<elapsedTime<<" microseconds"<<endl;
    writefile<<"Countsort        took: "<<elapsedTime<<" microseconds"<<endl;


    //radixsort
    TIMER_START;
    sc.radixSort(myvector7);
    TIMER_STOP
    cout<<"Radixsort        took: "<<elapsedTime<<" microseconds"<<endl;
    writefile<<"Radixsort         took: "<<elapsedTime<<" microseconds"<<endl;

     //bucketsort
    TIMER_START;
    sc.bucketSort(myvector8);
    TIMER_STOP
    cout<<"Bucketsort        took: "<<elapsedTime<<" microseconds"<<endl;
    writefile<<"Bucketsort        took: "<<elapsedTime<<" microseconds"<<endl;

    /*
    for(int i = 0; i <= 20000; i++){
        cout<<setfill('0')<<setw(4)<<myvector8[i]<<endl;
    }

    */

    //cout<<myvector8[20001]<<endl;



    return 0;

}
