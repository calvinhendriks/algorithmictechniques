#include "SortClass.h"
#define RANGE 9999
using namespace std;

SortClass::SortClass()
{
    //ctor
}

SortClass::~SortClass()
{
    //dtor
}

void SortClass::bubbleSort(vector<int>& a)
{


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



}

void SortClass::insertionSort(vector<int>& arr)
{
   int i, key, j;
   for (i = 1; i < arr.size(); i++)
   {
       key = arr[i];
       j = i-1;

       /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}


// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void SortClass::merge(vector<int>& arr, int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    /* create temp arrays */
    int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void SortClass::mergeSort(vector<int>& arr, int l, int r)
{

    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }

}

int SortClass::partition(vector<int>& arr, int low, int high)
{
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element

    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

/* The main function that implements QuickSort
 arr[] --> Array to be sorted,
  low  --> Starting index,
  high  --> Ending index */
void SortClass::quickSort(vector<int>& arr, int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void SortClass::selectionSort(vector<int>& a)
{
    for (int i = 2; i < a.size(); i++)
    {
        for (int j = i; j >= 1; j--)
        {
            if (a[j] < a[j - 1])
            {
                int temp = a[j - 1];
                a[j - 1] = a[j];
                a[j] = temp;
            }
        }
    }
}

void SortClass::countSort(vector<int>& arr){

// The main function that sort the given string arr[] in
// alphabatical order

    // The output character array that will have sorted arr
    int output[arr.size()];

    // Create a count array to store count of inidividul
    // characters and initialize count array as 0
    int count[RANGE + 1], i;
    memset(count, 0, sizeof(count));

    cout<<"test"<<endl;

    // Store count of each character
    for(i = 0; i<arr.size(); ++i)
        ++count[arr[i]];

    // Change count[i] so that count[i] now contains actual
    // position of this character in output array
    for (i = 1; i <= RANGE; ++i)
        count[i] += count[i-1];

    cout<<"test"<<endl;

    // Build the output character array
    for (i = 0; i<arr.size(); ++i)
    {
        output[count[arr[i]]-1] = arr[i];
        --count[arr[i]];
    }

    // Copy the output array to arr, so that arr now
    // contains sorted characters
    for (i = 0; i<arr.size(); ++i)
        arr[i] = output[i];
}

//RADIX SORT !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!111

// A utility function to get maximum value in arr[]
int SortClass::getMax(vector<int> arr)
{
    int mx = arr[0];
    for (int i = 1; i < arr.size(); i++)
        if (arr[i] > mx)
            mx = arr[i];
    return mx;
}

// A function to do counting sort of arr[] according to
// the digit represented by exp.
void SortClass:: expcountSort(vector<int>& arr, int exp)
{
    int n = arr.size();
    int output[n]; // output array
    int i, count[10] = {0};

    // Store count of occurrences in count[]
    for (i = 0; i < n; i++)
        count[ (arr[i]/exp)%10 ]++;

    // Change count[i] so that count[i] now contains actual
    //  position of this digit in output[]
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];

    // Build the output array
    for (i = n - 1; i >= 0; i--)
    {
        output[count[ (arr[i]/exp)%10 ] - 1] = arr[i];
        count[ (arr[i]/exp)%10 ]--;
    }

    // Copy the output array to arr[], so that arr[] now
    // contains sorted numbers according to current digit
    for (i = 0; i < n; i++)
        arr[i] = output[i];
}

// The main function to that sorts arr[] of size n using
// Radix Sort
void SortClass::radixSort(vector<int>& arr)
{
    // Find the maximum number to know number of digits
    int m = getMax(arr);

    // Do counting sort for every digit. Note that instead
    // of passing digit number, exp is passed. exp is 10^i
    // where i is current digit number
    for (int exp = 1; m/exp > 0; exp *= 10)
        expcountSort(arr, exp);
}

void SortClass::bucketSort(vector<int>& arr){
    int n = arr.size();
  //Here range is [0,9999]
  int m = 10000;

  //Create m empty buckets
  int buckets[m];

  //Intialize all buckets to 0
  for (int i = 0; i < m; ++i)
    buckets[i] = 0;

  //Increment the number of times each element is present in the input
  //array. Insert them in the buckets
  for (int i = 0; i < n; ++i)
    ++buckets[arr[i]];

  //Sort using insertion sort and concatenate
  for (int i = 0, j = 0; j < m; ++j)
    for (int k = buckets[j]; k > 0; --k)
      arr[i++] = j;
}


void SortClass::printVector(vector<int> a){
    for (size_t i=0;  i <a.size();  i++) {
        cout<<a[i]<<" ";

    }
  cout<<endl;
}

void SortClass::swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
