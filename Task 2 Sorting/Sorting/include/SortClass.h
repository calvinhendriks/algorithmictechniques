#ifndef SORTCLASS_H
#define SORTCLASS_H
#include <vector>

using namespace std;
class SortClass
{
    public:
        SortClass();
        ~SortClass();
        void bubblesort(int* , int);
        void bubbleSort(vector<int>&);
        void printVector(vector<int>);

        //int* insertionsort();
        //int* mergesort();
        //int* quicksort();

    protected:

    private:
    double elapsedTime;
};

#endif // SORTCLASS_H
