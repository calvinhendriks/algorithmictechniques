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
    double elapsedTime;
};

#endif // SORTCLASS_H
